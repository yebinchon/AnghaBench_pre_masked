
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vm_page_t ;
typedef int vm_memattr_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ,int,int,int ,int,int ,int ,int ) ;
 int FUNC_1 (int,int,int ,int,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static vm_page_t
FUNC_3(int VAR_1, vm_memattr_t VAR_2)
{
 vm_page_t VAR_3;
 int VAR_4;

 for (VAR_4 = 0; ; VAR_4++) {
  VAR_3 = FUNC_0(((void*)0), 0, VAR_1, 1, 0, 0xffffffff,
      VAR_0, 0, VAR_2);
  if (VAR_3 != ((void*)0) || VAR_4 > 2)
   return (VAR_3);
  if (!FUNC_1(VAR_1, 1, 0, 0xffffffff,
      VAR_0, 0))
   FUNC_2(((void*)0));
 }
}
