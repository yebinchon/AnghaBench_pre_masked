
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xdrproc_t ;
typedef int uid_t ;
struct TYPE_5__ {int gidlist_len; int * gidlist_val; } ;
struct pname_to_uid_res {scalar_t__ major_status; scalar_t__ minor_status; TYPE_1__ gidlist; int gid; int uid; } ;
struct pname_to_uid_args {int mech; int pname; } ;
typedef int res ;
typedef TYPE_2__* gss_name_t ;
typedef int gss_OID ;
typedef int gid_t ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
struct TYPE_6__ {int handle; } ;
typedef scalar_t__ OM_uint32 ;
typedef int CLIENT ;


 int FUNC_0 (int *) ;
 TYPE_2__* const VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct pname_to_uid_res*,int) ;
 int FUNC_2 (struct pname_to_uid_args*,struct pname_to_uid_res*,int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int ,struct pname_to_uid_res*) ;
 scalar_t__ VAR_5 ;

OM_uint32
FUNC_5(OM_uint32 *VAR_6, const gss_name_t VAR_7,
    const gss_OID VAR_8, uid_t *VAR_9, gid_t *VAR_10,
    int *VAR_11, gid_t *VAR_12)

{
 struct pname_to_uid_res VAR_13;
 struct pname_to_uid_args VAR_14;
 enum clnt_stat VAR_15;
 int VAR_16, VAR_17;
 CLIENT *VAR_18;

 *VAR_6 = 0;

 if (VAR_7 == VAR_0)
  return (VAR_1);

 VAR_18 = FUNC_3();
 if (VAR_18 == ((void*)0))
  return (VAR_3);

 VAR_14.pname = VAR_7->handle;
 VAR_14.mech = VAR_8;

 FUNC_1(&VAR_13, sizeof(VAR_13));
 VAR_15 = FUNC_2(&VAR_14, &VAR_13, VAR_18);
 FUNC_0(VAR_18);
 if (VAR_15 != VAR_4) {
  *VAR_6 = VAR_15;
  return (VAR_3);
 }

 if (VAR_13.major_status != VAR_2) {
  *VAR_6 = VAR_13.minor_status;
  return (VAR_13.major_status);
 }

 *VAR_9 = VAR_13.uid;
 *VAR_10 = VAR_13.gid;
 VAR_17 = VAR_13.gidlist.gidlist_len;
 if (VAR_17 > *VAR_11)
  VAR_17 = *VAR_11;
 for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++)
  VAR_12[VAR_16] = VAR_13.gidlist.gidlist_val[VAR_16];
 *VAR_11 = VAR_17;

 FUNC_4((xdrproc_t) VAR_5, &VAR_13);

 return (VAR_2);
}
