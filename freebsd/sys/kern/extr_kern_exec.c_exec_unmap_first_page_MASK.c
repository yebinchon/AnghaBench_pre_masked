
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
struct image_params {int * firstpage; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(struct image_params *VAR_1)
{
 vm_page_t VAR_2;

 if (VAR_1->firstpage != ((void*)0)) {
  VAR_2 = FUNC_1(VAR_1->firstpage);
  FUNC_0(VAR_1->firstpage);
  VAR_1->firstpage = ((void*)0);
  FUNC_2(VAR_2, VAR_0);
 }
}
