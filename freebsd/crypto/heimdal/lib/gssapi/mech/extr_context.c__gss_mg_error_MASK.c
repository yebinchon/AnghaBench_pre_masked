
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ length; int * value; } ;
struct mg_thread_ctx {TYPE_2__ min_error; TYPE_2__ maj_error; void* min_stat; void* maj_stat; int * mech; } ;
typedef TYPE_1__* gssapi_mech_interface ;
struct TYPE_6__ {int gm_mech_oid; void* (* gm_display_status ) (void**,void*,int ,int *,void**,TYPE_2__*) ;} ;
typedef void* OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 struct mg_thread_ctx* FUNC_1 () ;
 int FUNC_2 (void**,TYPE_2__*) ;
 void* FUNC_3 (void**,void*,int ,int *,void**,TYPE_2__*) ;
 void* FUNC_4 (void**,void*,int ,int *,void**,TYPE_2__*) ;

void
FUNC_5(gssapi_mech_interface VAR_2, OM_uint32 VAR_3, OM_uint32 VAR_4)
{
    OM_uint32 VAR_5, VAR_6;
    OM_uint32 VAR_7;
    struct mg_thread_ctx *VAR_8;





    if (VAR_2->gm_display_status == ((void*)0))
 return ;

    VAR_8 = FUNC_1();
    if (VAR_8 == ((void*)0))
 return;

    FUNC_2(&VAR_6, &VAR_8->maj_error);
    FUNC_2(&VAR_6, &VAR_8->min_error);

    VAR_8->mech = &VAR_2->gm_mech_oid;
    VAR_8->maj_stat = VAR_3;
    VAR_8->min_stat = VAR_4;

    VAR_5 = VAR_2->gm_display_status(&VAR_6,
     VAR_3,
     VAR_0,
     &VAR_2->gm_mech_oid,
     &VAR_7,
     &VAR_8->maj_error);
    if (FUNC_0(VAR_5)) {
 VAR_8->maj_error.value = ((void*)0);
 VAR_8->maj_error.length = 0;
    }
    VAR_5 = VAR_2->gm_display_status(&VAR_6,
     VAR_4,
     VAR_1,
     &VAR_2->gm_mech_oid,
     &VAR_7,
     &VAR_8->min_error);
    if (FUNC_0(VAR_5)) {
 VAR_8->min_error.value = ((void*)0);
 VAR_8->min_error.length = 0;
    }
}
