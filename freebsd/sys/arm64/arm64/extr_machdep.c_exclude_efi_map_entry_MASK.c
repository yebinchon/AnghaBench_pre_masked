
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efi_md {int md_type; int md_pages; int md_phys; } ;







 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_1(struct efi_md *VAR_2)
{

 switch (VAR_2->md_type) {
 case 130:
 case 129:
 case 132:
 case 131:
 case 128:



  break;
 default:
  FUNC_0(VAR_2->md_phys, VAR_2->md_pages * VAR_1,
      VAR_0);
 }
}
