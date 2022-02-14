
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ cmd; } ;
typedef TYPE_1__ XmapVal ;
struct TYPE_9__ {scalar_t__ len; int buf; } ;
typedef TYPE_2__ CStr ;


 int FUNC_0 (int,int,char*) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*,TYPE_1__*,int) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_3 (char*,int ) ;

void
FUNC_4(const CStr *VAR_3, XmapVal *VAR_4, int VAR_5)
{
    CStr VAR_6;
    VAR_6.buf = VAR_3->buf;
    VAR_6.len = VAR_3->len;
    if (VAR_3->len == 0) {
 FUNC_3("%s", FUNC_0(9, 1, "AddXkey: Null extended-key not allowed.\n"));
 return;
    }

    if (VAR_5 == VAR_1 && VAR_4->cmd == VAR_0) {
 FUNC_3("%s",
     FUNC_0(9, 2, "AddXkey: sequence-lead-in command not allowed\n"));
 return;
    }

    if (VAR_2 == ((void*)0))

 VAR_2 = FUNC_1(&VAR_6);


    (void) FUNC_2(VAR_2, &VAR_6, VAR_4, VAR_5);
    return;
}
