
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct rpc_err {int dummy; } ;
struct netconfig {char* nc_netid; } ;
typedef int rpcvers_t ;
typedef int rpcprog_t ;
typedef int nettype_array ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
struct TYPE_2__ {scalar_t__ cf_stat; struct rpc_err cf_error; } ;
typedef int CLIENT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (void*) ;
 struct netconfig* FUNC_1 (void*) ;
 void* FUNC_2 (char*) ;
 int * FUNC_3 (char const*,int ,int ,struct netconfig*,struct timeval const*) ;
 int FUNC_4 (char*,char*) ;
 TYPE_1__ VAR_5 ;
 int FUNC_5 (char*,char const*) ;
 size_t FUNC_6 (char const*) ;

CLIENT *
FUNC_7(const char *VAR_6, rpcprog_t VAR_7, rpcvers_t VAR_8,
    const char *VAR_9, const struct timeval *VAR_10)
{
 struct netconfig *VAR_11;
 CLIENT *VAR_12 = ((void*)0);
 void *VAR_13;
 enum clnt_stat VAR_14 = VAR_2;
 struct rpc_err VAR_15;
 char VAR_16[VAR_0];
 char *VAR_17 = &VAR_16[0];

 if (VAR_9 == ((void*)0))
  VAR_17 = ((void*)0);
 else {
  size_t VAR_18 = FUNC_6(VAR_9);
  if (VAR_18 >= sizeof (VAR_16)) {
   VAR_5.cf_stat = VAR_4;
   return (((void*)0));
  }
  FUNC_5(VAR_17, VAR_9);
 }

 if ((VAR_13 = FUNC_2((char *)VAR_17)) == ((void*)0)) {
  VAR_5.cf_stat = VAR_4;
  return (((void*)0));
 }
 VAR_5.cf_stat = VAR_2;
 while (VAR_12 == ((void*)0)) {
  if ((VAR_11 = FUNC_1(VAR_13)) == ((void*)0)) {
   if (VAR_5.cf_stat == VAR_2)
    VAR_5.cf_stat = VAR_4;
   break;
  }



  VAR_12 = FUNC_3(VAR_6, VAR_7, VAR_8, VAR_11, VAR_10);
  if (VAR_12)
   break;
  else
   if (VAR_5.cf_stat != VAR_1 &&
       VAR_5.cf_stat != VAR_3) {
    VAR_14 = VAR_5.cf_stat;
    VAR_15 = VAR_5.cf_error;
   }
 }





 if ((VAR_5.cf_stat == VAR_1 ||
    VAR_5.cf_stat == VAR_3) &&
     (VAR_14 != VAR_2)) {
  VAR_5.cf_stat = VAR_14;
  VAR_5.cf_error = VAR_15;
 }
 FUNC_0(VAR_13);
 return (VAR_12);
}
