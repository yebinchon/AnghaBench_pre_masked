
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int gfp_t ;


 struct page* FUNC_0 (int,int ,unsigned int) ;
 unsigned int FUNC_1 (size_t) ;
 void* FUNC_2 (unsigned long,unsigned int,size_t) ;
 scalar_t__ FUNC_3 (struct page*) ;

void *FUNC_4(int VAR_0, size_t VAR_1, gfp_t VAR_2)
{
 unsigned VAR_3 = FUNC_1(VAR_1);
 struct page *VAR_4 = FUNC_0(VAR_0, VAR_2, VAR_3);
 if (!VAR_4)
  return ((void*)0);
 return FUNC_2((unsigned long)FUNC_3(VAR_4), VAR_3, VAR_1);
}
