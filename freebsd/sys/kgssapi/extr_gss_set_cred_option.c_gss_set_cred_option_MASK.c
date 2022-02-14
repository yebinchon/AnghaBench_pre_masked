
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct set_cred_option_res {scalar_t__ major_status; scalar_t__ minor_status; } ;
struct set_cred_option_args {int option_value; int option_name; scalar_t__ cred; } ;
typedef int res ;
typedef TYPE_1__* gss_cred_id_t ;
typedef int * gss_buffer_t ;
typedef int gss_OID ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
struct TYPE_3__ {scalar_t__ handle; } ;
typedef scalar_t__ OM_uint32 ;
typedef int CLIENT ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct set_cred_option_res*,int) ;
 int FUNC_2 (struct set_cred_option_args*,struct set_cred_option_res*,int *) ;
 int * FUNC_3 () ;

OM_uint32
FUNC_4(OM_uint32 *VAR_3,
        gss_cred_id_t *VAR_4,
        const gss_OID VAR_5,
        const gss_buffer_t VAR_6)
{
 struct set_cred_option_res VAR_7;
 struct set_cred_option_args VAR_8;
 enum clnt_stat VAR_9;
 CLIENT *VAR_10;

 *VAR_3 = 0;

 VAR_10 = FUNC_3();
 if (VAR_10 == ((void*)0))
  return (VAR_1);

 if (VAR_4)
  VAR_8.cred = (*VAR_4)->handle;
 else
  VAR_8.cred = 0;
 VAR_8.option_name = VAR_5;
 VAR_8.option_value = *VAR_6;

 FUNC_1(&VAR_7, sizeof(VAR_7));
 VAR_9 = FUNC_2(&VAR_8, &VAR_7, VAR_10);
 FUNC_0(VAR_10);

 if (VAR_9 != VAR_2) {
  *VAR_3 = VAR_9;
  return (VAR_1);
 }

 if (VAR_7.major_status != VAR_0) {
  *VAR_3 = VAR_7.minor_status;
  return (VAR_7.major_status);
 }

 return (VAR_0);
}
