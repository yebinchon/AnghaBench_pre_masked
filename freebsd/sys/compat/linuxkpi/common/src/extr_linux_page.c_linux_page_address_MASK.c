
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {scalar_t__ object; int pindex; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct page*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

void *
FUNC_3(struct page *VAR_4)
{

 if (VAR_4->object != VAR_3 && VAR_4->object != VAR_2) {
  return (VAR_0 ?
      ((void *)(uintptr_t)FUNC_1(FUNC_2(VAR_4))) :
      ((void*)0));
 }
 return ((void *)(uintptr_t)(VAR_1 +
     FUNC_0(VAR_4->pindex)));
}
