
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct canonicalize_name_res {scalar_t__ major_status; scalar_t__ minor_status; int output_name; } ;
struct canonicalize_name_args {int mech_type; int input_name; } ;
struct _gss_name_t {int dummy; } ;
typedef int res ;
typedef TYPE_1__* gss_name_t ;
typedef int gss_OID ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
struct TYPE_5__ {int handle; } ;
typedef scalar_t__ OM_uint32 ;
typedef int CLIENT ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct canonicalize_name_res*,int) ;
 int FUNC_2 (struct canonicalize_name_args*,struct canonicalize_name_res*,int *) ;
 int * FUNC_3 () ;
 TYPE_1__* FUNC_4 (int,int ,int ) ;

OM_uint32
FUNC_5(OM_uint32 *VAR_5,
    gss_name_t VAR_6,
    const gss_OID VAR_7,
    gss_name_t *VAR_8)
{
 struct canonicalize_name_res VAR_9;
 struct canonicalize_name_args VAR_10;
 enum clnt_stat VAR_11;
 gss_name_t VAR_12;
 CLIENT *VAR_13;

 *VAR_5 = 0;
 VAR_13 = FUNC_3();
 if (VAR_13 == ((void*)0))
  return (VAR_1);

 VAR_10.input_name = VAR_6->handle;
 VAR_10.mech_type = VAR_7;

 FUNC_1(&VAR_9, sizeof(VAR_9));
 VAR_11 = FUNC_2(&VAR_10, &VAR_9, VAR_13);
 FUNC_0(VAR_13);
 if (VAR_11 != VAR_4) {
  *VAR_5 = VAR_11;
  return (VAR_1);
 }

 if (VAR_9.major_status != VAR_0) {
  *VAR_5 = VAR_9.minor_status;
  return (VAR_9.major_status);
 }

 VAR_12 = FUNC_4(sizeof(struct _gss_name_t), VAR_2, VAR_3);
 VAR_12->handle = VAR_9.output_name;
 *VAR_8 = VAR_12;

 return (VAR_0);
}
