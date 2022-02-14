
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efi_md {int md_type; int md_pages; int md_phys; } ;
 int VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void
FUNC_1(struct efi_md *VAR_1)
{

 switch (VAR_1->md_type) {
 case 128:





 case 131:
 case 130:
 case 133:
 case 132:
 case 129:



  FUNC_0(VAR_1->md_phys,
      VAR_1->md_pages * VAR_0);
  break;
 }
}
