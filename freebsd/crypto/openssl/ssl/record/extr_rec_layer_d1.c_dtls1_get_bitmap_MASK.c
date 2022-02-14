
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* d; } ;
struct TYPE_12__ {TYPE_3__ rlayer; } ;
struct TYPE_11__ {unsigned long epoch; scalar_t__ type; } ;
struct TYPE_8__ {scalar_t__ epoch; } ;
struct TYPE_9__ {unsigned long r_epoch; int next_bitmap; TYPE_1__ unprocessed_rcds; int bitmap; } ;
typedef TYPE_4__ SSL3_RECORD ;
typedef TYPE_5__ SSL ;
typedef int DTLS1_BITMAP ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

DTLS1_BITMAP *FUNC_0(SSL *VAR_2, SSL3_RECORD *VAR_3,
                               unsigned int *VAR_4)
{

    *VAR_4 = 0;


    if (VAR_3->epoch == VAR_2->rlayer.d->r_epoch)
        return &VAR_2->rlayer.d->bitmap;






    else if (VAR_3->epoch == (unsigned long)(VAR_2->rlayer.d->r_epoch + 1) &&
             VAR_2->rlayer.d->unprocessed_rcds.epoch != VAR_2->rlayer.d->r_epoch &&
             (VAR_3->type == VAR_1 || VAR_3->type == VAR_0)) {
        *VAR_4 = 1;
        return &VAR_2->rlayer.d->next_bitmap;
    }

    return ((void*)0);
}
