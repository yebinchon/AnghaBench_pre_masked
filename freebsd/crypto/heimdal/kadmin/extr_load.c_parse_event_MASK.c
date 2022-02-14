
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
struct TYPE_4__ {int principal; int time; } ;
typedef TYPE_1__ Event ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 char* FUNC_4 (char**,char*) ;

__attribute__((used)) static int
FUNC_5(Event *VAR_1, char *VAR_2)
{
    krb5_error_code VAR_3;
    char *VAR_4;

    if(FUNC_3(VAR_2, "-") == 0)
 return 0;
    FUNC_1(VAR_1, 0, sizeof(*VAR_1));
    VAR_4 = FUNC_4(&VAR_2, ":");
    if(FUNC_2(&VAR_1->time, VAR_4) != 1)
 return -1;
    VAR_4 = FUNC_4(&VAR_2, ":");
    VAR_3 = FUNC_0(VAR_0, VAR_4, &VAR_1->principal);
    if (VAR_3)
 return -1;
    return 1;
}
