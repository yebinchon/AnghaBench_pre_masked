
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ssh {int dummy; } ;
typedef int fd_set ;
struct TYPE_3__ {int sock; int self; } ;
typedef TYPE_1__ Channel ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void
FUNC_2(struct ssh *VAR_0, Channel *VAR_1,
    fd_set *VAR_2, fd_set *VAR_3)
{
 FUNC_1("channel %d: waiting for connection", VAR_1->self);
 FUNC_0(VAR_1->sock, VAR_3);
}
