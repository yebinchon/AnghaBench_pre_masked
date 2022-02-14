
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ early_data_ok; } ;
struct TYPE_11__ {int server; TYPE_3__ ext; TYPE_2__* session; } ;
struct TYPE_8__ {int * alpn_selected; } ;
struct TYPE_9__ {TYPE_1__ ext; } ;
typedef TYPE_4__ SSL ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_2(SSL *VAR_0, unsigned int VAR_1, int VAR_2)
{
    if (!VAR_0->server && !VAR_2 && VAR_0->session->ext.alpn_selected != ((void*)0))
            VAR_0->ext.early_data_ok = 0;

    if (!VAR_0->server || !FUNC_0(VAR_0))
        return 1;
    return FUNC_1(VAR_0);
}
