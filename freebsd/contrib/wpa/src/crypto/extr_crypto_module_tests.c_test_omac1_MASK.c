
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(void)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++) {
  if (FUNC_1(&VAR_1[VAR_2], VAR_2))
   return 1;
 }

 FUNC_2(VAR_0, "OMAC1-AES-128 test cases passed");

 return 0;
}
