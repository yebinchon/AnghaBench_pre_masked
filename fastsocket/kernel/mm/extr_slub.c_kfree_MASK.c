
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int slab; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (void const*) ;
 int VAR_0 ;
 int FUNC_4 (void const*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (int ,struct page*,void*,int ) ;
 int FUNC_7 (int ,void const*) ;
 scalar_t__ FUNC_8 (int) ;
 struct page* FUNC_9 (void const*) ;

void FUNC_10(const void *VAR_1)
{
 struct page *VAR_2;
 void *VAR_3 = (void *)VAR_1;

 FUNC_7(VAR_0, VAR_1);

 if (FUNC_8(FUNC_3(VAR_1)))
  return;

 VAR_2 = FUNC_9(VAR_1);
 if (FUNC_8(!FUNC_2(VAR_2))) {
  FUNC_0(!FUNC_1(VAR_2));
  FUNC_4(VAR_1);
  FUNC_5(VAR_2);
  return;
 }
 FUNC_6(VAR_2->slab, VAR_2, VAR_3, VAR_0);
}
