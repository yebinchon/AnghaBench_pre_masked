
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 unsigned int VAR_0 ;
 struct page* FUNC_0 (struct page*,unsigned long) ;

__attribute__((used)) static inline void FUNC_1(struct page **VAR_1, unsigned int *VAR_2,
      unsigned int *VAR_3, unsigned int VAR_4)
{
 unsigned long VAR_5;

 *VAR_2 += VAR_4;
 VAR_5 = *VAR_2 / VAR_0;
 if (VAR_5)
  *VAR_1 = FUNC_0(*VAR_1, VAR_5);

 *VAR_2 = *VAR_2 % VAR_0;
 *VAR_3 -= VAR_4;
}
