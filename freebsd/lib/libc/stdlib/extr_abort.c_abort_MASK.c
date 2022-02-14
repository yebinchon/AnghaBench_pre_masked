
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_mask; scalar_t__ sa_flags; int sa_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,struct sigaction*,int *) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;

void
FUNC_8(void)
{
 struct sigaction VAR_3;





 if (&FUNC_0)
  FUNC_0)();

 FUNC_6(&VAR_3.sa_mask);




 FUNC_5(&VAR_3.sa_mask, VAR_0);
 (void)FUNC_2(VAR_2, &VAR_3.sa_mask, ((void*)0));
 (void)FUNC_4(VAR_0);





 VAR_3.sa_handler = VAR_1;
 VAR_3.sa_flags = 0;
 FUNC_6(&VAR_3.sa_mask);
 (void)FUNC_1(VAR_0, &VAR_3, ((void*)0));
 FUNC_5(&VAR_3.sa_mask, VAR_0);
 (void)FUNC_2(VAR_2, &VAR_3.sa_mask, ((void*)0));
 (void)FUNC_4(VAR_0);
 FUNC_3(1);
}
