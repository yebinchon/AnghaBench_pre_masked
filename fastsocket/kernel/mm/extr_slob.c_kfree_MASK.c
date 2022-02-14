
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slob_page {int page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void const*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct slob_page*) ;
 int FUNC_2 (void const*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned int*,unsigned int) ;
 struct slob_page* FUNC_6 (void const*) ;
 int FUNC_7 (int ,void const*) ;
 scalar_t__ FUNC_8 (int ) ;

void FUNC_9(const void *VAR_3)
{
 struct slob_page *VAR_4;

 FUNC_7(VAR_2, VAR_3);

 if (FUNC_8(FUNC_0(VAR_3)))
  return;
 FUNC_2(VAR_3);

 VAR_4 = FUNC_6(VAR_3);
 if (FUNC_1(VAR_4)) {
  int VAR_5 = FUNC_3(VAR_0, VAR_1);
  unsigned int *VAR_6 = (unsigned int *)(VAR_3 - VAR_5);
  FUNC_5(VAR_6, *VAR_6 + VAR_5);
 } else
  FUNC_4(&VAR_4->page);
}
