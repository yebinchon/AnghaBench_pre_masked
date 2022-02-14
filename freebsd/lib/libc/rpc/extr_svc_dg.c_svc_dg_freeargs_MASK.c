
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int (* xdrproc_t ) (TYPE_1__*,void*) ;
typedef int bool_t ;
struct TYPE_6__ {int x_op; } ;
typedef TYPE_1__ XDR ;
struct TYPE_7__ {TYPE_1__ su_xdrs; } ;
typedef int SVCXPRT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,void*) ;
 TYPE_4__* FUNC_1 (int *) ;

__attribute__((used)) static bool_t
FUNC_2(SVCXPRT *VAR_1, xdrproc_t VAR_2, void *VAR_3)
{
 XDR *VAR_4 = &(FUNC_1(VAR_1)->su_xdrs);

 VAR_4->x_op = VAR_0;
 return (*VAR_2)(VAR_4, VAR_3);
}
