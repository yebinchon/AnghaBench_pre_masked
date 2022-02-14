
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_6__ {int revision; } ;
typedef TYPE_1__ svn_diff_source_t ;
struct svn_diff_tree_processor_t {TYPE_2__* baton; } ;
struct TYPE_7__ {int show_copies_as_adds; scalar_t__ no_diff_added; } ;
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
 int * FUNC_3 (int ) ;
 int FUNC_4 (int **,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const char *VAR_3,
               const svn_diff_source_t *VAR_4,
               const svn_diff_source_t *VAR_5,
                         apr_hash_t *VAR_6,
                         apr_hash_t *VAR_7,
               void *VAR_8,
               const struct svn_diff_tree_processor_t *VAR_9,
               apr_pool_t *VAR_10)
{
  diff_writer_info_t *VAR_11 = VAR_9->baton;
  apr_hash_t *VAR_12;
  apr_array_header_t *VAR_13;

  if (VAR_11->no_diff_added)
    return VAR_1;

  if (VAR_4 && !VAR_11->show_copies_as_adds)
    {
      VAR_12 = VAR_6 ? VAR_6
                                  : FUNC_1(VAR_10);
    }
  else
    {
      VAR_12 = FUNC_1(VAR_10);
      VAR_4 = ((void*)0);
    }

  FUNC_0(FUNC_4(&VAR_13, VAR_7, VAR_12,
                         VAR_10));

  return FUNC_3(FUNC_2(VAR_3,
                                            VAR_4 ? VAR_4->revision
                                                            : VAR_0,
                                            VAR_5->revision,
                                            VAR_13,
                                            VAR_12, VAR_7,
                                            VAR_2 ,
                                            VAR_11,
                                            VAR_10));
}
