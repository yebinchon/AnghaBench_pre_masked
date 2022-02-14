
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (int,int,int ) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (struct page*) ;

__attribute__((used)) static void *FUNC_3(int VAR_2)
{
 struct page *VAR_3;
 int VAR_4;

 VAR_4 = (VAR_2 == -1) ? VAR_2 : FUNC_1(VAR_2);
 VAR_3 = FUNC_0(VAR_4, VAR_0 | VAR_1, 0);
 if (!VAR_3)
  return ((void*)0);

 return FUNC_2(VAR_3);
}
