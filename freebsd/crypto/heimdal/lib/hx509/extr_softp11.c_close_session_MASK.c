
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ attributes; } ;
struct session_state {int session_handle; TYPE_1__ find; } ;
struct TYPE_4__ {void* notify; void* application; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct session_state*) ;
 int FUNC_2 (struct session_state*) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct session_state *VAR_3)
{
    if (VAR_3->find.attributes) {
 FUNC_0("application didn't do C_FindObjectsFinal\n");
 FUNC_1(VAR_3);
    }

    VAR_3->session_handle = VAR_0;
    VAR_2.application = VAR_1;
    VAR_2.notify = VAR_1;
    FUNC_2(VAR_3);
}
