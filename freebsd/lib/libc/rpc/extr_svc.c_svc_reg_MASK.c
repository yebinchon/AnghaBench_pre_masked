
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct svc_callout {void (* sc_dispatch ) (struct svc_req*,TYPE_1__*) ;char* sc_netid; struct svc_callout* sc_next; int sc_vers; int sc_prog; } ;
struct netconfig {char* nc_netid; } ;
typedef int rpcvers_t ;
typedef int rpcprog_t ;
typedef int bool_t ;
struct TYPE_5__ {char* xp_netid; int xp_ltaddr; int xp_fd; } ;
typedef TYPE_1__ SVCXPRT ;


 int VAR_0 ;
 int VAR_1 ;
 struct netconfig* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct netconfig*) ;
 struct svc_callout* FUNC_3 (int) ;
 int FUNC_4 (int const,int const,struct netconfig*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (char*) ;
 struct svc_callout* FUNC_8 (int const,int const,struct svc_callout**,char*) ;
 struct svc_callout* VAR_2 ;
 int VAR_3 ;

bool_t
FUNC_9(SVCXPRT *VAR_4, const rpcprog_t VAR_5, const rpcvers_t VAR_6,
    void (*VAR_7)(struct svc_req *, SVCXPRT *),
    const struct netconfig *VAR_8)
{
 bool_t VAR_9;
 struct svc_callout *VAR_10;
 struct svc_callout *VAR_11;
 struct netconfig *VAR_12;
 char *VAR_13 = ((void*)0);
 int VAR_14 = 0;



 if (VAR_4->xp_netid) {
  VAR_13 = FUNC_7(VAR_4->xp_netid);
  VAR_14 = 1;
 } else if (VAR_8 && VAR_8->nc_netid) {
  VAR_13 = FUNC_7(VAR_8->nc_netid);
  VAR_14 = 1;
 } else if ((VAR_12 = FUNC_0(VAR_4->xp_fd)) != ((void*)0)) {
  VAR_13 = FUNC_7(VAR_12->nc_netid);
  VAR_14 = 1;
  FUNC_2(VAR_12);
 }
 if ((VAR_13 == ((void*)0)) && (VAR_14 == 1)) {
  return (VAR_0);
 }

 FUNC_6(&VAR_3);
 if ((VAR_11 = FUNC_8(VAR_5, VAR_6, &VAR_10, VAR_13)) != ((void*)0)) {
  FUNC_1(VAR_13);
  if (VAR_11->sc_dispatch == VAR_7)
   goto rpcb_it;
  FUNC_5(&VAR_3);
  return (VAR_0);
 }
 VAR_11 = FUNC_3(sizeof (struct svc_callout));
 if (VAR_11 == ((void*)0)) {
  FUNC_1(VAR_13);
  FUNC_5(&VAR_3);
  return (VAR_0);
 }

 VAR_11->sc_prog = VAR_5;
 VAR_11->sc_vers = VAR_6;
 VAR_11->sc_dispatch = VAR_7;
 VAR_11->sc_netid = VAR_13;
 VAR_11->sc_next = VAR_2;
 VAR_2 = VAR_11;

 if ((VAR_4->xp_netid == ((void*)0)) && (VAR_14 == 1) && VAR_13)
  ((SVCXPRT *) VAR_4)->xp_netid = FUNC_7(VAR_13);

rpcb_it:
 FUNC_5(&VAR_3);

 if (VAR_8) {

  VAR_9 = FUNC_4(VAR_5, VAR_6, (struct netconfig *) VAR_8,
  &((SVCXPRT *) VAR_4)->xp_ltaddr);
  return (VAR_9);
 }
 return (VAR_1);
}
