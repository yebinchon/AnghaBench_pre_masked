
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vm_page_t ;
typedef int vm_memattr_t ;


 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static vm_page_t
FUNC_3(int VAR_0, vm_memattr_t VAR_1)
{
 vm_page_t VAR_2;

 while (1) {
  VAR_2 = FUNC_1(((void*)0), 0, VAR_0);
  if (VAR_2 != ((void*)0))
   break;
  FUNC_2(((void*)0));
 }
 FUNC_0(VAR_2, VAR_1);
 return (VAR_2);
}
