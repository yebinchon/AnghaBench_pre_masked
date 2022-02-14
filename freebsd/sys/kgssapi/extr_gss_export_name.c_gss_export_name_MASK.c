
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xdrproc_t ;
struct export_name_res {scalar_t__ major_status; scalar_t__ minor_status; int exported_name; } ;
struct export_name_args {int input_name; } ;
typedef int res ;
typedef TYPE_1__* gss_name_t ;
typedef int gss_buffer_t ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
struct TYPE_3__ {int handle; } ;
typedef scalar_t__ OM_uint32 ;
typedef int CLIENT ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct export_name_res*,int) ;
 int FUNC_2 (struct export_name_args*,struct export_name_res*,int *) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 () ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ,struct export_name_res*) ;

OM_uint32
FUNC_6(OM_uint32 *VAR_4, gss_name_t VAR_5,
    gss_buffer_t VAR_6)
{
 struct export_name_res VAR_7;
 struct export_name_args VAR_8;
 enum clnt_stat VAR_9;
 CLIENT *VAR_10;

 *VAR_4 = 0;
 VAR_10 = FUNC_4();
 if (VAR_10 == ((void*)0))
  return (VAR_1);

 VAR_8.input_name = VAR_5->handle;

 FUNC_1(&VAR_7, sizeof(VAR_7));
 VAR_9 = FUNC_2(&VAR_8, &VAR_7, VAR_10);
 FUNC_0(VAR_10);
 if (VAR_9 != VAR_2) {
  *VAR_4 = VAR_9;
  return (VAR_1);
 }

 if (VAR_7.major_status != VAR_0) {
  *VAR_4 = VAR_7.minor_status;
  return (VAR_7.major_status);
 }

 FUNC_3(&VAR_7.exported_name, VAR_6);
 FUNC_5((xdrproc_t) VAR_3, &VAR_7);

 return (VAR_0);
}
