
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {scalar_t__ sa_handler; scalar_t__ sa_flags; int sa_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ,struct sigaction*,struct sigaction*) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void
FUNC_2(void)
{
 struct sigaction VAR_8, VAR_9;

 (void) FUNC_1(&VAR_8.sa_mask);
 VAR_8.sa_flags = 0;
 VAR_8.sa_handler = VAR_6;

 if (FUNC_0(VAR_1, ((void*)0), &VAR_9) == 0 && VAR_9.sa_handler != VAR_5)
  (void) FUNC_0(VAR_1, &VAR_8, ((void*)0));

 if (FUNC_0(VAR_3, ((void*)0), &VAR_9) == 0 && VAR_9.sa_handler != VAR_5)
  (void) FUNC_0(VAR_3, &VAR_8, ((void*)0));
}
