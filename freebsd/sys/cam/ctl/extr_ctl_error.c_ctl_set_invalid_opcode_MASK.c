
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
 int FUNC_0 (struct ctl_scsiio*,int,int ,int,int,int ,int,int*,int ) ;
 int FUNC_1 (int ,int*) ;

void
FUNC_2(struct ctl_scsiio *VAR_5)
{
 uint8_t VAR_6[3];

 VAR_6[0] = VAR_4 | VAR_2;
 FUNC_1(0, &VAR_6[1]);


 FUNC_0(VAR_5,
                          1,
                      VAR_3,
                0x20,
                 0x00,
                 VAR_1,
                 sizeof(VAR_6),
                 VAR_6,
        VAR_0);
}
