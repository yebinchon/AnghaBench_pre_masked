
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_ra__provide_props_cb_t ;
typedef int svn_ra__provide_base_cb_t ;
typedef int svn_ra__get_copysrc_kind_cb_t ;
typedef int svn_error_t ;
typedef int svn_editor_t ;
typedef int svn_delta_editor_t ;
typedef int svn_delta__unlock_func_t ;
typedef int svn_commit_callback2_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
struct svn_delta__extra_baton {int baton; int (* start_edit ) (int ,int ) ;} ;
struct fp_baton {void* cb_baton; int provide_props_cb; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_7__ {int (* get_commit_editor ) (TYPE_2__*,int const**,void**,int *,int ,void*,int *,int ,int *) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 struct fp_baton* FUNC_1 (int *,int) ;
 int * FUNC_2 (int *,int) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*,int const**,void**,int *,int ,void*,int *,int ,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int **,struct svn_delta__extra_baton**,int *,void**,int const*,void*,int *,char const*,char const*,int ,void*,int ,void*,int ,struct fp_baton*,int *,int *) ;
 int FUNC_6 (TYPE_2__*,char const**,int *) ;
 int FUNC_7 (TYPE_2__*,char const**,int *) ;
 char* FUNC_8 (char const*,char const*,int *) ;

svn_error_t *
FUNC_9(svn_editor_t **VAR_3,
                        svn_ra_session_t *VAR_4,
                        apr_hash_t *VAR_5,
                        svn_commit_callback2_t VAR_6,
                        void *VAR_7,
                        apr_hash_t *VAR_8,
                        svn_boolean_t VAR_9,
                        svn_ra__provide_base_cb_t VAR_10,
                        svn_ra__provide_props_cb_t VAR_11,
                        svn_ra__get_copysrc_kind_cb_t VAR_12,
                        void *VAR_13,
                        svn_cancel_func_t VAR_14,
                        void *VAR_15,
                        apr_pool_t *VAR_16,
                        apr_pool_t *VAR_17)
{
  const svn_delta_editor_t *VAR_18;
  void *VAR_19;
  struct svn_delta__extra_baton *VAR_20;
  svn_delta__unlock_func_t VAR_21;
  void *VAR_22;
  const char *VAR_23;
  const char *VAR_24;
  const char *VAR_25;
  svn_boolean_t *VAR_26;
  struct fp_baton *VAR_27;






  FUNC_0(VAR_4->vtable->get_commit_editor(VAR_4, &VAR_18, &VAR_19,
                                             VAR_5,
                                             VAR_6, VAR_7,
                                             VAR_8, VAR_9,
                                             VAR_16));


  FUNC_0(FUNC_6(VAR_4, &VAR_23, VAR_17));
  FUNC_0(FUNC_7(VAR_4, &VAR_24, VAR_17));
  VAR_25 = FUNC_8(VAR_23, VAR_24, VAR_17);




  VAR_26 = FUNC_2(VAR_16, sizeof(*VAR_26));



  VAR_27 = FUNC_1(VAR_16, sizeof(*VAR_27));
  VAR_27->provide_props_cb = VAR_11;
  VAR_27->cb_baton = VAR_13;





  FUNC_0(FUNC_5(VAR_3, &VAR_20,
                                       &VAR_21, &VAR_22,
                                       VAR_18, VAR_19,
                                       VAR_26,
                                       VAR_23, VAR_25,
                                       VAR_14, VAR_15,
                                       VAR_12, VAR_13,
                                       VAR_2, VAR_27,
                                       VAR_16, VAR_17));
  if (VAR_20->start_edit)
    {
      FUNC_0(VAR_20->start_edit(VAR_20->baton, VAR_0));
    }





  return VAR_1;
}
