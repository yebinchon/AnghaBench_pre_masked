
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcent_test_data {int dummy; } ;
struct rpcent {char* r_name; char** r_aliases; } ;


 scalar_t__ FUNC_0 (struct rpcent*,struct rpcent*,int *) ;
 int FUNC_1 (struct rpcent*) ;
 struct rpcent* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct rpcent_test_data*,struct rpcent*) ;
 scalar_t__ FUNC_5 (struct rpcent*,int *) ;

__attribute__((used)) static int
FUNC_6(struct rpcent *VAR_0, void *VAR_1)
{
 char **VAR_2;
 struct rpcent *VAR_3;

 FUNC_3("testing getrpcbyname() with the following data:\n");
 FUNC_1(VAR_0);

 VAR_3 = FUNC_2(VAR_0->r_name);
 if (FUNC_5(VAR_3, ((void*)0)) != 0)
  goto errfin;

 if ((FUNC_0(VAR_3, VAR_0, ((void*)0)) != 0) &&
     (FUNC_4((struct rpcent_test_data *)VAR_1, VAR_3)
     !=0))
     goto errfin;

 for (VAR_2 = VAR_0->r_aliases; *VAR_2; ++VAR_2) {
  VAR_3 = FUNC_2(*VAR_2);

  if (FUNC_5(VAR_3, ((void*)0)) != 0)
   goto errfin;

  if ((FUNC_0(VAR_3, VAR_0, ((void*)0)) != 0) &&
      (FUNC_4(
      (struct rpcent_test_data *)VAR_1, VAR_3) != 0))
      goto errfin;
 }

 FUNC_3("ok\n");
 return (0);

errfin:
 FUNC_3("not ok\n");

 return (-1);
}
