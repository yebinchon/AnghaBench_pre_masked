
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*,unsigned int,int,int) ;
 int FUNC_1 (struct page*,int) ;
 int FUNC_2 (struct page*,int) ;

void FUNC_3(struct page *VAR_3, unsigned int VAR_4,
          gfp_t VAR_5)
{
 int VAR_6;

 if (VAR_5 & (VAR_0 | VAR_1))
  return;

 VAR_6 = 1 << VAR_4;
 FUNC_0(VAR_3, VAR_4, VAR_5, -1);

 if (VAR_5 & VAR_2)
  FUNC_1(VAR_3, VAR_6);
 else
  FUNC_2(VAR_3, VAR_6);
}
