
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int gfp_t ;


 scalar_t__ FUNC_0 (struct page*) ;
 int VAR_0 ;
 struct page* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct page*) ;

__attribute__((used)) static unsigned long FUNC_4(unsigned long VAR_3, gfp_t VAR_4)
{
 unsigned long VAR_5 = 0;

 while (VAR_3 > 0) {
  struct page *VAR_6;

  VAR_6 = FUNC_1(VAR_4);
  if (!VAR_6)
   break;
  FUNC_2(&VAR_2, FUNC_3(VAR_6));
  if (FUNC_0(VAR_6))
   VAR_0++;
  else
   VAR_1++;
  VAR_3--;
  VAR_5++;
 }

 return VAR_5;
}
