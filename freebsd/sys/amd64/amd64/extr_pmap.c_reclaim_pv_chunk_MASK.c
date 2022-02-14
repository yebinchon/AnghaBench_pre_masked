
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vm_page_t ;
struct rwlock {int dummy; } ;
typedef int pmap_t ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int ,struct rwlock**,int) ;
 int VAR_0 ;

__attribute__((used)) static vm_page_t
FUNC_2(pmap_t VAR_1, struct rwlock **VAR_2)
{
 vm_page_t VAR_3;
 int VAR_4, VAR_5;

 VAR_5 = FUNC_0(VAR_5);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_5);
  if (VAR_3 != ((void*)0))
   break;
  VAR_5 = (VAR_5 + 1) % VAR_0;
 }

 return (VAR_3);
}
