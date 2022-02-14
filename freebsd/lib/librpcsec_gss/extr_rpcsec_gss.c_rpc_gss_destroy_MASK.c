
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xdrproc_t ;
struct TYPE_2__ {scalar_t__ value; } ;
struct rpc_gss_data {scalar_t__ gd_name; TYPE_1__ gd_verf; } ;
typedef int OM_uint32 ;
typedef struct rpc_gss_data AUTH ;


 struct rpc_gss_data* FUNC_0 (struct rpc_gss_data*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,scalar_t__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct rpc_gss_data*,int) ;
 int FUNC_4 (struct rpc_gss_data*,int ) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_6(AUTH *VAR_3)
{
 struct rpc_gss_data *VAR_4;
 OM_uint32 VAR_5;

 FUNC_2("in rpc_gss_destroy()");

 VAR_4 = FUNC_0(VAR_3);

 FUNC_4(VAR_3, VAR_1);

 if (VAR_4->gd_name != VAR_0)
  FUNC_1(&VAR_5, &VAR_4->gd_name);
 if (VAR_4->gd_verf.value)
  FUNC_5((xdrproc_t) VAR_2,
      (char *) &VAR_4->gd_verf);

 FUNC_3(VAR_4, sizeof(*VAR_4));
 FUNC_3(VAR_3, sizeof(*VAR_3));
}
