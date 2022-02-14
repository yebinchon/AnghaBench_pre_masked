
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_reco_data_done {int dummy; } ;
struct dlm_migrate_request {int dummy; } ;
struct dlm_master_request {int dummy; } ;
struct dlm_master_requery {int dummy; } ;
struct dlm_lock_request {int dummy; } ;
struct dlm_finalize_reco {int dummy; } ;
struct dlm_exit_domain {int dummy; } ;
struct dlm_deref_lockres {int dummy; } ;
struct dlm_ctxt {int dlm_domain_handlers; int key; int dlm_hb_up; int dlm_hb_down; } ;
struct dlm_create_lock {int dummy; } ;
struct dlm_begin_reco {int dummy; } ;
struct dlm_assert_master {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int * VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_0 (struct dlm_ctxt*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ,int ,struct dlm_ctxt*,int ) ;
 int FUNC_4 (int ,int ,int,int ,struct dlm_ctxt*,int *,int *) ;

__attribute__((used)) static int FUNC_5(struct dlm_ctxt *VAR_41)
{
 int VAR_42;

 FUNC_1(0, "registering handlers.\n");

 FUNC_3(&VAR_41->dlm_hb_down, VAR_21,
       VAR_31, VAR_41, VAR_8);
 VAR_42 = FUNC_2(((void*)0), &VAR_41->dlm_hb_down);
 if (VAR_42)
  goto bail;

 FUNC_3(&VAR_41->dlm_hb_up, VAR_22,
       VAR_32, VAR_41, VAR_9);
 VAR_42 = FUNC_2(((void*)0), &VAR_41->dlm_hb_up);
 if (VAR_42)
  goto bail;

 VAR_42 = FUNC_4(VAR_12, VAR_41->key,
     sizeof(struct dlm_master_request),
     VAR_34,
     VAR_41, ((void*)0), &VAR_41->dlm_domain_handlers);
 if (VAR_42)
  goto bail;

 VAR_42 = FUNC_4(VAR_0, VAR_41->key,
     sizeof(struct dlm_assert_master),
     VAR_23,
     VAR_41, VAR_24,
     &VAR_41->dlm_domain_handlers);
 if (VAR_42)
  goto bail;

 VAR_42 = FUNC_4(VAR_4, VAR_41->key,
     sizeof(struct dlm_create_lock),
     VAR_27,
     VAR_41, ((void*)0), &VAR_41->dlm_domain_handlers);
 if (VAR_42)
  goto bail;

 VAR_42 = FUNC_4(VAR_3, VAR_41->key,
     VAR_2,
     VAR_26,
     VAR_41, ((void*)0), &VAR_41->dlm_domain_handlers);
 if (VAR_42)
  goto bail;

 VAR_42 = FUNC_4(VAR_20, VAR_41->key,
     VAR_19,
     VAR_40,
     VAR_41, ((void*)0), &VAR_41->dlm_domain_handlers);
 if (VAR_42)
  goto bail;

 VAR_42 = FUNC_4(VAR_17, VAR_41->key,
     VAR_16,
     VAR_37,
     VAR_41, ((void*)0), &VAR_41->dlm_domain_handlers);
 if (VAR_42)
  goto bail;

 VAR_42 = FUNC_4(VAR_6, VAR_41->key,
     sizeof(struct dlm_exit_domain),
     VAR_29,
     VAR_41, ((void*)0), &VAR_41->dlm_domain_handlers);
 if (VAR_42)
  goto bail;

 VAR_42 = FUNC_4(VAR_5, VAR_41->key,
     sizeof(struct dlm_deref_lockres),
     VAR_28,
     VAR_41, ((void*)0), &VAR_41->dlm_domain_handlers);
 if (VAR_42)
  goto bail;

 VAR_42 = FUNC_4(VAR_13, VAR_41->key,
     sizeof(struct dlm_migrate_request),
     VAR_36,
     VAR_41, ((void*)0), &VAR_41->dlm_domain_handlers);
 if (VAR_42)
  goto bail;

 VAR_42 = FUNC_4(VAR_15, VAR_41->key,
     VAR_14,
     VAR_35,
     VAR_41, ((void*)0), &VAR_41->dlm_domain_handlers);
 if (VAR_42)
  goto bail;

 VAR_42 = FUNC_4(VAR_11, VAR_41->key,
     sizeof(struct dlm_master_requery),
     VAR_33,
     VAR_41, ((void*)0), &VAR_41->dlm_domain_handlers);
 if (VAR_42)
  goto bail;

 VAR_42 = FUNC_4(VAR_10, VAR_41->key,
     sizeof(struct dlm_lock_request),
     VAR_39,
     VAR_41, ((void*)0), &VAR_41->dlm_domain_handlers);
 if (VAR_42)
  goto bail;

 VAR_42 = FUNC_4(VAR_18, VAR_41->key,
     sizeof(struct dlm_reco_data_done),
     VAR_38,
     VAR_41, ((void*)0), &VAR_41->dlm_domain_handlers);
 if (VAR_42)
  goto bail;

 VAR_42 = FUNC_4(VAR_1, VAR_41->key,
     sizeof(struct dlm_begin_reco),
     VAR_25,
     VAR_41, ((void*)0), &VAR_41->dlm_domain_handlers);
 if (VAR_42)
  goto bail;

 VAR_42 = FUNC_4(VAR_7, VAR_41->key,
     sizeof(struct dlm_finalize_reco),
     VAR_30,
     VAR_41, ((void*)0), &VAR_41->dlm_domain_handlers);
 if (VAR_42)
  goto bail;

bail:
 if (VAR_42)
  FUNC_0(VAR_41);

 return VAR_42;
}
