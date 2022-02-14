
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_7__ {int revision; } ;
typedef TYPE_1__ svn_diff_source_t ;
typedef scalar_t__ svn_boolean_t ;
struct svn_diff_tree_processor_t {int * baton; } ;
typedef int diff_writer_info_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_8__ {scalar_t__ nelts; } ;
typedef TYPE_2__ apr_array_header_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (scalar_t__*,char const*,char const*,char const*,int ,int ,int *,int *,int ,scalar_t__,int *,int ,int *,int *) ;
 int FUNC_2 (char const*,int ,int ,TYPE_2__ const*,int *,int *,int,int *,int *) ;
 int VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_3(const char *VAR_4,
                  const svn_diff_source_t *VAR_5,
                  const svn_diff_source_t *VAR_6,
                  const char *VAR_7,
                  const char *VAR_8,
                            apr_hash_t *VAR_9,
                            apr_hash_t *VAR_10,
                  svn_boolean_t VAR_11,
                  const apr_array_header_t *VAR_12,
                  void *VAR_13,
                  const struct svn_diff_tree_processor_t *VAR_14,
                  apr_pool_t *VAR_15)
{
  diff_writer_info_t *VAR_16 = VAR_14->baton;
  svn_boolean_t VAR_17 = VAR_0;

  if (VAR_11)
    FUNC_0(FUNC_1(&VAR_17, VAR_4,
                                 VAR_7, VAR_8,
                                 VAR_5->revision,
                                 VAR_6->revision,
                                 VAR_9, VAR_10,
                                 VAR_3, VAR_0,
                                 ((void*)0),
                                 VAR_1, VAR_16,
                                 VAR_15));
  if (VAR_12->nelts > 0)
    FUNC_0(FUNC_2(VAR_4,
                               VAR_5->revision,
                               VAR_6->revision, VAR_12,
                               VAR_9, VAR_10, !VAR_17,
                               VAR_16, VAR_15));
  return VAR_2;
}
