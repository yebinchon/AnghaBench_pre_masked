
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hx509_lock ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (int ,int ,int *) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (char const*,char*,int) ;

int
FUNC_4(hx509_lock VAR_2, const char *VAR_3)
{
    if (FUNC_3(VAR_3, "PASS:", 5) == 0) {
 FUNC_0(VAR_2, VAR_3 + 5);
    } else if (FUNC_2(VAR_3, "PROMPT") == 0) {
 FUNC_1(VAR_2, VAR_1, ((void*)0));
    } else
 return VAR_0;
    return 0;
}
