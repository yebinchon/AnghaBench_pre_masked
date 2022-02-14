
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xdrproc_t ;
struct netconfig {int dummy; } ;
typedef scalar_t__ rpcvers_t ;
typedef int rpcproc_t ;
typedef int * rpcblist_ptr ;
typedef int rpcblist ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
struct TYPE_2__ {int cf_error; void* cf_stat; } ;
typedef int CLIENT ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int *,int ,char*,int ) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (char const*,struct netconfig const*,int *) ;
 TYPE_1__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

rpcblist *
FUNC_5(const struct netconfig *VAR_13, const char *VAR_14)
{
 rpcblist_ptr VAR_15 = ((void*)0);
 CLIENT *VAR_16;
 enum clnt_stat VAR_17;
 rpcvers_t VAR_18 = 0;

 VAR_16 = FUNC_4(VAR_14, VAR_13, ((void*)0));
 if (VAR_16 == ((void*)0)) {
  return (VAR_15);
 }
 VAR_17 = FUNC_0(VAR_16, (rpcproc_t)VAR_2,
     (xdrproc_t) VAR_12, ((void*)0), (xdrproc_t) VAR_11,
     (char *)(void *)&VAR_15, VAR_10);
 if (VAR_17 == VAR_8)
  goto done;

 if ((VAR_17 != VAR_6) &&
     (VAR_17 != VAR_5)) {
  VAR_9.cf_stat = VAR_7;
  FUNC_3(VAR_16, &VAR_9.cf_error);
  goto done;
 }


 FUNC_1(VAR_16, VAR_0, (char *)(void *)&VAR_18);
 if (VAR_18 == VAR_4) {
  VAR_18 = VAR_3;
  FUNC_1(VAR_16, VAR_1, (char *)(void *)&VAR_18);
  if (FUNC_0(VAR_16, (rpcproc_t)VAR_2,
      (xdrproc_t) VAR_12, ((void*)0), (xdrproc_t) VAR_11,
      (char *)(void *)&VAR_15, VAR_10) == VAR_8)
   goto done;
 }
 VAR_9.cf_stat = VAR_7;
 FUNC_3(VAR_16, &VAR_9.cf_error);

done:
 FUNC_2(VAR_16);
 return (VAR_15);
}
