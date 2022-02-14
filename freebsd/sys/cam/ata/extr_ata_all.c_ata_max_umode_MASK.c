
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_params {int atavalid; int udmamodes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int
FUNC_0(struct ata_params *VAR_8)
{
    if (VAR_8->atavalid & VAR_0) {
 if (VAR_8->udmamodes & 0x40)
     return VAR_7;
 if (VAR_8->udmamodes & 0x20)
     return VAR_6;
 if (VAR_8->udmamodes & 0x10)
     return VAR_5;
 if (VAR_8->udmamodes & 0x08)
     return VAR_4;
 if (VAR_8->udmamodes & 0x04)
     return VAR_3;
 if (VAR_8->udmamodes & 0x02)
     return VAR_2;
 if (VAR_8->udmamodes & 0x01)
     return VAR_1;
    }
    return -1;
}
