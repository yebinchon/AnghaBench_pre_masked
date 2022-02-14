
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ svn_node_kind_t ;
typedef int svn_fs_t ;
typedef int svn_fs_hotcopy_notify_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
struct TYPE_3__ {int (* hotcopy ) (int *,int *,char const*,char const*,int ,int ,int ,void*,int ,void*,int ,int *,int ) ;} ;
typedef TYPE_1__ fs_library_vtable_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_1__**,char const*,int *) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;
 int FUNC_5 (int *,int *,char const*,char const*,int ,int ,int ,void*,int ,void*,int ,int *,int ) ;
 char const* FUNC_6 (char const*,int ,int *) ;
 int FUNC_7 (char const*,int *) ;
 int * FUNC_8 (int ,int *,int ) ;
 int * FUNC_9 (int ,int *,int ,char const*,...) ;
 int * FUNC_10 (int ) ;
 int FUNC_11 (char const**,char const*,int *) ;
 int FUNC_12 (char const*,scalar_t__*,int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_13 (char const*,char const*,int *) ;

svn_error_t *
FUNC_14(const char *VAR_10, const char *VAR_11,
                svn_boolean_t VAR_12, svn_boolean_t VAR_13,
                svn_fs_hotcopy_notify_t VAR_14,
                void *VAR_15,
                svn_cancel_func_t VAR_16,
                void *VAR_17,
                apr_pool_t *VAR_18)
{
  fs_library_vtable_t *VAR_19;
  const char *VAR_20;
  svn_fs_t *VAR_21;
  svn_fs_t *VAR_22;
  const char *VAR_23;
  svn_node_kind_t VAR_24;

  if (FUNC_4(VAR_10, VAR_11) == 0)
    return FUNC_8(VAR_2, ((void*)0),
                             FUNC_1("Hotcopy source and destination are equal"));

  FUNC_0(FUNC_11(&VAR_20, VAR_10, VAR_18));
  FUNC_0(FUNC_3(&VAR_19, VAR_20, VAR_18));
  VAR_21 = FUNC_2(((void*)0), VAR_18);
  VAR_22 = FUNC_2(((void*)0), VAR_18);

  FUNC_0(FUNC_12(VAR_11, &VAR_24, VAR_18));
  if (VAR_24 == VAR_7)
    return FUNC_9(VAR_3, ((void*)0),
                             FUNC_1("'%s' already exists and is a file"),
                             FUNC_7(VAR_11,
                                                    VAR_18));
  if (VAR_24 == VAR_9)
    return FUNC_9(VAR_3, ((void*)0),
                             FUNC_1("'%s' already exists and has an unknown "
                               "node kind"),
                             FUNC_7(VAR_11,
                                                    VAR_18));
  if (VAR_24 == VAR_6)
    {
      svn_node_kind_t VAR_25;

      FUNC_0(FUNC_12(FUNC_6(VAR_11,
                                                VAR_0,
                                                VAR_18),
                                &VAR_25, VAR_18));
      if (VAR_25 != VAR_8)
        {
          FUNC_0(FUNC_11(&VAR_23, VAR_11, VAR_18));
          if (FUNC_4(VAR_20, VAR_23) != 0)
            return FUNC_9(
                     VAR_1, ((void*)0),
                     FUNC_1("The filesystem type of the hotcopy source "
                       "('%s') does not match the filesystem "
                       "type of the hotcopy destination ('%s')"),
                     VAR_20, VAR_23);
        }
    }

  FUNC_0(VAR_19->hotcopy(VAR_21, VAR_22, VAR_10, VAR_11, VAR_12,
                          VAR_13, VAR_14, VAR_15,
                          VAR_16, VAR_17, VAR_5,
                          VAR_18, VAR_4));
  return FUNC_10(FUNC_13(VAR_11, VAR_20, VAR_18));
}
