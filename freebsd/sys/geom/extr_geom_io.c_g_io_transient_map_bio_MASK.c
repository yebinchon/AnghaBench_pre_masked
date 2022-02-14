
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ u_int ;
struct bio {long bio_ma_n; int bio_flags; scalar_t__ bio_ma_offset; scalar_t__ bio_data; int bio_ma; TYPE_1__* bio_to; scalar_t__ bio_length; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,struct bio*,int ) ;
 int FUNC_1 (int ,char*,struct bio*,int ,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (long) ;
 long VAR_7 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (scalar_t__,int ,int ) ;
 long FUNC_8 (scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_9 (int ,long,int,scalar_t__*) ;

__attribute__((used)) static int
FUNC_10(struct bio *VAR_16)
{
 vm_offset_t VAR_17;
 long VAR_18;
 u_int VAR_19;

 FUNC_2(VAR_15, ("unmapped disabled"));

 VAR_18 = FUNC_8(VAR_16->bio_ma_offset + VAR_16->bio_length);
 FUNC_2(VAR_18 / VAR_7 == VAR_16->bio_ma_n, ("Bio too short %p", VAR_16));
 VAR_17 = 0;
 VAR_19 = 0;
 FUNC_5(&VAR_14, 1);
retry:
 if (FUNC_9(VAR_10, VAR_18, VAR_5 | VAR_6, &VAR_17)) {
  if (VAR_12 != 0 &&
      VAR_19 >= VAR_12) {
   FUNC_0(VAR_4, "g_down cannot map bp %p provider %s",
       VAR_16, VAR_16->bio_to->name);
   FUNC_4(&VAR_11, 1);
   return (VAR_2 );
  } else {





   FUNC_1(VAR_4, "g_down retrymap bp %p provider %s r %d",
       VAR_16, VAR_16->bio_to->name, VAR_19);
   FUNC_6("g_d_tra", VAR_8 / 10);
   VAR_19++;
   FUNC_4(&VAR_13, 1);
   goto retry;
  }
 }
 FUNC_4(&VAR_9, 1);
 FUNC_7((vm_offset_t)VAR_17, VAR_16->bio_ma, FUNC_3(VAR_18));
 VAR_16->bio_data = (caddr_t)VAR_17 + VAR_16->bio_ma_offset;
 VAR_16->bio_flags |= VAR_0;
 VAR_16->bio_flags &= ~VAR_1;
 return (VAR_3);
}
