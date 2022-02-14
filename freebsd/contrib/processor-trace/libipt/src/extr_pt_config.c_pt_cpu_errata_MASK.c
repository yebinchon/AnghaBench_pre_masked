
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_errata {int bdm70; int bdm64; int skd007; int skd022; int skd010; int skl014; int skl168; int apl12; int apl11; } ;
struct pt_cpu {scalar_t__ vendor; int family; int model; } ;


 int FUNC_0 (struct pt_errata*,int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_1(struct pt_errata *VAR_3, const struct pt_cpu *VAR_4)
{
 if (!VAR_3 || !VAR_4)
  return -VAR_2;

 FUNC_0(VAR_3, 0, sizeof(*VAR_3));


 if (VAR_4->vendor != VAR_0)
  return -VAR_1;

 switch (VAR_4->family) {
 case 0x6:
  switch (VAR_4->model) {
  case 0x3d:
  case 0x47:
  case 0x4f:
  case 0x56:
   VAR_3->bdm70 = 1;
   VAR_3->bdm64 = 1;
   return 0;

  case 0x4e:
  case 0x5e:
  case 0x8e:
  case 0x9e:
   VAR_3->bdm70 = 1;
   VAR_3->skd007 = 1;
   VAR_3->skd022 = 1;
   VAR_3->skd010 = 1;
   VAR_3->skl014 = 1;
   VAR_3->skl168 = 1;
   return 0;

  case 0x55:
  case 0x66:
  case 0x7d:
  case 0x7e:
   VAR_3->bdm70 = 1;
   VAR_3->skl014 = 1;
   VAR_3->skd022 = 1;
   return 0;

  case 0x5c:
  case 0x5f:
   VAR_3->apl12 = 1;
   VAR_3->apl11 = 1;
   return 0;

  case 0x7a:
  case 0x86:
   VAR_3->apl11 = 1;
   return 0;
  }
  break;
 }

 return -VAR_1;
}
