
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void *
FUNC_6(void *VAR_5)
{
 FUNC_1("2: Second thread.\n");
 FUNC_0(FUNC_4(&VAR_2));
 FUNC_1("2: Before the loop.\n");
 while (VAR_0>0) {
  VAR_0--;
  VAR_4++;
  VAR_3 = 0;

  FUNC_0(FUNC_2(&VAR_1));
  do {
   FUNC_0(FUNC_3(&VAR_1,
       &VAR_2));
  } while (VAR_3 != 1);
 }
 FUNC_1("2: After the loop.\n");
 FUNC_0(FUNC_5(&VAR_2));

 return ((void*)0);
}
