
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_repos_authz_func_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_fs_root_t ;
typedef scalar_t__ svn_fs_node_relation_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
struct TYPE_3__ {int * (* close_edit ) (void*,int *) ;int (* close_directory ) (void*,int *) ;int (* open_root ) (void*,int ,int *,void**) ;int (* set_target_revision ) (void*,int ,int *) ;} ;
typedef TYPE_1__ svn_delta_editor_t ;
typedef void* svn_boolean_t ;
struct context {void* ignore_ancestry; void* entry_props; void* text_deltas; void* authz_read_baton; int authz_read_func; int * target_root; int * source_root; TYPE_1__ const* editor; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (struct context*,void*,int ,char const*,char const*,scalar_t__,int *) ;
 int FUNC_3 (int *,char const*,int ,void*,int *) ;
 int FUNC_4 (struct context*,void*,char const*,int *) ;
 int FUNC_5 (struct context*,void*,int ,char const*,char const*,char*,int *) ;
 int FUNC_6 (int *,char const*,int *) ;
 int FUNC_7 (struct context*,void*,int ,char const*,char const*,char const*,scalar_t__,int *) ;
 int FUNC_8 (void*,int ,int *) ;
 int FUNC_9 (void*,int ,int *) ;
 int FUNC_10 (void*,int ,int *,void**) ;
 int FUNC_11 (void*,int ,int *,void**) ;
 int FUNC_12 (void*,int ,int *,void**) ;
 int FUNC_13 (void*,int ,int *,void**) ;
 int FUNC_14 (void*,int ,int *,void**) ;
 int FUNC_15 (void*,int *) ;
 int * FUNC_16 (void*,int *) ;
 int VAR_3 ;
 int * FUNC_17 (int ,int *,char*) ;
 int FUNC_18 (scalar_t__*,int *,char const*,int *) ;
 scalar_t__ FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int *) ;
 int FUNC_21 (scalar_t__*,int *,char const*,int *,char const*,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_22 (int ,int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 char* FUNC_26 (char const*,int *) ;
 char* FUNC_27 (char const*,int *) ;
 char* FUNC_28 (char const*,char const*,int *) ;

svn_error_t *
FUNC_29(svn_fs_root_t *VAR_8,
                     const char *VAR_9,
                     const char *VAR_10,
                     svn_fs_root_t *VAR_11,
                     const char *VAR_12,
                     const svn_delta_editor_t *VAR_13,
                     void *VAR_14,
                     svn_repos_authz_func_t VAR_15,
                     void *VAR_16,
                     svn_boolean_t VAR_17,
                     svn_depth_t VAR_18,
                     svn_boolean_t VAR_19,
                     svn_boolean_t VAR_20,
                     apr_pool_t *VAR_21)
{
  void *VAR_22 = ((void*)0);
  struct context VAR_23;
  const char *VAR_24;
  svn_node_kind_t VAR_25, VAR_26;
  svn_revnum_t VAR_27;
  svn_fs_node_relation_t VAR_28;
  const char *VAR_29;


  if (VAR_9)
    VAR_9 = FUNC_26(VAR_9, VAR_21);
  else
    return FUNC_17(VAR_0, 0,
                            "Invalid source parent directory '(null)'");


  if (VAR_12)
    VAR_12 = FUNC_26(VAR_12, VAR_21);
  else
    return FUNC_17(VAR_1, 0,
                            FUNC_1("Invalid target path"));

  if (VAR_18 == VAR_3)
    return FUNC_17(VAR_2, ((void*)0),
                            FUNC_1("Delta depth 'exclude' not supported"));



  if (*VAR_10)
    VAR_29 = FUNC_27(VAR_12, VAR_21);
  else
    VAR_29 = VAR_12;


  VAR_24 = FUNC_28(VAR_9, VAR_10, VAR_21);


  FUNC_0(FUNC_18(&VAR_26, VAR_11, VAR_12, VAR_21));
  FUNC_0(FUNC_18(&VAR_25, VAR_8, VAR_24, VAR_21));


  if ((VAR_26 == VAR_7) && (VAR_25 == VAR_7))
    goto cleanup;



  if ((! *VAR_10) && ((VAR_25 != VAR_6)
                         || VAR_26 != VAR_6))
    return FUNC_17
      (VAR_1, 0,
       FUNC_1("Invalid editor anchoring; at least one of the "
         "input paths is not a directory and there was no source entry"));





  FUNC_0(FUNC_22(FUNC_24(VAR_11), VAR_21));
  FUNC_0(FUNC_22(FUNC_24(VAR_8), VAR_21));


  if (FUNC_19(VAR_11))
    {
      FUNC_0(VAR_13->set_target_revision
              (VAR_14, FUNC_23(VAR_11), VAR_21));
    }
  else if (FUNC_20(VAR_11))
    {
      FUNC_0(VAR_13->set_target_revision
              (VAR_14, FUNC_25(VAR_11), VAR_21));
    }




  VAR_23.editor = VAR_13;
  VAR_23.source_root = VAR_8;
  VAR_23.target_root = VAR_11;
  VAR_23.authz_read_func = VAR_15;
  VAR_23.authz_read_baton = VAR_16;
  VAR_23.text_deltas = VAR_17;
  VAR_23.entry_props = VAR_19;
  VAR_23.ignore_ancestry = VAR_20;


  VAR_27 = FUNC_6(VAR_8, VAR_9, VAR_21);



  if (VAR_26 == VAR_7)
    {


      FUNC_0(FUNC_3(VAR_11, VAR_29,
                               VAR_15, VAR_16, VAR_21));
      FUNC_0(VAR_13->open_root(VAR_14, VAR_27, VAR_21, &VAR_22));
      FUNC_0(FUNC_4(&VAR_23, VAR_22, VAR_10, VAR_21));
      goto cleanup;
    }
  if (VAR_25 == VAR_7)
    {


      FUNC_0(FUNC_3(VAR_11, VAR_29,
                               VAR_15, VAR_16, VAR_21));
      FUNC_0(VAR_13->open_root(VAR_14, VAR_27, VAR_21, &VAR_22));
      FUNC_0(FUNC_2(&VAR_23, VAR_22, VAR_18, VAR_12,
                              VAR_10, VAR_26, VAR_21));
      goto cleanup;
    }


  FUNC_0(FUNC_21(&VAR_28, VAR_11, VAR_12,
                               VAR_8, VAR_24, VAR_21));

  if (VAR_28 == VAR_4)
    {

      goto cleanup;
    }
  else if (*VAR_10)
    {



      if ((VAR_25 != VAR_26)
          || ((VAR_28 == VAR_5) && (! VAR_20)))
        {
          FUNC_0(FUNC_3(VAR_11, VAR_29,
                                   VAR_15, VAR_16, VAR_21));
          FUNC_0(VAR_13->open_root(VAR_14, VAR_27, VAR_21, &VAR_22));
          FUNC_0(FUNC_4(&VAR_23, VAR_22, VAR_10, VAR_21));
          FUNC_0(FUNC_2(&VAR_23, VAR_22, VAR_18, VAR_12,
                                  VAR_10, VAR_26, VAR_21));
        }

      else
        {
          FUNC_0(FUNC_3(VAR_11, VAR_29,
                                   VAR_15, VAR_16, VAR_21));
          FUNC_0(VAR_13->open_root(VAR_14, VAR_27, VAR_21, &VAR_22));
          FUNC_0(FUNC_7(&VAR_23, VAR_22, VAR_18, VAR_24,
                                      VAR_12, VAR_10,
                                      VAR_26, VAR_21));
        }
    }
  else
    {

      FUNC_0(FUNC_3(VAR_11, VAR_29,
                               VAR_15, VAR_16, VAR_21));
      FUNC_0(VAR_13->open_root(VAR_14, VAR_27, VAR_21, &VAR_22));
      FUNC_0(FUNC_5(&VAR_23, VAR_22, VAR_18, VAR_24,
                         VAR_12, "", VAR_21));
    }

 cleanup:


  if (VAR_22)
    FUNC_0(VAR_13->close_directory(VAR_22, VAR_21));


  return VAR_13->close_edit(VAR_14, VAR_21);
}
