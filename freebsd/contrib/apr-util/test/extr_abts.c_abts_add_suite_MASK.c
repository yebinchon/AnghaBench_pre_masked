
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int not_run; char const* name; struct TYPE_6__* next; scalar_t__ failed; scalar_t__ num_test; } ;
typedef TYPE_1__ sub_suite ;
struct TYPE_7__ {TYPE_1__* tail; TYPE_1__* head; } ;
typedef TYPE_2__ abts_suite ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char const*) ;
 scalar_t__ VAR_1 ;
 void* FUNC_4 (int) ;
 char const* FUNC_5 (int ,char const*,int) ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 int VAR_2 ;
 void* FUNC_8 (char const*,char) ;
 int FUNC_9 () ;

abts_suite *FUNC_10(abts_suite *VAR_3, const char *VAR_4)
{
    sub_suite *VAR_5;
    char *VAR_6;
    const char *VAR_7;
    VAR_0 = 0;


    if (VAR_3 && VAR_3->tail &&!VAR_3->tail->not_run) {
        FUNC_1(VAR_3);
    }

    VAR_5 = FUNC_4(sizeof(*VAR_5));
    VAR_5->num_test = 0;
    VAR_5->failed = 0;
    VAR_5->next = ((void*)0);


    VAR_7 = FUNC_8(VAR_4, '/');
    if (!VAR_7) {
        VAR_7 = FUNC_8(VAR_4, '\\');
    }
    if (VAR_7) {
        VAR_7++;
    } else {
        VAR_7 = VAR_4;
    }
    VAR_6 = FUNC_8(VAR_7, '.');
    if (VAR_6) {
        VAR_5->name = FUNC_5(FUNC_0(VAR_6 - VAR_7 + 1, 1),
                                VAR_7, VAR_6 - VAR_7);
    }
    else {
        VAR_5->name = VAR_7;
    }

    if (VAR_1) {
        FUNC_3(VAR_2, "%s\n", VAR_5->name);
    }

    VAR_5->not_run = 0;

    if (VAR_3 == ((void*)0)) {
        VAR_3 = FUNC_4(sizeof(*VAR_3));
        VAR_3->head = VAR_5;
        VAR_3->tail = VAR_5;
    }
    else {
        VAR_3->tail->next = VAR_5;
        VAR_3->tail = VAR_5;
    }

    if (!FUNC_7(VAR_5->name)) {
        VAR_5->not_run = 1;
        return VAR_3;
    }

    FUNC_6();
    FUNC_3(VAR_2, "%-20s:  ", VAR_5->name);
    FUNC_9();
    FUNC_2(VAR_2);

    return VAR_3;
}
