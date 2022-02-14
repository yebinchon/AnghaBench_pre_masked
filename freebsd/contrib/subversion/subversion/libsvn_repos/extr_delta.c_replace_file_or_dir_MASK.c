
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_checksum_t ;
typedef int svn_boolean_t ;
struct context {TYPE_1__* editor; int target_root; int source_root; int authz_read_baton; int (* authz_read_func ) (int *,int ,char const*,int ,int *) ;} ;
typedef int apr_pool_t ;
struct TYPE_2__ {int * (* close_file ) (void*,int ,int *) ;int (* open_file ) (char const*,void*,int ,int *,void**) ;int * (* close_directory ) (void*,int *) ;int (* open_directory ) (char const*,void*,int ,int *,void**) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_3 (struct context*,void*,char const*,scalar_t__,int *) ;
 int FUNC_4 (struct context*,void*,int ,char const*,char const*,char const*,int *) ;
 int FUNC_5 (struct context*,void*,char const*,char const*,int *) ;
 int FUNC_6 (int ,char const*,int *) ;
 int FUNC_7 (int *,int ,char const*,int ,int *) ;
 int FUNC_8 (char const*,void*,int ,int *,void**) ;
 int * FUNC_9 (void*,int *) ;
 int FUNC_10 (char const*,void*,int ,int *,void**) ;
 int * FUNC_11 (void*,int ,int *) ;
 int VAR_2 ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int **,int ,int ,char const*,int ,int *) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_14(struct context *VAR_4,
                    void *VAR_5,
                    svn_depth_t VAR_6,
                    const char *VAR_7,
                    const char *VAR_8,
                    const char *VAR_9,
                    svn_node_kind_t VAR_10,
                    apr_pool_t *VAR_11)
{
  svn_revnum_t VAR_12 = VAR_0;
  svn_boolean_t VAR_13;

  FUNC_2(VAR_8 && VAR_7 && VAR_9);

  if (VAR_4->authz_read_func)
    {
      FUNC_1(VAR_4->authz_read_func(&VAR_13, VAR_4->target_root, VAR_8,
                                 VAR_4->authz_read_baton, VAR_11));
      if (!VAR_13)
        return FUNC_3(VAR_4, VAR_5, VAR_9, VAR_10, VAR_11);
    }


  VAR_12 = FUNC_6(VAR_4->source_root, VAR_7, VAR_11);

  if (VAR_10 == VAR_3)
    {
      void *VAR_14;

      FUNC_1(VAR_4->editor->open_directory(VAR_9, VAR_5,
                                        VAR_12, VAR_11,
                                        &VAR_14));
      FUNC_1(FUNC_4(VAR_4, VAR_14, FUNC_0(VAR_6),
                         VAR_7, VAR_8, VAR_9, VAR_11));
      return VAR_4->editor->close_directory(VAR_14, VAR_11);
    }
  else
    {
      void *VAR_15;
      svn_checksum_t *VAR_16;

      FUNC_1(VAR_4->editor->open_file(VAR_9, VAR_5, VAR_12,
                                   VAR_11, &VAR_15));
      FUNC_1(FUNC_5(VAR_4, VAR_15, VAR_7, VAR_8, VAR_11));
      FUNC_1(FUNC_13(&VAR_16, VAR_2,
                                   VAR_4->target_root, VAR_8, VAR_1,
                                   VAR_11));
      return VAR_4->editor->close_file
             (VAR_15, FUNC_12(VAR_16, VAR_11), VAR_11);
    }
}
