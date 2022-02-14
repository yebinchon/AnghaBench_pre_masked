
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ length; int * value; } ;
struct mg_thread_ctx {TYPE_1__ min_error; TYPE_1__ maj_error; void* min_stat; void* maj_stat; int * mech; } ;
struct _gss_mech_switch {int gm_mech_oid; void* (* gm_display_status ) (void**,void*,int ,int *,void**,TYPE_1__*) ;} ;
typedef void* OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void**,TYPE_1__*) ;
 struct mg_thread_ctx VAR_2 ;
 void* FUNC_2 (void**,void*,int ,int *,void**,TYPE_1__*) ;
 void* FUNC_3 (void**,void*,int ,int *,void**,TYPE_1__*) ;

void
FUNC_4(struct _gss_mech_switch *VAR_3, OM_uint32 VAR_4, OM_uint32 VAR_5)
{
 OM_uint32 VAR_6, VAR_7;
 OM_uint32 VAR_8;
 struct mg_thread_ctx *VAR_9;

 VAR_9 = &VAR_2;

 FUNC_1(&VAR_7, &VAR_9->maj_error);
 FUNC_1(&VAR_7, &VAR_9->min_error);

 VAR_9->mech = &VAR_3->gm_mech_oid;
 VAR_9->maj_stat = VAR_4;
 VAR_9->min_stat = VAR_5;

 VAR_6 = VAR_3->gm_display_status(&VAR_7,
     VAR_4,
     VAR_0,
     &VAR_3->gm_mech_oid,
     &VAR_8,
     &VAR_9->maj_error);
 if (FUNC_0(VAR_6)) {
  VAR_9->maj_error.value = ((void*)0);
  VAR_9->maj_error.length = 0;
 }
 VAR_6 = VAR_3->gm_display_status(&VAR_7,
     VAR_5,
     VAR_1,
     &VAR_3->gm_mech_oid,
     &VAR_8,
     &VAR_9->min_error);
 if (FUNC_0(VAR_6)) {
  VAR_9->min_error.value = ((void*)0);
  VAR_9->min_error.length = 0;
 }
}
