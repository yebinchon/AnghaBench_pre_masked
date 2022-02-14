
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xdrproc_t ;
struct netconfig {int nc_netid; } ;
struct netbuf {int dummy; } ;
typedef int rpcvers_t ;
typedef int rpcprog_t ;
typedef int rpcproc_t ;
typedef int bool_t ;
struct TYPE_4__ {int cf_stat; } ;
struct TYPE_3__ {char* r_owner; int r_addr; int r_netid; int r_vers; int r_prog; } ;
typedef TYPE_1__ RPCB ;
typedef int CLIENT ;


 int FUNC_0 (int *,int ,int ,char*,int ,char*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int * FUNC_4 () ;
 TYPE_2__ VAR_5 ;
 int FUNC_5 (char*,int,char*,int) ;
 int FUNC_6 (struct netconfig*,struct netbuf*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

bool_t
FUNC_7(rpcprog_t VAR_9, rpcvers_t VAR_10, const struct netconfig *VAR_11,
    const struct netbuf *VAR_12)
{
 CLIENT *VAR_13;
 bool_t VAR_14 = VAR_0;
 RPCB VAR_15;
 char VAR_16[32];


 if (VAR_11 == ((void*)0)) {
  VAR_5.cf_stat = VAR_4;
  return (VAR_0);
 }
 if (VAR_12 == ((void*)0)) {
  VAR_5.cf_stat = VAR_3;
  return (VAR_0);
 }
 VAR_13 = FUNC_4();
 if (! VAR_13) {
  return (VAR_0);
 }



 VAR_15.r_addr = FUNC_6((struct netconfig *) VAR_11,
       (struct netbuf *)VAR_12);
 if (!VAR_15.r_addr) {
  FUNC_1(VAR_13);
  VAR_5.cf_stat = VAR_2;
  return (VAR_0);
 }
 VAR_15.r_prog = VAR_9;
 VAR_15.r_vers = VAR_10;
 VAR_15.r_netid = VAR_11->nc_netid;





 (void) FUNC_5(VAR_16, sizeof VAR_16, "%d", FUNC_3());
 VAR_15.r_owner = VAR_16;

 FUNC_0(VAR_13, (rpcproc_t)VAR_1, (xdrproc_t) VAR_8,
     (char *)(void *)&VAR_15, (xdrproc_t) VAR_7,
     (char *)(void *)&VAR_14, VAR_6);

 FUNC_1(VAR_13);
 FUNC_2(VAR_15.r_addr);
 return (VAR_14);
}
