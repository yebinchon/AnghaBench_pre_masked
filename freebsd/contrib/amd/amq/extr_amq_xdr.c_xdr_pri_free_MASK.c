
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ caddr_t ;
typedef int bool_t ;
typedef int (* XDRPROC_T_TYPE ) (TYPE_1__*,scalar_t__*) ;
struct TYPE_5__ {int x_op; } ;
typedef TYPE_1__ XDR ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__*) ;

bool_t
FUNC_1(XDRPROC_T_TYPE VAR_1, caddr_t VAR_2)
{
  XDR VAR_3;

  VAR_3.x_op = VAR_0;
  return ((*VAR_1) (&VAR_3, (caddr_t *) VAR_2));
}
