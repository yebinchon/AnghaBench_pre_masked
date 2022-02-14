
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int svn_string_t ;
typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
struct edit_baton {int notify_baton; int (* notify_func ) (int ,TYPE_1__*,int *) ;int externals; scalar_t__ force; int root_path; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char const*,int *) ;
 int FUNC_3 (int ,TYPE_1__*,int *) ;
 char* FUNC_4 (int ,char const*,int *) ;
 int FUNC_5 (char const*,int *) ;
 int * FUNC_6 (int ,int *,int ,int ) ;
 int * FUNC_7 (int *,int ) ;
 int FUNC_8 (char const*,scalar_t__*,int *) ;
 int FUNC_9 (char const*,int ,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_1__* FUNC_10 (char const*,int ,int *) ;
 int VAR_8 ;

__attribute__((used)) static svn_error_t *
FUNC_11(void *VAR_9,
                  const char *VAR_10,
                  const apr_array_header_t *VAR_11,
                  apr_hash_t *VAR_12,
                  svn_revnum_t VAR_13,
                  apr_pool_t *VAR_14)
{
  struct edit_baton *VAR_15 = VAR_9;
  svn_node_kind_t VAR_16;
  const char *VAR_17 = FUNC_4(VAR_15->root_path, VAR_10,
                                          VAR_14);
  svn_string_t *VAR_18;

  FUNC_0(FUNC_8(VAR_17, &VAR_16, VAR_14));
  if (VAR_16 == VAR_7)
    FUNC_0(FUNC_9(VAR_17, VAR_0, VAR_14));
  else if (VAR_16 == VAR_6)
    return FUNC_6(VAR_1, ((void*)0),
                             FUNC_1("'%s' exists and is not a directory"),
                             FUNC_5(VAR_17, VAR_14));
  else if (! (VAR_16 == VAR_5 && VAR_15->force))
    return FUNC_6(VAR_2, ((void*)0),
                             FUNC_1("'%s' already exists"),
                             FUNC_5(VAR_17, VAR_14));

  if ( (VAR_18 = FUNC_7(VAR_12, VAR_4)) )
    FUNC_0(FUNC_2(VAR_15->externals, VAR_17, VAR_18));

  if (VAR_15->notify_func)
    {
      svn_wc_notify_t *VAR_19 = FUNC_10(VAR_17,
                                                     VAR_8,
                                                     VAR_14);
      VAR_19->kind = VAR_5;
      (*VAR_15->notify_func)(VAR_15->notify_baton, VAR_19, VAR_14);
    }

  return VAR_3;
}
