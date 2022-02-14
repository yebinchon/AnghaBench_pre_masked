
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_handler; scalar_t__ sa_flags; int sa_mask; } ;
typedef int sigset_t ;
typedef int sa ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct sigaction*,int ,int) ;
 int FUNC_4 (int ,struct sigaction*,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *,int *) ;
 int FUNC_9 (int ,char*,char const*) ;

__attribute__((used)) static void
FUNC_10(const char *VAR_4)
{
 struct sigaction VAR_5;
 sigset_t VAR_6;


 (void)FUNC_7(&VAR_6);
 (void)FUNC_5(&VAR_6, VAR_1);
 (void)FUNC_8(VAR_2, &VAR_6, ((void*)0));


 FUNC_9(VAR_0, "%s", VAR_4);

 (void)FUNC_3(&VAR_5, 0, sizeof(VAR_5));
 (void)FUNC_6(&VAR_5.sa_mask);
 VAR_5.sa_flags = 0;
 VAR_5.sa_handler = VAR_3;
 (void)FUNC_4(VAR_1, &VAR_5, ((void*)0));
 (void)FUNC_2(FUNC_1(), VAR_1);
 FUNC_0(127);
}
