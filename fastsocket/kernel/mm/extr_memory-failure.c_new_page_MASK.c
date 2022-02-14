
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int ,int) ;
 struct page* FUNC_2 (int,int ,int ) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct page*) ;

__attribute__((used)) static struct page *FUNC_6(struct page *VAR_1, unsigned long VAR_2, int **VAR_3)
{
 int VAR_4 = FUNC_5(VAR_1);
 if (FUNC_0(VAR_1))
  return FUNC_1(FUNC_4(FUNC_3(VAR_1)),
         VAR_4);
 else
  return FUNC_2(VAR_4, VAR_0, 0);
}
