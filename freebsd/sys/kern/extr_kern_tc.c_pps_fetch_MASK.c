
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int tv_sec; int tv_usec; } ;
struct TYPE_6__ {int current_mode; int clear_sequence; int assert_sequence; } ;
struct TYPE_5__ {int mode; } ;
struct pps_state {int flags; TYPE_3__ ppsinfo; TYPE_2__ ppsparam; int * driver_mtx; } ;
struct TYPE_4__ {int tv_sec; int tv_nsec; } ;
struct pps_fetch_args {scalar_t__ tsformat; TYPE_3__ pps_info_buf; TYPE_1__ timeout; } ;
typedef scalar_t__ pps_seq_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct pps_state*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct pps_state*,int *,int ,char*,int) ;
 int FUNC_3 (struct pps_state*,int *,char*,int) ;
 int FUNC_4 (struct pps_state*,int ,char*,int) ;
 int FUNC_5 (struct timeval*) ;

__attribute__((used)) static int
FUNC_6(struct pps_fetch_args *VAR_6, struct pps_state *VAR_7)
{
 int VAR_8, VAR_9;
 pps_seq_t VAR_10, VAR_11;
 struct timeval VAR_12;

 if (VAR_6->tsformat && VAR_6->tsformat != VAR_5)
  return (VAR_0);
 if (VAR_6->timeout.tv_sec || VAR_6->timeout.tv_nsec) {
  if (VAR_6->timeout.tv_sec == -1)
   VAR_9 = 0x7fffffff;
  else {
   VAR_12.tv_sec = VAR_6->timeout.tv_sec;
   VAR_12.tv_usec = VAR_6->timeout.tv_nsec / 1000;
   VAR_9 = FUNC_5(&VAR_12);
  }
  VAR_10 = FUNC_1(&VAR_7->ppsinfo.assert_sequence);
  VAR_11 = FUNC_1(&VAR_7->ppsinfo.clear_sequence);
  while (VAR_10 == FUNC_1(&VAR_7->ppsinfo.assert_sequence) &&
      VAR_11 == FUNC_1(&VAR_7->ppsinfo.clear_sequence)) {
   if (FUNC_0(VAR_7, 1) && VAR_7->driver_mtx != ((void*)0)) {
    if (VAR_7->flags & VAR_4) {
     VAR_8 = FUNC_3(VAR_7, VAR_7->driver_mtx,
         "ppsfch", VAR_9);
    } else {
     VAR_8 = FUNC_2(VAR_7, VAR_7->driver_mtx, VAR_3,
         "ppsfch", VAR_9);
    }
   } else {
    VAR_8 = FUNC_4(VAR_7, VAR_3, "ppsfch", VAR_9);
   }
   if (VAR_8 == VAR_2) {
    if (VAR_6->timeout.tv_sec == -1) {
     continue;
    } else {
     return (VAR_1);
    }
   } else if (VAR_8 != 0) {
    return (VAR_8);
   }
  }
 }

 VAR_7->ppsinfo.current_mode = VAR_7->ppsparam.mode;
 VAR_6->pps_info_buf = VAR_7->ppsinfo;

 return (0);
}
