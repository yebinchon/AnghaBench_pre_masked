
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_mask; scalar_t__ sa_flags; int sa_handler; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ,struct sigaction*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(void)
{
 struct sigaction VAR_9;

 VAR_9.sa_handler = VAR_8;
 VAR_9.sa_flags = VAR_1;
 FUNC_2(&VAR_9.sa_mask);
 if (FUNC_1(VAR_5, &VAR_9, ((void*)0))) {
  FUNC_3(VAR_0, "sigaction: %m");
  FUNC_0(1);
 }

 VAR_9.sa_handler = VAR_6;
 if (FUNC_1(VAR_2, &VAR_9, ((void*)0))) {
  FUNC_3(VAR_0, "sigaction: %m");
  FUNC_0(1);
 }

 VAR_9.sa_handler = VAR_7;
 VAR_9.sa_flags = 0;
 FUNC_2(&VAR_9.sa_mask);
 if (FUNC_1(VAR_4, &VAR_9, ((void*)0))) {
  FUNC_3(VAR_0, "sigaction: %m");
  FUNC_0(1);
 }
 if (FUNC_1(VAR_3, &VAR_9, ((void*)0))) {
  FUNC_3(VAR_0, "sigaction: %m");
  FUNC_0(1);
 }
}
