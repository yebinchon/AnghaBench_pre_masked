
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct import_name_res {scalar_t__ major_status; scalar_t__ minor_status; int output_name; } ;
struct import_name_args {int input_name_type; int input_name_buffer; } ;
struct _gss_name_t {int dummy; } ;
typedef int res ;
typedef TYPE_1__* gss_name_t ;
typedef int * gss_buffer_t ;
typedef int gss_OID ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
struct TYPE_5__ {int handle; } ;
typedef scalar_t__ OM_uint32 ;
typedef int CLIENT ;


 int FUNC_0 (int *) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct import_name_res*,int) ;
 int FUNC_2 (struct import_name_args*,struct import_name_res*,int *) ;
 int * FUNC_3 () ;
 TYPE_1__* FUNC_4 (int,int ,int ) ;

OM_uint32
FUNC_5(OM_uint32 *VAR_6,
    const gss_buffer_t VAR_7,
    const gss_OID VAR_8,
    gss_name_t *VAR_9)
{
 struct import_name_res VAR_10;
 struct import_name_args VAR_11;
 enum clnt_stat VAR_12;
 gss_name_t VAR_13;
 CLIENT *VAR_14;

 *VAR_6 = 0;
 *VAR_9 = VAR_0;

 VAR_14 = FUNC_3();
 if (VAR_14 == ((void*)0))
  return (VAR_2);

 VAR_11.input_name_buffer = *VAR_7;
 VAR_11.input_name_type = VAR_8;

 FUNC_1(&VAR_10, sizeof(VAR_10));
 VAR_12 = FUNC_2(&VAR_11, &VAR_10, VAR_14);
 FUNC_0(VAR_14);
 if (VAR_12 != VAR_5) {
  *VAR_6 = VAR_12;
  return (VAR_2);
 }

 if (VAR_10.major_status != VAR_1) {
  *VAR_6 = VAR_10.minor_status;
  return (VAR_10.major_status);
 }

 VAR_13 = FUNC_4(sizeof(struct _gss_name_t), VAR_3, VAR_4);
 VAR_13->handle = VAR_10.output_name;
 *VAR_6 = 0;
 *VAR_9 = VAR_13;

 return (VAR_1);
}
