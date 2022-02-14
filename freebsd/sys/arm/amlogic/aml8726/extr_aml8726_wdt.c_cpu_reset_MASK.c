
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int) ;
 int * VAR_5 ;
 int FUNC_1 (char*) ;

void
FUNC_2(void)
{


 if (VAR_5 == ((void*)0))
  FUNC_1("Reset hardware has not yet been initialized.\n");
 else {
  FUNC_0(VAR_5, VAR_4, 0);
  FUNC_0(VAR_5, VAR_2,
      (VAR_0 | VAR_1 |
      (10 << VAR_3)));
 }

 while (1);
}
