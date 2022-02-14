
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_handler; int sa_mask; } ;
typedef int sa ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct sigaction*,int ,int) ;
 int FUNC_4 (int,struct sigaction*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(int VAR_1)
{
 struct sigaction VAR_2;

 FUNC_6();
 FUNC_3(&VAR_2, 0, sizeof(VAR_2));
 FUNC_5(&VAR_2.sa_mask);
 VAR_2.sa_handler = VAR_0;
 FUNC_4(VAR_1, &VAR_2, ((void*)0));
 FUNC_2(FUNC_1(), VAR_1);

 FUNC_0(1);
}
