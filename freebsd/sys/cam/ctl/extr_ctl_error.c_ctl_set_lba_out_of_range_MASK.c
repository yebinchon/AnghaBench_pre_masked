
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct ctl_scsiio {int dummy; } ;
typedef int info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ctl_scsiio*,int,int ,int,int,int ,int,int **,int ) ;
 int FUNC_1 (scalar_t__,int *) ;

void
FUNC_2(struct ctl_scsiio *VAR_4, uint64_t VAR_5)
{
 uint8_t VAR_6[8];

 FUNC_1(VAR_5, VAR_6);


 FUNC_0(VAR_4,
                          1,
                      VAR_3,
                0x21,
                 0x00,
                 (VAR_5 != 0) ? VAR_0 : VAR_2,
                 sizeof(VAR_6), &VAR_6,
        VAR_1);
}
