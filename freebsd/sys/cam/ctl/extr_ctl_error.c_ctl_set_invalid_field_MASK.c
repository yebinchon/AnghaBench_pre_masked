
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ctl_scsiio {int dummy; } ;
typedef int sks ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ctl_scsiio*,int,int ,int,int,int ,int,int*,int ) ;
 int FUNC_1 (int,int*) ;

void
FUNC_2(struct ctl_scsiio *VAR_7, int VAR_8, int VAR_9,
        int VAR_10, int VAR_11, int VAR_12)
{
 uint8_t VAR_13[3];
 int VAR_14;

 if (VAR_9 != 0) {

  VAR_14 = 0x24;
 } else {

  VAR_14 = 0x26;
 }

 if (VAR_8) {
  VAR_13[0] = VAR_6;
  if (VAR_9)
   VAR_13[0] |= VAR_4;
  FUNC_1(VAR_10, &VAR_13[1]);

  if (VAR_11)
   VAR_13[0] |= VAR_0 | VAR_12;
 }

 FUNC_0(VAR_7,
                          1,
                      VAR_5,
        VAR_14,
                 0x00,
                 (VAR_8 != 0) ? VAR_3 : VAR_2,
                 sizeof(VAR_13),
                 VAR_13,
        VAR_1);
}
