
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int _count; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct page*,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static inline void FUNC_6(struct page *VAR_0)
{
 if (FUNC_5(FUNC_0(VAR_0)))





  FUNC_2(VAR_0, 1);
 else {




  FUNC_1(FUNC_4(&VAR_0->_count) <= 0);
  FUNC_3(&VAR_0->_count);
 }
}
