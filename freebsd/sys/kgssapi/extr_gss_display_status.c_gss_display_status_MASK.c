
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
struct display_status_res {scalar_t__ major_status; scalar_t__ minor_status; scalar_t__ message_context; int status_string; } ;
struct display_status_args {int status_type; scalar_t__ message_context; int mech_type; scalar_t__ status_value; } ;
typedef int res ;
typedef int gss_buffer_t ;
typedef int gss_OID ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
typedef scalar_t__ OM_uint32 ;
typedef int CLIENT ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct display_status_res*,int) ;
 int FUNC_2 (struct display_status_args*,struct display_status_res*,int *) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 () ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ,struct display_status_res*) ;

OM_uint32
FUNC_6(OM_uint32 *VAR_4,
    OM_uint32 VAR_5,
    int VAR_6,
    const gss_OID VAR_7,
    OM_uint32 *VAR_8,
    gss_buffer_t VAR_9)
{
 struct display_status_res VAR_10;
 struct display_status_args VAR_11;
 enum clnt_stat VAR_12;
 CLIENT *VAR_13;

 *VAR_4 = 0;
 VAR_13 = FUNC_4();
 if (VAR_13 == ((void*)0))
  return (VAR_1);

 VAR_11.status_value = VAR_5;
 VAR_11.status_type = VAR_6;
 VAR_11.mech_type = VAR_7;
 VAR_11.message_context = *VAR_8;

 FUNC_1(&VAR_10, sizeof(VAR_10));
 VAR_12 = FUNC_2(&VAR_11, &VAR_10, VAR_13);
 FUNC_0(VAR_13);
 if (VAR_12 != VAR_2) {
  *VAR_4 = VAR_12;
  return (VAR_1);
 }

 if (VAR_10.major_status != VAR_0) {
  *VAR_4 = VAR_10.minor_status;
  return (VAR_10.major_status);
 }

 *VAR_8 = VAR_10.message_context;
 FUNC_3(&VAR_10.status_string, VAR_9);
 FUNC_5((xdrproc_t) VAR_3, &VAR_10);

 return (VAR_0);
}
