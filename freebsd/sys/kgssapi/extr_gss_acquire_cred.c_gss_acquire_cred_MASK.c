
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int xdrproc_t ;
struct acquire_cred_res {scalar_t__ major_status; scalar_t__ minor_status; scalar_t__ time_rec; TYPE_2__* actual_mechs; int output_cred; } ;
struct acquire_cred_args {int cred_usage; int desired_mechs; scalar_t__ time_req; scalar_t__ desired_name; int uid; } ;
struct _gss_cred_id_t {int dummy; } ;
typedef int res ;
typedef TYPE_3__* gss_name_t ;
typedef int gss_cred_usage_t ;
typedef TYPE_4__* gss_cred_id_t ;
typedef int gss_OID_set ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
struct TYPE_13__ {TYPE_1__* td_ucred; } ;
struct TYPE_12__ {int handle; } ;
struct TYPE_11__ {scalar_t__ handle; } ;
struct TYPE_10__ {int count; int * elements; } ;
struct TYPE_9__ {int cr_uid; } ;
typedef scalar_t__ OM_uint32 ;
typedef int CLIENT ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct acquire_cred_res*,int) ;
 TYPE_8__* VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__*,int *,int *) ;
 scalar_t__ FUNC_3 (scalar_t__*,int *) ;
 int FUNC_4 (struct acquire_cred_args*,struct acquire_cred_res*,int *) ;
 int * FUNC_5 () ;
 TYPE_4__* FUNC_6 (int,int ,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (int ,struct acquire_cred_res*) ;

OM_uint32
FUNC_8(OM_uint32 *VAR_7,
    const gss_name_t VAR_8,
    OM_uint32 VAR_9,
    const gss_OID_set VAR_10,
    gss_cred_usage_t VAR_11,
    gss_cred_id_t *VAR_12,
    gss_OID_set *VAR_13,
    OM_uint32 *VAR_14)
{
 OM_uint32 VAR_15;
 struct acquire_cred_res VAR_16;
 struct acquire_cred_args VAR_17;
 enum clnt_stat VAR_18;
 gss_cred_id_t VAR_19;
 int VAR_20;
 CLIENT *VAR_21;

 *VAR_7 = 0;
 VAR_21 = FUNC_5();
 if (VAR_21 == ((void*)0))
  return (VAR_1);

 VAR_17.uid = VAR_5->td_ucred->cr_uid;
 if (VAR_8)
  VAR_17.desired_name = VAR_8->handle;
 else
  VAR_17.desired_name = 0;
 VAR_17.time_req = VAR_9;
 VAR_17.desired_mechs = VAR_10;
 VAR_17.cred_usage = VAR_11;

 FUNC_1(&VAR_16, sizeof(VAR_16));
 VAR_18 = FUNC_4(&VAR_17, &VAR_16, VAR_21);
 FUNC_0(VAR_21);
 if (VAR_18 != VAR_4) {
  *VAR_7 = VAR_18;
  return (VAR_1);
 }

 if (VAR_16.major_status != VAR_0) {
  *VAR_7 = VAR_16.minor_status;
  return (VAR_16.major_status);
 }

 VAR_19 = FUNC_6(sizeof(struct _gss_cred_id_t), VAR_2, VAR_3);
 VAR_19->handle = VAR_16.output_cred;
 *VAR_12 = VAR_19;
 if (VAR_13) {
  VAR_15 = FUNC_3(VAR_7,
      VAR_13);
  if (VAR_15)
   return (VAR_15);
  for (VAR_20 = 0; VAR_20 < VAR_16.actual_mechs->count; VAR_20++) {
   VAR_15 = FUNC_2(VAR_7,
       &VAR_16.actual_mechs->elements[VAR_20], VAR_13);
   if (VAR_15)
    return (VAR_15);
  }
 }
 if (VAR_14)
  *VAR_14 = VAR_16.time_rec;

 FUNC_7((xdrproc_t) VAR_6, &VAR_16);

 return (VAR_0);
}
