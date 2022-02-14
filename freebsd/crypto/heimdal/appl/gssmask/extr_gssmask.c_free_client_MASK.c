
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct client {scalar_t__ logging; scalar_t__ sock; struct client* moniker; TYPE_1__* handles; } ;
struct TYPE_2__ {int idx; } ;


 int FUNC_0 (TYPE_1__**,int ) ;
 int FUNC_1 (struct client*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct client *VAR_0)
{
    while(VAR_0->handles)
 FUNC_0(&VAR_0->handles, VAR_0->handles->idx);

    FUNC_1(VAR_0->moniker);
    FUNC_2(VAR_0->sock);
    if (VAR_0->logging)
 FUNC_2(VAR_0->logging);
    FUNC_1(VAR_0);
}
