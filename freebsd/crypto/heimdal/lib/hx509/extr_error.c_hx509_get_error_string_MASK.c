
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rk_strpool {int dummy; } ;
typedef TYPE_1__* hx509_error ;
typedef TYPE_2__* hx509_context ;
struct TYPE_5__ {TYPE_1__* error; int et_list; } ;
struct TYPE_4__ {int code; struct TYPE_4__* next; int msg; } ;


 int FUNC_0 (char**,char*,int) ;
 char* FUNC_1 (int ,int) ;
 char* FUNC_2 (struct rk_strpool*) ;
 struct rk_strpool* FUNC_3 (struct rk_strpool*,char*,int ,char*) ;
 char* FUNC_4 (char const*) ;
 char* FUNC_5 (int) ;

char *
FUNC_6(hx509_context VAR_0, int VAR_1)
{
    struct rk_strpool *VAR_2 = ((void*)0);
    hx509_error VAR_3 = VAR_0->error;

    if (VAR_3 == ((void*)0) || VAR_3->code != VAR_1) {
 const char *VAR_4;
 char *VAR_5;

 VAR_4 = FUNC_1(VAR_0->et_list, VAR_1);
 if (VAR_4)
     return FUNC_4(VAR_4);
 VAR_4 = FUNC_5(VAR_1);
 if (VAR_4)
     return FUNC_4(VAR_4);
 if (FUNC_0(&VAR_5, "<unknown error: %d>", VAR_1) == -1)
     return ((void*)0);
 return VAR_5;
    }

    for (VAR_3 = VAR_0->error; VAR_3; VAR_3 = VAR_3->next)
 VAR_2 = FUNC_3(VAR_2, "%s%s", VAR_3->msg,
        VAR_3->next != ((void*)0) ? "; " : "");

    return FUNC_2(VAR_2);
}
