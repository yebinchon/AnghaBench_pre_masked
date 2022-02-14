
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_callout {scalar_t__ sc_prog; scalar_t__ sc_vers; int * sc_netid; struct svc_callout* sc_next; } ;
typedef scalar_t__ rpcvers_t ;
typedef scalar_t__ rpcprog_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*,int *) ;
 struct svc_callout* VAR_0 ;

__attribute__((used)) static struct svc_callout *
FUNC_2(rpcprog_t VAR_1, rpcvers_t VAR_2, struct svc_callout **VAR_3,
    char *VAR_4)
{
 struct svc_callout *VAR_5, *VAR_6;

 FUNC_0(VAR_3 != ((void*)0));

 VAR_6 = ((void*)0);
 for (VAR_5 = VAR_0; VAR_5 != ((void*)0); VAR_5 = VAR_5->sc_next) {
  if (((VAR_5->sc_prog == VAR_1) && (VAR_5->sc_vers == VAR_2)) &&
      ((VAR_4 == ((void*)0)) || (VAR_5->sc_netid == ((void*)0)) ||
      (FUNC_1(VAR_4, VAR_5->sc_netid) == 0)))
   break;
  VAR_6 = VAR_5;
 }
 *VAR_3 = VAR_6;
 return (VAR_5);
}
