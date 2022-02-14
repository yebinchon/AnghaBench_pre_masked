
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct page*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static inline int FUNC_7(struct page *VAR_0, struct page *VAR_1,
        int VAR_2)
{
 if (!FUNC_6(FUNC_4(VAR_1)))
  return 0;

 if (FUNC_5(VAR_0) != FUNC_5(VAR_1))
  return 0;

 if (FUNC_0(VAR_1) && FUNC_3(VAR_1) == VAR_2) {
  FUNC_1(FUNC_2(VAR_1) != 0);
  return 1;
 }
 return 0;
}
