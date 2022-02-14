
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct rpc_clnt {struct rpc_auth* cl_auth; } ;
struct rpc_authops {int owner; struct rpc_auth* (* create ) (struct rpc_clnt*,int ) ;} ;
struct rpc_auth {int dummy; } ;
typedef int rpc_authflavor_t ;


 int VAR_0 ;
 struct rpc_auth* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct rpc_auth*) ;
 size_t VAR_1 ;
 struct rpc_authops** VAR_2 ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (char*,size_t) ;
 int VAR_3 ;
 int FUNC_5 (struct rpc_auth*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct rpc_auth* FUNC_8 (struct rpc_clnt*,int ) ;
 int FUNC_9 (int ) ;

struct rpc_auth *
FUNC_10(rpc_authflavor_t VAR_4, struct rpc_clnt *VAR_5)
{
 struct rpc_auth *VAR_6;
 const struct rpc_authops *VAR_7;
 u32 VAR_8 = FUNC_3(VAR_4);

 VAR_6 = FUNC_0(-VAR_0);
 if (VAR_8 >= VAR_1)
  goto out;

 if ((VAR_7 = VAR_2[VAR_8]) == ((void*)0))
  FUNC_4("rpc-auth-%u", VAR_8);
 FUNC_6(&VAR_3);
 VAR_7 = VAR_2[VAR_8];
 if (VAR_7 == ((void*)0) || !FUNC_9(VAR_7->owner)) {
  FUNC_7(&VAR_3);
  goto out;
 }
 FUNC_7(&VAR_3);
 VAR_6 = VAR_7->create(VAR_5, VAR_4);
 FUNC_2(VAR_7->owner);
 if (FUNC_1(VAR_6))
  return VAR_6;
 if (VAR_5->cl_auth)
  FUNC_5(VAR_5->cl_auth);
 VAR_5->cl_auth = VAR_6;

out:
 return VAR_6;
}
