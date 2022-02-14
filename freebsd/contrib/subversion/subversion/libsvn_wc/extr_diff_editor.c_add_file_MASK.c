
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct svn_wc__db_info_t {scalar_t__ kind; scalar_t__ status; } ;
struct file_baton_t {int pool; void* right_src; void* left_src; int relpath; void* skip; int pfb; int name; void* ignoring_ancestry; void* repos_only; } ;
struct edit_baton_t {TYPE_1__* processor; int revnum; int ignore_ancestry; } ;
struct dir_baton_t {int pdb; int pool; int compared; int local_info; scalar_t__ repos_only; scalar_t__ skip_children; struct edit_baton_t* eb; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int (* file_opened ) (int *,void**,int ,void*,void*,int *,int ,TYPE_1__*,int ,int ) ;} ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 void* VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct dir_baton_t*,int *) ;
 struct file_baton_t* FUNC_4 (char const*,void*,struct dir_baton_t*,int *) ;
 int FUNC_5 (int *,void**,int ,void*,void*,int *,int ,TYPE_1__*,int ,int ) ;
 void* FUNC_6 (int ,int ) ;
 struct svn_wc__db_info_t* FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_9(const char *VAR_5,
         void *VAR_6,
         const char *VAR_7,
         svn_revnum_t VAR_8,
         apr_pool_t *VAR_9,
         void **VAR_10)
{
  struct dir_baton_t *VAR_11 = VAR_6;
  struct edit_baton_t *VAR_12 = VAR_11->eb;
  struct file_baton_t *VAR_13;

  VAR_13 = FUNC_4(VAR_5, VAR_2, VAR_11, VAR_9);
  *VAR_10 = VAR_13;

  if (VAR_11->skip_children)
    {
      VAR_13->skip = VAR_2;
      return VAR_1;
    }
  else if (VAR_11->repos_only || !VAR_12->ignore_ancestry)
    VAR_13->repos_only = VAR_2;
  else
    {
      struct svn_wc__db_info_t *VAR_14;
      FUNC_1(FUNC_3(VAR_11, VAR_9));

      VAR_14 = FUNC_7(VAR_11->local_info, VAR_13->name);

      if (!VAR_14 || VAR_14->kind != VAR_3 || FUNC_0(VAR_14->status))
        VAR_13->repos_only = VAR_2;

      if (!VAR_13->repos_only && VAR_14->status != VAR_4)
        VAR_13->repos_only = VAR_2;

      if (!VAR_13->repos_only)
        {


          VAR_13->right_src = FUNC_6(VAR_0, VAR_13->pool);
          VAR_13->ignoring_ancestry = VAR_2;

          FUNC_8(VAR_11->compared, FUNC_2(VAR_11->pool, VAR_13->name), "");
        }
    }

  VAR_13->left_src = FUNC_6(VAR_12->revnum, VAR_13->pool);

  FUNC_1(VAR_12->processor->file_opened(&VAR_13->pfb, &VAR_13->skip,
                                     VAR_13->relpath,
                                     VAR_13->left_src,
                                     VAR_13->right_src,
                                     ((void*)0) ,
                                     VAR_11->pdb,
                                     VAR_12->processor,
                                     VAR_13->pool, VAR_13->pool));

  return VAR_1;
}
