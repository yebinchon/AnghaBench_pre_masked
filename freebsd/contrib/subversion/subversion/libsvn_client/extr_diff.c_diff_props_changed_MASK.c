
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_9__ {int session_relpath; int orig_path_2; int orig_path_1; int anchor; } ;
struct TYPE_10__ {int wc_ctx; int cancel_baton; int cancel_func; TYPE_1__ ddi; int use_git_diff_format; int relative_to_dir; int outstream; int header_encoding; scalar_t__ ignore_properties; } ;
typedef TYPE_2__ diff_writer_info_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_11__ {scalar_t__ nelts; } ;
typedef TYPE_3__ apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_3__*,int *,int *,char const*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_2 (TYPE_3__ const*,int *,int *,TYPE_3__**,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(const char *VAR_1,
                   svn_revnum_t VAR_2,
                   svn_revnum_t VAR_3,
                   const apr_array_header_t *VAR_4,
                   apr_hash_t *VAR_5,
                   apr_hash_t *VAR_6,
                   svn_boolean_t VAR_7,
                   diff_writer_info_t *VAR_8,
                   apr_pool_t *VAR_9)
{
  apr_array_header_t *VAR_10;


  if (VAR_8->ignore_properties)
    return VAR_0;

  FUNC_0(FUNC_2(VAR_4, ((void*)0), ((void*)0), &VAR_10,
                               VAR_9));

  if (VAR_10->nelts > 0)
    {



      FUNC_0(FUNC_1(VAR_10, VAR_5, VAR_6,
                                 VAR_1,
                                 VAR_8->ddi.anchor,
                                 VAR_8->ddi.orig_path_1,
                                 VAR_8->ddi.orig_path_2,
                                 VAR_2,
                                 VAR_3,
                                 VAR_8->header_encoding,
                                 VAR_8->outstream,
                                 VAR_8->relative_to_dir,
                                 VAR_7,
                                 VAR_8->use_git_diff_format,
                                 VAR_8->ddi.session_relpath,
                                 VAR_8->cancel_func,
                                 VAR_8->cancel_baton,
                                 VAR_8->wc_ctx,
                                 VAR_9));
    }

  return VAR_0;
}
