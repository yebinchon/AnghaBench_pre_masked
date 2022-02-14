
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_5__ {int revision; } ;
typedef TYPE_1__ svn_diff_source_t ;
struct svn_diff_tree_processor_t {TYPE_2__* baton; } ;
struct TYPE_6__ {scalar_t__ no_diff_deleted; } ;
typedef TYPE_2__ diff_writer_info_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (char const*,int ,int ,int *,int *,int *,int ,TYPE_2__*,int *) ;
 int FUNC_3 (int **,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const char *VAR_3,
                 const svn_diff_source_t *VAR_4,
                           apr_hash_t *VAR_5,
                 void *VAR_6,
                 const struct svn_diff_tree_processor_t *VAR_7,
                 apr_pool_t *VAR_8)
{
  diff_writer_info_t *VAR_9 = VAR_7->baton;
  apr_array_header_t *VAR_10;
  apr_hash_t *VAR_11;

  if (VAR_9->no_diff_deleted)
    return VAR_1;

  VAR_11 = FUNC_1(VAR_8);
  FUNC_0(FUNC_3(&VAR_10, VAR_11,
                         VAR_5, VAR_8));

  FUNC_0(FUNC_2(VAR_3,
                             VAR_4->revision,
                             VAR_0,
                             VAR_10,
                             VAR_5, VAR_11,
                             VAR_2 ,
                             VAR_9,
                             VAR_8));

  return VAR_1;
}
