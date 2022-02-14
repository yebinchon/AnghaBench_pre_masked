
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static inline void FUNC_3(struct page *VAR_1, int VAR_2, gfp_t VAR_3)
{
 int VAR_4;





 FUNC_0((VAR_3 & VAR_0) && FUNC_2());
 for (VAR_4 = 0; VAR_4 < (1 << VAR_2); VAR_4++)
  FUNC_1(VAR_1 + VAR_4);
}
