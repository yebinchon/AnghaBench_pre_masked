
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int var ;
struct TYPE_3__ {int Revision; } ;
struct TYPE_4__ {TYPE_1__ Hdr; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,char*,int ,int ) ;
 int FUNC_1 (char*,int,char*,int,int) ;

void
FUNC_2(void)
{
 char VAR_4[128];

 FUNC_1(VAR_4, sizeof(VAR_4), "%d.%02d", VAR_1->Hdr.Revision >> 16,
     VAR_1->Hdr.Revision & 0xffff);
 FUNC_0("efi-version", VAR_0, VAR_4, VAR_2, VAR_3);
}
