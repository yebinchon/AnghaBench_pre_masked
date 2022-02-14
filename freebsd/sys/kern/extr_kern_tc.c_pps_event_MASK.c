
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u_int ;
struct timespec {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_10__ {int clear_sequence; struct timespec clear_timestamp; scalar_t__ clear_ffcount; int assert_sequence; struct timespec assert_timestamp; scalar_t__ assert_ffcount; } ;
struct TYPE_9__ {int clear_sequence; struct timespec clear_timestamp; int assert_sequence; struct timespec assert_timestamp; } ;
struct TYPE_8__ {int mode; struct timespec clear_offset; struct timespec assert_offset; } ;
struct pps_state {scalar_t__ capgen; int kcmode; int* ppscount; int capcount; TYPE_5__* capth; TYPE_7__* capffth; TYPE_4__* ppstc; TYPE_3__ ppsinfo_ffc; TYPE_2__ ppsinfo; TYPE_1__ ppsparam; } ;
struct bintime {scalar_t__ frac; scalar_t__ sec; } ;
typedef int pps_seq_t ;
typedef scalar_t__ ffcounter ;
struct TYPE_13__ {int period; } ;
struct TYPE_14__ {struct bintime tick_time; TYPE_6__ cest; scalar_t__ tick_ffcount; } ;
struct TYPE_12__ {scalar_t__ th_generation; int th_offset_count; int th_scale; TYPE_4__* th_counter; struct bintime th_bintime; } ;
struct TYPE_11__ {int tc_counter_mask; int tc_frequency; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct bintime*,struct timespec*) ;
 int FUNC_4 (struct bintime*,struct bintime*) ;
 int FUNC_5 (struct bintime*,int) ;
 int FUNC_6 (int,int ,struct bintime*) ;
 int FUNC_7 (struct timespec*,scalar_t__) ;
 int FUNC_8 (struct timespec*,struct timespec*,struct timespec*) ;
 int FUNC_9 (struct pps_state*) ;

void
FUNC_10(struct pps_state *VAR_4, int VAR_5)
{
 struct bintime VAR_6;
 struct timespec VAR_7, *VAR_8, *VAR_9;
 u_int VAR_10, *VAR_11;
 int VAR_12;
 pps_seq_t *VAR_13;
 FUNC_0(VAR_4 != ((void*)0), ("NULL pps pointer in pps_event"));

 if ((VAR_5 & VAR_4->ppsparam.mode) == 0)
  return;

 if (VAR_4->capgen == 0 || VAR_4->capgen !=
     FUNC_1(&VAR_4->capth->th_generation))
  return;


 if (VAR_5 == VAR_0) {
  VAR_8 = &VAR_4->ppsinfo.assert_timestamp;
  VAR_9 = &VAR_4->ppsparam.assert_offset;
  VAR_12 = VAR_4->ppsparam.mode & VAR_2;



  VAR_11 = &VAR_4->ppscount[0];
  VAR_13 = &VAR_4->ppsinfo.assert_sequence;





 } else {
  VAR_8 = &VAR_4->ppsinfo.clear_timestamp;
  VAR_9 = &VAR_4->ppsparam.clear_offset;
  VAR_12 = VAR_4->ppsparam.mode & VAR_3;



  VAR_11 = &VAR_4->ppscount[1];
  VAR_13 = &VAR_4->ppsinfo.clear_sequence;





 }





 if (VAR_4->ppstc != VAR_4->capth->th_counter) {
  VAR_4->ppstc = VAR_4->capth->th_counter;
  *VAR_11 = VAR_4->capcount;
  VAR_4->ppscount[2] = VAR_4->capcount;
  return;
 }


 VAR_10 = VAR_4->capcount - VAR_4->capth->th_offset_count;
 VAR_10 &= VAR_4->capth->th_counter->tc_counter_mask;
 VAR_6 = VAR_4->capth->th_bintime;
 FUNC_5(&VAR_6, VAR_4->capth->th_scale * VAR_10);
 FUNC_3(&VAR_6, &VAR_7);


 FUNC_2();
 if (VAR_4->capgen != VAR_4->capth->th_generation)
  return;

 *VAR_11 = VAR_4->capcount;
 (*VAR_13)++;
 *VAR_8 = VAR_7;

 if (VAR_12) {
  FUNC_8(VAR_8, VAR_9, VAR_8);
  if (VAR_8->tv_nsec < 0) {
   VAR_8->tv_nsec += 1000000000;
   VAR_8->tv_sec -= 1;
  }
 }
 FUNC_9(VAR_4);
}
