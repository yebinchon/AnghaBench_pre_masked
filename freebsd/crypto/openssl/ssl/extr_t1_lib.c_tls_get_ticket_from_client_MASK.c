
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int session_id_len; int session_id; TYPE_3__* pre_proc_exts; } ;
struct TYPE_11__ {int data; int present; } ;
struct TYPE_9__ {scalar_t__ ticket_expected; } ;
struct TYPE_10__ {scalar_t__ version; TYPE_1__ ext; } ;
typedef int SSL_TICKET_STATUS ;
typedef int SSL_SESSION ;
typedef TYPE_2__ SSL ;
typedef TYPE_3__ RAW_EXTENSION ;
typedef TYPE_4__ CLIENTHELLO_MSG ;


 int FUNC_0 (int *) ;
 size_t FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (TYPE_2__*,int ,size_t,int ,int ,int **) ;
 int FUNC_3 (TYPE_2__*) ;

SSL_TICKET_STATUS FUNC_4(SSL *VAR_3, CLIENTHELLO_MSG *VAR_4,
                                             SSL_SESSION **VAR_5)
{
    size_t VAR_6;
    RAW_EXTENSION *VAR_7;

    *VAR_5 = ((void*)0);
    VAR_3->ext.ticket_expected = 0;






    if (VAR_3->version <= VAR_0 || !FUNC_3(VAR_3))
        return VAR_1;

    VAR_7 = &VAR_4->pre_proc_exts[VAR_2];
    if (!VAR_7->present)
        return VAR_1;

    VAR_6 = FUNC_1(&VAR_7->data);

    return FUNC_2(VAR_3, FUNC_0(&VAR_7->data), VAR_6,
                              VAR_4->session_id, VAR_4->session_id_len, VAR_5);
}
