
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_flags; int sa_mask; int * sa_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct sigaction*,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(const int VAR_5)
{
    struct sigaction VAR_6;

    VAR_6.sa_flags = VAR_5;
    VAR_6.sa_handler = &VAR_3;
    FUNC_4(&VAR_6.sa_mask);

    FUNC_3(VAR_2, &VAR_6, ((void*)0));
    FUNC_2(FUNC_1(), VAR_2);
    FUNC_0(VAR_4 ? VAR_1 : VAR_0);
}
