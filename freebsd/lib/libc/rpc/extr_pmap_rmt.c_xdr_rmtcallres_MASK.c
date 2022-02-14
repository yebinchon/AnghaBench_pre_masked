
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
typedef int u_long ;
struct rmtcallres {int results_ptr; int (* xdr_results ) (int *,int ) ;int * port_ptr; int resultslen; } ;
typedef scalar_t__ caddr_t ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,scalar_t__*,int,int ) ;
 scalar_t__ FUNC_3 (int *,int *) ;

bool_t
FUNC_4(XDR *VAR_1, struct rmtcallres *VAR_2)
{
 caddr_t VAR_3;

 FUNC_0(VAR_1 != ((void*)0));
 FUNC_0(VAR_2 != ((void*)0));

 VAR_3 = (caddr_t)(void *)VAR_2->port_ptr;
 if (FUNC_2(VAR_1, &VAR_3, sizeof (u_long),
     (xdrproc_t)FUNC_3) && FUNC_3(VAR_1, &VAR_2->resultslen)) {
  VAR_2->port_ptr = (u_long *)(void *)VAR_3;
  return ((*(VAR_2->xdr_results))(VAR_1, VAR_2->results_ptr));
 }
 return (VAR_0);
}
