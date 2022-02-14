
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uid_t ;
struct pname_to_uid_res {scalar_t__ major_status; scalar_t__ minor_status; int uid; } ;
struct pname_to_uid_args {int mech; int pname; } ;
typedef int res ;
typedef TYPE_1__* gss_name_t ;
typedef int gss_OID ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
struct TYPE_4__ {int handle; } ;
typedef scalar_t__ OM_uint32 ;
typedef int CLIENT ;


 int FUNC_0 (int *) ;
 TYPE_1__* const VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct pname_to_uid_res*,int) ;
 int FUNC_2 (struct pname_to_uid_args*,struct pname_to_uid_res*,int *) ;
 int * FUNC_3 () ;

OM_uint32
FUNC_4(OM_uint32 *VAR_5, const gss_name_t VAR_6,
    const gss_OID VAR_7, uid_t *VAR_8)
{
 struct pname_to_uid_res VAR_9;
 struct pname_to_uid_args VAR_10;
 enum clnt_stat VAR_11;
 CLIENT *VAR_12;

 *VAR_5 = 0;

 if (VAR_6 == VAR_0)
  return (VAR_1);

 VAR_12 = FUNC_3();
 if (VAR_12 == ((void*)0))
  return (VAR_3);

 VAR_10.pname = VAR_6->handle;
 VAR_10.mech = VAR_7;

 FUNC_1(&VAR_9, sizeof(VAR_9));
 VAR_11 = FUNC_2(&VAR_10, &VAR_9, VAR_12);
 FUNC_0(VAR_12);
 if (VAR_11 != VAR_4) {
  *VAR_5 = VAR_11;
  return (VAR_3);
 }

 if (VAR_9.major_status != VAR_2) {
  *VAR_5 = VAR_9.minor_status;
  return (VAR_9.major_status);
 }

 *VAR_8 = VAR_9.uid;
 return (VAR_2);
}
