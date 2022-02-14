
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int str ;
typedef int krb5_context ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (int ,int ,char*,int,int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(krb5_context VAR_1)
{
    char VAR_2[100];
    time_t VAR_3 = FUNC_4(((void*)0));
    FILE *VAR_4;

    VAR_4 = FUNC_3(VAR_1);
    if (VAR_4 == ((void*)0))
 return;
    FUNC_2(VAR_1, VAR_3, VAR_2, sizeof(VAR_2), VAR_0);
    FUNC_1(VAR_4, "master down at %s\n", VAR_2);

    FUNC_0(VAR_4);
}
