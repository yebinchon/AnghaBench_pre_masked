
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ref; struct TYPE_4__* buf; int sd; int * ssl_cert; int * ssl_ctx; int * ssl; } ;
typedef TYPE_1__ conn_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;

int
FUNC_7(conn_t *VAR_0)
{
 int VAR_1;

 if (--VAR_0->ref > 0)
  return (0);
 VAR_1 = FUNC_5(VAR_0->sd);
 FUNC_6(VAR_0->buf);
 FUNC_6(VAR_0);
 return (VAR_1);
}
