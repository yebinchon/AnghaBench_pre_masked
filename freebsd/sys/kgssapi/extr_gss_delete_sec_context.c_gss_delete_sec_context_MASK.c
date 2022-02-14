
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int xdrproc_t ;
struct delete_sec_context_res {int output_token; } ;
struct delete_sec_context_args {scalar_t__ ctx; } ;
typedef int res ;
typedef TYPE_1__* gss_ctx_id_t ;
typedef TYPE_2__* gss_buffer_t ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
struct TYPE_9__ {int * value; scalar_t__ length; } ;
struct TYPE_8__ {scalar_t__ handle; } ;
typedef int OM_uint32 ;
typedef int CLIENT ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct delete_sec_context_res*,int) ;
 int FUNC_2 (struct delete_sec_context_args*,struct delete_sec_context_res*,int *) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int * FUNC_5 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int ,struct delete_sec_context_res*) ;

OM_uint32
FUNC_7(OM_uint32 *VAR_5, gss_ctx_id_t *VAR_6,
 gss_buffer_t VAR_7)
{
 struct delete_sec_context_res VAR_8;
 struct delete_sec_context_args VAR_9;
 enum clnt_stat VAR_10;
 gss_ctx_id_t VAR_11;
 CLIENT *VAR_12;

 *VAR_5 = 0;

 if (!VAR_3)
  return (VAR_1);

 if (*VAR_6) {
  VAR_11 = *VAR_6;






  if (VAR_11->handle) {
   VAR_9.ctx = VAR_11->handle;
   VAR_12 = FUNC_5();
   if (VAR_12 == ((void*)0))
    return (VAR_1);

   FUNC_1(&VAR_8, sizeof(VAR_8));
   VAR_10 = FUNC_2(&VAR_9, &VAR_8, VAR_12);
   FUNC_0(VAR_12);
   if (VAR_10 != VAR_2) {
    *VAR_5 = VAR_10;
    return (VAR_1);
   }

   if (VAR_7)
    FUNC_3(&VAR_8.output_token,
        VAR_7);
   FUNC_6((xdrproc_t) VAR_4, &VAR_8);

   FUNC_4(VAR_11, ((void*)0));
  } else {
   FUNC_4(VAR_11, VAR_7);
  }
  *VAR_6 = ((void*)0);
 } else {
  if (VAR_7) {
   VAR_7->length = 0;
   VAR_7->value = ((void*)0);
  }
 }

 return (VAR_0);
}
