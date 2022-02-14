
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int * mapping; } ;
typedef int gfp_t ;


 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (struct page*,unsigned int) ;

__attribute__((used)) static struct page *FUNC_3(gfp_t VAR_0, unsigned int VAR_1)
{
 struct page *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2) {
  unsigned int VAR_3, VAR_4;
  VAR_2->mapping = ((void*)0);
  FUNC_2(VAR_2, VAR_1);
  VAR_3 = 1 << VAR_1;
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
   FUNC_0(VAR_2 + VAR_4);
 }

 return VAR_2;
}
