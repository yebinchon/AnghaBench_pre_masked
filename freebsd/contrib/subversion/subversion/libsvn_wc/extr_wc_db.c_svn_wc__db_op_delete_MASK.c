
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ svn_wc_notify_func2_t ;
struct TYPE_8__ {int abspath; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
struct op_delete_baton_t {char const* moved_to_relpath; int notify; int delete_dir_externals; int * work_items; int * conflict; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct op_delete_baton_t*,TYPE_1__*,char const*,int *) ;
 int VAR_5 ;
 int FUNC_6 (TYPE_1__*,char const*,int ,int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int VAR_7 ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char const*,int *) ;
 int * FUNC_10 (int ,int *,int ,int ,int ) ;
 int FUNC_11 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;
 int FUNC_12 (TYPE_1__*,char const*,int ,struct op_delete_baton_t*,int ,int *,int ,void*,scalar_t__,void*,int ,int *) ;

svn_error_t *
FUNC_13(svn_wc__db_t *VAR_8,
                     const char *VAR_9,
                     const char *VAR_10,
                     svn_boolean_t VAR_11,
                     svn_skel_t *VAR_12,
                     svn_skel_t *VAR_13,
                     svn_cancel_func_t VAR_14,
                     void *VAR_15,
                     svn_wc_notify_func2_t VAR_16,
                     void *VAR_17,
                     apr_pool_t *VAR_18)
{
  svn_wc__db_wcroot_t *VAR_19;
  svn_wc__db_wcroot_t *VAR_20;
  const char *VAR_21;
  const char *VAR_22;
  struct op_delete_baton_t VAR_23;

  FUNC_1(FUNC_8(VAR_9));

  FUNC_0(FUNC_11(&VAR_19, &VAR_21,
                                                VAR_8, VAR_9,
                                                VAR_18, VAR_18));
  FUNC_3(VAR_19);

  if (VAR_10)
    {
      FUNC_0(FUNC_11(&VAR_20,
                                                    &VAR_22,
                                                    VAR_8, VAR_10,
                                                    VAR_18,
                                                    VAR_18));
      FUNC_3(VAR_20);

      if (FUNC_7(VAR_19->abspath, VAR_20->abspath) != 0)
        return FUNC_10(VAR_2, ((void*)0),
                                 FUNC_4("Cannot move '%s' to '%s' because they "
                                   "are not in the same working copy"),
                                 FUNC_9(VAR_9,
                                                        VAR_18),
                                 FUNC_9(VAR_10,
                                                        VAR_18));
    }
  else
    VAR_22 = ((void*)0);

  VAR_23.moved_to_relpath = VAR_22;
  VAR_23.conflict = VAR_12;
  VAR_23.work_items = VAR_13;
  VAR_23.delete_dir_externals = VAR_11;

  if (VAR_16)
    {


      VAR_23.notify = VAR_4;
      FUNC_0(FUNC_12(VAR_19, VAR_21,
                                VAR_6, &VAR_23,
                                VAR_5, ((void*)0),
                                VAR_14, VAR_15,
                                VAR_16, VAR_17,
                                VAR_1,
                                VAR_18));
    }
  else
    {

      VAR_23.notify = VAR_0;
      FUNC_2(
                    FUNC_5(&VAR_23, VAR_19, VAR_21, VAR_18),
                    VAR_19);
    }

  FUNC_0(FUNC_6(VAR_19, VAR_9, VAR_7,
                        VAR_18));

  return VAR_3;
}
