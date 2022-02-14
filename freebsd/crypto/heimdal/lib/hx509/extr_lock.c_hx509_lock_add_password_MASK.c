
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* hx509_lock ;
struct TYPE_4__ {char** val; int len; } ;
struct TYPE_5__ {TYPE_1__ password; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (char**,int) ;
 char* FUNC_2 (char const*) ;

int
FUNC_3(hx509_lock VAR_1, const char *VAR_2)
{
    void *VAR_3;
    char *VAR_4;

    VAR_4 = FUNC_2(VAR_2);
    if (VAR_4 == ((void*)0))
 return VAR_0;

    VAR_3 = FUNC_1(VAR_1->password.val,
  (VAR_1->password.len + 1) * sizeof(VAR_1->password.val[0]));
    if (VAR_3 == ((void*)0)) {
 FUNC_0(VAR_4);
 return VAR_0;
    }
    VAR_1->password.val = VAR_3;
    VAR_1->password.val[VAR_1->password.len] = VAR_4;
    VAR_1->password.len++;

    return 0;
}
