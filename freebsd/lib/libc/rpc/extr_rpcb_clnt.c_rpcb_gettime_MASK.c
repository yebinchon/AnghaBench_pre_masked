
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xdrproc_t ;
typedef int time_t ;
struct netconfig {int dummy; } ;
typedef scalar_t__ rpcvers_t ;
typedef int rpcproc_t ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
typedef int bool_t ;
struct TYPE_2__ {scalar_t__ cf_stat; } ;
typedef int CLIENT ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int *,int ,char*,int ) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (void*) ;
 struct netconfig* FUNC_4 (void*) ;
 void* FUNC_5 (char*) ;
 int * FUNC_6 (char const*,struct netconfig*,int *) ;
 TYPE_1__ VAR_11 ;
 int FUNC_7 (int *) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;

bool_t
FUNC_8(const char *VAR_15, time_t *VAR_16)
{
 CLIENT *VAR_17 = ((void*)0);
 void *VAR_18;
 struct netconfig *VAR_19;
 rpcvers_t VAR_20;
 enum clnt_stat VAR_21;


 if ((VAR_15 == ((void*)0)) || (VAR_15[0] == 0)) {
  FUNC_7(VAR_16);
  return (VAR_10);
 }

 if ((VAR_18 = FUNC_5("netpath")) == ((void*)0)) {
  VAR_11.cf_stat = VAR_9;
  return (VAR_2);
 }
 VAR_11.cf_stat = VAR_8;
 while (VAR_17 == ((void*)0)) {
  if ((VAR_19 = FUNC_4(VAR_18)) == ((void*)0)) {
   if (VAR_11.cf_stat == VAR_8)
    VAR_11.cf_stat = VAR_9;
   break;
  }
  VAR_17 = FUNC_6(VAR_15, VAR_19, ((void*)0));
  if (VAR_17)
   break;
 }
 FUNC_3(VAR_18);
 if (VAR_17 == (CLIENT *) ((void*)0)) {
  return (VAR_2);
 }

 VAR_21 = FUNC_0(VAR_17, (rpcproc_t)VAR_3,
  (xdrproc_t) VAR_14, ((void*)0),
  (xdrproc_t) VAR_13, (char *)(void *)VAR_16, VAR_12);

 if ((VAR_21 == VAR_7) || (VAR_21 == VAR_6)) {
  FUNC_1(VAR_17, VAR_0, (char *)(void *)&VAR_20);
  if (VAR_20 == VAR_5) {

   VAR_20 = VAR_4;
   FUNC_1(VAR_17, VAR_1, (char *)(void *)&VAR_20);
   VAR_21 = FUNC_0(VAR_17, (rpcproc_t)VAR_3,
    (xdrproc_t) VAR_14, ((void*)0),
    (xdrproc_t) VAR_13, (char *)(void *)VAR_16,
    VAR_12);
  }
 }
 FUNC_2(VAR_17);
 return (VAR_21 == VAR_8? VAR_10: VAR_2);
}
