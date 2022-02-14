
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct page* FUNC_1 (int,unsigned int) ;
 scalar_t__ FUNC_2 (struct page*) ;

unsigned long FUNC_3(gfp_t VAR_1, unsigned int VAR_2)
{
 struct page *VAR_3;





 FUNC_0((VAR_1 & VAR_0) != 0);

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_3)
  return 0;
 return (unsigned long) FUNC_2(VAR_3);
}
