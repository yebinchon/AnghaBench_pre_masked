
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xdrproc_t ;
struct export_sec_context_res {int interprocess_token; int format; } ;
struct export_sec_context_args {scalar_t__ ctx; } ;
typedef int res ;
typedef TYPE_1__* gss_ctx_id_t ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
struct TYPE_4__ {scalar_t__ handle; } ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (struct export_sec_context_res*,int) ;
 int FUNC_2 (struct export_sec_context_args*,struct export_sec_context_res*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,struct export_sec_context_res*) ;

OM_uint32
FUNC_4(gss_ctx_id_t VAR_4)
{
 struct export_sec_context_res VAR_5;
 struct export_sec_context_args VAR_6;
 enum clnt_stat VAR_7;
 OM_uint32 VAR_8;

 if (!VAR_2)
  return (VAR_0);

 VAR_6.ctx = VAR_4->handle;
 FUNC_1(&VAR_5, sizeof(VAR_5));
 VAR_7 = FUNC_2(&VAR_6, &VAR_5, VAR_2);
 if (VAR_7 != VAR_1) {
  return (VAR_0);
 }

 VAR_8 = FUNC_0(VAR_4, VAR_5.format, &VAR_5.interprocess_token);
 VAR_4->handle = 0;

 FUNC_3((xdrproc_t) VAR_3, &VAR_5);

 return (VAR_8);
}
