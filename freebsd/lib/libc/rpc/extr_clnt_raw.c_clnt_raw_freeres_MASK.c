
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ (* xdrproc_t ) (TYPE_1__*,void*) ;
struct TYPE_5__ {int x_op; } ;
struct clntraw_private {TYPE_1__ xdr_stream; } ;
typedef scalar_t__ bool_t ;
typedef TYPE_1__ XDR ;
typedef int CLIENT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct clntraw_private* VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,void*) ;

__attribute__((used)) static bool_t
FUNC_3(CLIENT *VAR_4, xdrproc_t VAR_5, void *VAR_6)
{
 struct clntraw_private *VAR_7 = VAR_3;
 XDR *VAR_8 = &VAR_7->xdr_stream;
 bool_t VAR_9;

 FUNC_0(&VAR_2);
 if (VAR_7 == ((void*)0)) {
  VAR_9 = (bool_t) VAR_0;
  FUNC_1(&VAR_2);
  return (VAR_9);
 }
 FUNC_1(&VAR_2);
 VAR_8->x_op = VAR_1;
 return ((*VAR_5)(VAR_8, VAR_6));
}
