
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_callout {struct svc_callout* sc_netid; int * sc_next; } ;
typedef int rpcvers_t ;
typedef int rpcprog_t ;


 int FUNC_0 (struct svc_callout*,int) ;
 int FUNC_1 (int const,int const,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct svc_callout* FUNC_4 (int const,int const,struct svc_callout**,int *) ;
 int * VAR_0 ;
 int VAR_1 ;

void
FUNC_5(const rpcprog_t VAR_2, const rpcvers_t VAR_3)
{
 struct svc_callout *VAR_4;
 struct svc_callout *VAR_5;


 (void) FUNC_1(VAR_2, VAR_3, ((void*)0));
 FUNC_3(&VAR_1);
 while ((VAR_5 = FUNC_4(VAR_2, VAR_3, &VAR_4, ((void*)0))) != ((void*)0)) {
  if (VAR_4 == ((void*)0)) {
   VAR_0 = VAR_5->sc_next;
  } else {
   VAR_4->sc_next = VAR_5->sc_next;
  }
  VAR_5->sc_next = ((void*)0);
  if (VAR_5->sc_netid)
   FUNC_0(VAR_5->sc_netid, sizeof (VAR_5->sc_netid) + 1);
  FUNC_0(VAR_5, sizeof (struct svc_callout));
 }
 FUNC_2(&VAR_1);
}
