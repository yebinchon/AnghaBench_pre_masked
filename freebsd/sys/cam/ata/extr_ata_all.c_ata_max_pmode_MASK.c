
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_params {int atavalid; int apiomodes; int mwdmamodes; int retired_piomode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int
FUNC_0(struct ata_params *VAR_7)
{
    if (VAR_7->atavalid & VAR_0) {
 if (VAR_7->apiomodes & 0x02)
     return VAR_5;
 if (VAR_7->apiomodes & 0x01)
     return VAR_4;
    }
    if (VAR_7->mwdmamodes & 0x04)
 return VAR_5;
    if (VAR_7->mwdmamodes & 0x02)
 return VAR_4;
    if (VAR_7->mwdmamodes & 0x01)
 return VAR_3;
    if ((VAR_7->retired_piomode & VAR_6) == 0x200)
 return VAR_3;
    if ((VAR_7->retired_piomode & VAR_6) == 0x100)
 return VAR_2;
    if ((VAR_7->retired_piomode & VAR_6) == 0x000)
 return VAR_1;
    return VAR_1;
}
