
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,...) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int * VAR_9 ;
 int VAR_10 ;

extern void
FUNC_7(void)
{




 FUNC_6(VAR_0);




 VAR_10 = FUNC_2() == 0;


 if (FUNC_4(VAR_9))
  FUNC_3(FUNC_0("Error creating a pipe: %s"),
    FUNC_5(VAR_8));


 for (unsigned VAR_11 = 0; VAR_11 < 2; ++VAR_11) {
  int VAR_12 = FUNC_1(VAR_9[VAR_11], VAR_1);
  if (VAR_12 == -1 || FUNC_1(VAR_9[VAR_11], VAR_2,
    VAR_12 | VAR_3) == -1)
   FUNC_3(FUNC_0("Error creating a pipe: %s"),
     FUNC_5(VAR_8));
 }
 return;
}
