
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ticket_expected; } ;
struct TYPE_5__ {TYPE_1__ ext; int server; } ;
typedef TYPE_2__ SSL ;



__attribute__((used)) static int FUNC_0(SSL *VAR_0, unsigned int VAR_1)
{
    if (!VAR_0->server)
        VAR_0->ext.ticket_expected = 0;

    return 1;
}
