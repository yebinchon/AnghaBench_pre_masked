
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool FUNC_3(struct page *VAR_4)
{

 int VAR_5 = FUNC_1(VAR_4);


 if (VAR_5 == VAR_0 || VAR_5 == VAR_2)
  return 0;


 if (FUNC_0(VAR_4) && FUNC_2(VAR_4) >= VAR_3)
  return 1;


 if (VAR_5 == VAR_1)
  return 1;


 return 0;
}
