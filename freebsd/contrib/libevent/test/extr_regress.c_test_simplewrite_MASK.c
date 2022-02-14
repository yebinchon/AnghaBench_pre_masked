
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct event*,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct event*,int ,int ,int ,struct event*) ;
 int FUNC_4 (int) ;
 int * VAR_1 ;
 int FUNC_5 (char*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_6(void)
{
 struct event VAR_3;


 FUNC_5("Simple write: ");

 FUNC_3(&VAR_3, VAR_1[0], VAR_0, VAR_2, &VAR_3);
 if (FUNC_1(&VAR_3, ((void*)0)) == -1)
  FUNC_4(1);
 FUNC_2();

 FUNC_0();
}
