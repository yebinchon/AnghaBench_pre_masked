
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_7__ {scalar_t__ early_data; } ;
struct TYPE_10__ {scalar_t__ recv_max_early_data; scalar_t__ early_data_count; TYPE_1__ ext; int server; TYPE_3__* psksession; TYPE_3__* session; } ;
struct TYPE_8__ {scalar_t__ max_early_data; } ;
struct TYPE_9__ {TYPE_2__ ext; } ;
typedef TYPE_3__ SSL_SESSION ;
typedef TYPE_4__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_1 (int) ;

int FUNC_2(SSL *VAR_6, size_t VAR_7, size_t VAR_8, int VAR_9)
{
    uint32_t VAR_10;
    SSL_SESSION *VAR_11 = VAR_6->session;






    if (!VAR_6->server && VAR_11->ext.max_early_data == 0) {
        if (!FUNC_1(VAR_6->psksession != ((void*)0)
                         && VAR_6->psksession->ext.max_early_data > 0)) {
            FUNC_0(VAR_6, VAR_1, VAR_4,
                     VAR_0);
            return 0;
        }
        VAR_11 = VAR_6->psksession;
    }

    if (!VAR_6->server)
        VAR_10 = VAR_11->ext.max_early_data;
    else if (VAR_6->ext.early_data != VAR_3)
        VAR_10 = VAR_6->recv_max_early_data;
    else
        VAR_10 = VAR_6->recv_max_early_data < VAR_11->ext.max_early_data
                         ? VAR_6->recv_max_early_data : VAR_11->ext.max_early_data;

    if (VAR_10 == 0) {
        FUNC_0(VAR_6, VAR_9 ? VAR_1 : VAR_2,
                 VAR_4, VAR_5);
        return 0;
    }


    VAR_10 += VAR_8;

    if (VAR_6->early_data_count + VAR_7 > VAR_10) {
        FUNC_0(VAR_6, VAR_9 ? VAR_1 : VAR_2,
                 VAR_4, VAR_5);
        return 0;
    }
    VAR_6->early_data_count += VAR_7;

    return 1;
}
