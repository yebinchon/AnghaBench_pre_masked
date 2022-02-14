
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct file_baton {int pool; void* right_source; void* left_source; int skip; int pfb; int base_revision; } ;
struct edit_baton {TYPE_1__* processor; int target_revision; int revision; } ;
struct dir_baton {int pdb; scalar_t__ skip_children; int pool; struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int (* file_opened ) (int *,int *,char const*,void*,void*,int *,int ,TYPE_1__*,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 struct file_baton* FUNC_1 (char const*,struct dir_baton*,int ,int ) ;
 int FUNC_2 (int *,int *,char const*,void*,void*,int *,int ,TYPE_1__*,int ,int ) ;
 void* FUNC_3 (int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const char *VAR_3,
          void *VAR_4,
          svn_revnum_t VAR_5,
          apr_pool_t *VAR_6,
          void **VAR_7)
{
  struct dir_baton *VAR_8 = VAR_4;
  struct file_baton *VAR_9;
  struct edit_baton *VAR_10 = VAR_8->edit_baton;
  VAR_9 = FUNC_1(VAR_3, VAR_8, VAR_0, VAR_8->pool);
  *VAR_7 = VAR_9;


  if (VAR_8->skip_children)
    {
      VAR_9->skip = VAR_2;
      return VAR_1;
    }

  VAR_9->base_revision = VAR_5;

  VAR_9->left_source = FUNC_3(VAR_10->revision, VAR_9->pool);
  VAR_9->right_source = FUNC_3(VAR_10->target_revision, VAR_9->pool);

  FUNC_0(VAR_10->processor->file_opened(&VAR_9->pfb,
                                     &VAR_9->skip,
                                     VAR_3,
                                     VAR_9->left_source,
                                     VAR_9->right_source,
                                     ((void*)0) ,
                                     VAR_8->pdb,
                                     VAR_10->processor,
                                     VAR_9->pool, VAR_9->pool));

  return VAR_1;
}
