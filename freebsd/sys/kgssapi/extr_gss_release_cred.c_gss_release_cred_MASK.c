
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct release_cred_res {int minor_status; int major_status; } ;
struct release_cred_args {int cred; } ;
typedef TYPE_1__* gss_cred_id_t ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
struct TYPE_4__ {int handle; } ;
typedef int OM_uint32 ;
typedef int CLIENT ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct release_cred_args*,struct release_cred_res*,int *) ;
 int * FUNC_3 () ;
 int VAR_4 ;

OM_uint32
FUNC_4(OM_uint32 *VAR_5, gss_cred_id_t *VAR_6)
{
 struct release_cred_res VAR_7;
 struct release_cred_args VAR_8;
 enum clnt_stat VAR_9;
 CLIENT *VAR_10;

 *VAR_5 = 0;

 if (!VAR_4)
  return (VAR_1);

 if (*VAR_6) {
  VAR_8.cred = (*VAR_6)->handle;

  VAR_10 = FUNC_3();
  if (VAR_10 == ((void*)0))
   return (VAR_1);
  VAR_9 = FUNC_2(&VAR_8, &VAR_7, VAR_10);
  FUNC_0(VAR_10);
  if (VAR_9 != VAR_3) {
   *VAR_5 = VAR_9;
   return (VAR_1);
  }

  FUNC_1((*VAR_6), VAR_2);
  *VAR_6 = ((void*)0);

  *VAR_5 = VAR_7.minor_status;
  return (VAR_7.major_status);
 }

 return (VAR_0);
}
