
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {void (* handle_notifications ) (TYPE_1__*,void*,void*) ;void* notification_context; } ;
typedef TYPE_2__ bio_dgram_sctp_data ;
struct TYPE_6__ {scalar_t__ ptr; } ;
typedef TYPE_1__ BIO ;



int FUNC_0(BIO *VAR_0,
                                   void (*VAR_1) (BIO *VAR_2,
                                                                 void
                                                                 *VAR_3,
                                                                 void *VAR_4),
                                   void *VAR_5)
{
    bio_dgram_sctp_data *VAR_6 = (bio_dgram_sctp_data *) VAR_0->ptr;

    if (VAR_1 != ((void*)0)) {
        VAR_6->handle_notifications = VAR_1;
        VAR_6->notification_context = VAR_5;
    } else
        return -1;

    return 0;
}
