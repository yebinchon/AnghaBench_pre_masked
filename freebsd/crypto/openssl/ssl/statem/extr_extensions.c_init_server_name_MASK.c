
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * hostname; } ;
struct TYPE_5__ {TYPE_1__ ext; scalar_t__ servername_done; scalar_t__ server; } ;
typedef TYPE_2__ SSL ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(SSL *VAR_0, unsigned int VAR_1)
{
    if (VAR_0->server) {
        VAR_0->servername_done = 0;

        FUNC_0(VAR_0->ext.hostname);
        VAR_0->ext.hostname = ((void*)0);
    }

    return 1;
}
