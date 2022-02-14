
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,unsigned int,int,struct page**) ;
 int FUNC_1 (struct page*) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_1, unsigned int VAR_2,
   struct page **VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_4, VAR_3);

 if (VAR_5 >= 0 && VAR_5 < VAR_2) {
  while (VAR_5--)
   FUNC_1(VAR_3[VAR_5]);
  VAR_5 = -VAR_0;
 }

 return VAR_5;
}
