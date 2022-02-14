
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_checksum_t ;
typedef int svn_boolean_t ;
struct context {TYPE_1__* editor; int target_root; int authz_read_baton; int (* authz_read_func ) (int *,int ,char const*,int ,int *) ;} ;
typedef int apr_pool_t ;
struct TYPE_2__ {int * (* close_file ) (void*,int ,int *) ;int (* add_file ) (char const*,void*,int *,int ,int *,void**) ;int * (* close_directory ) (void*,int *) ;int (* add_directory ) (char const*,void*,int *,int ,int *,void**) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_3 (struct context*,void*,char const*,scalar_t__,int *) ;
 int FUNC_4 (struct context*,void*,int ,int *,char const*,char const*,int *) ;
 int FUNC_5 (struct context*,void*,int *,char const*,int *) ;
 int FUNC_6 (int *,int ,char const*,int ,int *) ;
 int FUNC_7 (char const*,void*,int *,int ,int *,void**) ;
 int * FUNC_8 (void*,int *) ;
 int FUNC_9 (char const*,void*,int *,int ,int *,void**) ;
 int * FUNC_10 (void*,int ,int *) ;
 int VAR_2 ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int **,int ,int ,char const*,int ,int *) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_13(struct context *VAR_4, void *VAR_5,
                svn_depth_t VAR_6,
                const char *VAR_7,
                const char *VAR_8,
                svn_node_kind_t VAR_9,
                apr_pool_t *VAR_10)
{
  struct context *VAR_11 = VAR_4;
  svn_boolean_t VAR_12;

  FUNC_2(VAR_7 && VAR_8);

  if (VAR_4->authz_read_func)
    {
      FUNC_1(VAR_4->authz_read_func(&VAR_12, VAR_4->target_root, VAR_7,
                                 VAR_4->authz_read_baton, VAR_10));
      if (!VAR_12)
        return FUNC_3(VAR_4, VAR_5, VAR_8, VAR_9, VAR_10);
    }

  if (VAR_9 == VAR_3)
    {
      void *VAR_13;

      FUNC_1(VAR_11->editor->add_directory(VAR_8, VAR_5, ((void*)0),
                                             VAR_0, VAR_10,
                                             &VAR_13));
      FUNC_1(FUNC_4(VAR_11, VAR_13, FUNC_0(VAR_6),
                         ((void*)0), VAR_7, VAR_8, VAR_10));
      return VAR_11->editor->close_directory(VAR_13, VAR_10);
    }
  else
    {
      void *VAR_14;
      svn_checksum_t *VAR_15;

      FUNC_1(VAR_11->editor->add_file(VAR_8, VAR_5,
                                        ((void*)0), VAR_0, VAR_10,
                                        &VAR_14));
      FUNC_1(FUNC_5(VAR_11, VAR_14, ((void*)0), VAR_7, VAR_10));
      FUNC_1(FUNC_12(&VAR_15, VAR_2,
                                   VAR_11->target_root, VAR_7,
                                   VAR_1, VAR_10));
      return VAR_11->editor->close_file
             (VAR_14, FUNC_11(VAR_15, VAR_10), VAR_10);
    }
}
