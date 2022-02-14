
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* hx509_env ;
typedef int hx509_context ;
struct TYPE_6__ {int * string; } ;
struct TYPE_7__ {struct TYPE_7__* next; struct TYPE_7__* name; TYPE_1__ u; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,int,char*) ;
 TYPE_2__* FUNC_2 (int) ;
 void* FUNC_3 (char const*) ;

int
FUNC_4(hx509_context VAR_2, hx509_env *VAR_3,
       const char *VAR_4, const char *VAR_5)
{
    hx509_env VAR_6;

    VAR_6 = FUNC_2(sizeof(*VAR_6));
    if (VAR_6 == ((void*)0)) {
 FUNC_1(VAR_2, 0, VAR_0, "out of memory");
 return VAR_0;
    }

    VAR_6->type = VAR_1;
    VAR_6->next = ((void*)0);
    VAR_6->name = FUNC_3(VAR_4);
    if (VAR_6->name == ((void*)0)) {
 FUNC_0(VAR_6);
 return VAR_0;
    }
    VAR_6->u.string = FUNC_3(VAR_5);
    if (VAR_6->u.string == ((void*)0)) {
 FUNC_0(VAR_6->name);
 FUNC_0(VAR_6);
 return VAR_0;
    }


    if (*VAR_3) {
 hx509_env VAR_7 = *VAR_3;
 while (VAR_7->next)
     VAR_7 = VAR_7->next;
 VAR_7->next = VAR_6;
    } else
 *VAR_3 = VAR_6;

    return 0;
}
