
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_2__ {int channel; } ;
struct tr_info {int hwchns; int playchns; TYPE_1__ recchinfo; struct tr_chinfo* chinfo; } ;
struct tr_chinfo {int bufhalf; int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct tr_info*,int ,int) ;
 int FUNC_2 (struct tr_info*,int ,int,int) ;

__attribute__((used)) static void
FUNC_3(void *VAR_9)
{
 struct tr_info *VAR_10 = (struct tr_info *)VAR_9;
 struct tr_chinfo *VAR_11;
 u_int32_t VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17;

 VAR_16 = FUNC_1(VAR_10, VAR_6, 4);
 if (VAR_16 & VAR_0) {
  VAR_15 = 0;
  while (VAR_15 < VAR_10->hwchns) {
   VAR_13 = 0x00000001;
   VAR_12 = FUNC_1(VAR_10, (VAR_15 < 32)? VAR_2 : VAR_3, 4);
   VAR_14 = FUNC_1(VAR_10, (VAR_15 < 32)? VAR_4 : VAR_5, 4);
   if (VAR_12) {
    do {
     if (VAR_12 & VAR_13) {
      VAR_17 = (VAR_14 & VAR_13)? 1 : 0;
      if (VAR_15 < VAR_10->playchns) {
       VAR_11 = &VAR_10->chinfo[VAR_15];

       if (VAR_11->bufhalf != VAR_17) {
        FUNC_0(VAR_11->channel);
        VAR_11->bufhalf = VAR_17;
       }
      }
     }
     VAR_15++;
     VAR_13 <<= 1;
    } while (VAR_15 & 31);
   } else
    VAR_15 += 32;

   FUNC_2(VAR_10, (VAR_15 <= 32)? VAR_2 : VAR_3, VAR_12, 4);
  }
 }
 if (VAR_16 & VAR_1) {
  FUNC_0(VAR_10->recchinfo.channel);
  FUNC_1(VAR_10, VAR_8, 1);
  FUNC_1(VAR_10, VAR_7, 1);
 }
}
