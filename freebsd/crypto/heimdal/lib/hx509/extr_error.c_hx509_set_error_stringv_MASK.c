
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int va_list ;
typedef TYPE_1__* hx509_error ;
typedef TYPE_2__* hx509_context ;
struct TYPE_9__ {TYPE_1__* error; } ;
struct TYPE_8__ {int code; struct TYPE_8__* next; int msg; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,char const*,int ) ;

void
FUNC_5(hx509_context VAR_1, int VAR_2, int VAR_3,
   const char *VAR_4, va_list VAR_5)
{
    hx509_error VAR_6;

    if (VAR_1 == ((void*)0))
 return;

    VAR_6 = FUNC_0(1, sizeof(*VAR_6));
    if (VAR_6 == ((void*)0)) {
 FUNC_3(VAR_1);
 return;
    }

    if (FUNC_4(&VAR_6->msg, VAR_4, VAR_5) == -1) {
 FUNC_3(VAR_1);
 FUNC_1(VAR_6);
 return;
    }
    VAR_6->code = VAR_3;

    if (VAR_2 & VAR_0) {
 VAR_6->next = VAR_1->error;
 VAR_1->error = VAR_6;
    } else {
 FUNC_2(VAR_1->error);
 VAR_1->error = VAR_6;
    }
}
