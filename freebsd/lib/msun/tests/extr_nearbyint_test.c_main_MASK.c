
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (char*,size_t) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_4(void)
{
 unsigned VAR_2;

 FUNC_1("1..%zu\n", (size_t)(FUNC_0(VAR_1) * 2));
 VAR_0 = 1;
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++) {
  FUNC_3(VAR_2);
  FUNC_2(VAR_2);
 }

 return (0);
}
