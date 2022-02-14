
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int length; struct TYPE_9__* data; } ;
struct TYPE_7__ {TYPE_3__* session_ticket; } ;
struct TYPE_8__ {scalar_t__ version; TYPE_1__ ext; } ;
typedef int TLS_SESSION_TICKET_EXT ;
typedef TYPE_2__ SSL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (TYPE_3__*,void*,int) ;

int FUNC_4(SSL *VAR_3, void *VAR_4, int VAR_5)
{
    if (VAR_3->version >= VAR_2) {
        FUNC_0(VAR_3->ext.session_ticket);
        VAR_3->ext.session_ticket = ((void*)0);
        VAR_3->ext.session_ticket =
            FUNC_1(sizeof(TLS_SESSION_TICKET_EXT) + VAR_5);
        if (VAR_3->ext.session_ticket == ((void*)0)) {
            FUNC_2(VAR_1, VAR_0);
            return 0;
        }

        if (VAR_4 != ((void*)0)) {
            VAR_3->ext.session_ticket->length = VAR_5;
            VAR_3->ext.session_ticket->data = VAR_3->ext.session_ticket + 1;
            FUNC_3(VAR_3->ext.session_ticket->data, VAR_4, VAR_5);
        } else {
            VAR_3->ext.session_ticket->length = 0;
            VAR_3->ext.session_ticket->data = ((void*)0);
        }

        return 1;
    }

    return 0;
}
