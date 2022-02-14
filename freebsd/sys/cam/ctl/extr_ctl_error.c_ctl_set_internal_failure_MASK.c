
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct ctl_scsiio {int dummy; } ;
typedef int sks ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ctl_scsiio*,int,int ,int,int,int ,int,int*,int ) ;

void
FUNC_1(struct ctl_scsiio *VAR_5, int VAR_6,
    uint16_t VAR_7)
{
 uint8_t VAR_8[3];

 if (VAR_6) {
  VAR_8[0] = VAR_4;
  VAR_8[1] = (VAR_7 >> 8) & 0xff;
  VAR_8[2] = VAR_7 & 0xff;
 }


 FUNC_0(VAR_5,
                          1,
                      VAR_3,
                0x44,
                 0x00,
                 (VAR_6 != 0) ? VAR_2 : VAR_1,
                 sizeof(VAR_8),
                 VAR_8,
        VAR_0);
}
