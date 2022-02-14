
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int protocol; int options; int remote_addr; int local_addr; } ;
typedef TYPE_1__ apr_socket_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static void FUNC_1(apr_socket_t *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    VAR_1->type = VAR_3;
    VAR_1->protocol = VAR_4;
    FUNC_0(VAR_1->local_addr, VAR_2, 0);
    FUNC_0(VAR_1->remote_addr, VAR_2, 0);
    VAR_1->options = 0;






}
