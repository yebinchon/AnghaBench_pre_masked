
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int (* xdrproc_t ) (TYPE_1__*,void*) ;
struct TYPE_5__ {int x_op; } ;
struct svc_raw_private {TYPE_1__ xdr_stream; } ;
typedef int bool_t ;
typedef TYPE_1__ XDR ;
typedef int SVCXPRT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,void*) ;
 struct svc_raw_private* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool_t
FUNC_3(SVCXPRT *VAR_4, xdrproc_t VAR_5, void *VAR_6)
{
 struct svc_raw_private *VAR_7;
 XDR *VAR_8;

 FUNC_0(&VAR_3);
 VAR_7 = VAR_2;
 if (VAR_7 == ((void*)0)) {
  FUNC_1(&VAR_3);
  return (VAR_0);
 }
 FUNC_1(&VAR_3);

 VAR_8 = &VAR_7->xdr_stream;
 VAR_8->x_op = VAR_1;
 return (*VAR_5)(VAR_8, VAR_6);
}
