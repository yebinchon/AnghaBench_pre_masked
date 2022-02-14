
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int (* xdrproc_t ) (TYPE_1__*,void*) ;
struct TYPE_7__ {int x_op; } ;
struct cf_conn {TYPE_1__ xdrs; } ;
typedef int bool_t ;
typedef TYPE_1__ XDR ;
struct TYPE_8__ {scalar_t__ xp_p1; } ;
typedef TYPE_3__ SVCXPRT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,void*) ;

__attribute__((used)) static bool_t
FUNC_2(SVCXPRT *VAR_1, xdrproc_t VAR_2, void *VAR_3)
{
 XDR *VAR_4;

 FUNC_0(VAR_1 != ((void*)0));


 VAR_4 = &(((struct cf_conn *)(VAR_1->xp_p1))->xdrs);

 VAR_4->x_op = VAR_0;
 return ((*VAR_2)(VAR_4, VAR_3));
}
