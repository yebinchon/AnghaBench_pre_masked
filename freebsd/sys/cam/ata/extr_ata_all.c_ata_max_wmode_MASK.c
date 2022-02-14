
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_params {int mwdmamodes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_0(struct ata_params *VAR_3)
{
    if (VAR_3->mwdmamodes & 0x04)
 return VAR_2;
    if (VAR_3->mwdmamodes & 0x02)
 return VAR_1;
    if (VAR_3->mwdmamodes & 0x01)
 return VAR_0;
    return -1;
}
