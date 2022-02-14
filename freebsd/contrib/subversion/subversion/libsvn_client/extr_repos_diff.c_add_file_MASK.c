
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct file_baton {int pool; int right_source; int skip; int pfb; int pristine_props; } ;
struct edit_baton {TYPE_1__* processor; int target_revision; int empty_hash; } ;
struct dir_baton {int pdb; struct edit_baton* edit_baton; scalar_t__ skip_children; int pool; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int (* file_opened ) (int *,int *,char const*,int *,int ,int *,int ,TYPE_1__*,int ,int ) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 struct file_baton* FUNC_1 (char const*,struct dir_baton*,int ,int ) ;
 int FUNC_2 (int *,int *,char const*,int *,int ,int *,int ,TYPE_1__*,int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const char *VAR_2,
         void *VAR_3,
         const char *VAR_4,
         svn_revnum_t VAR_5,
         apr_pool_t *VAR_6,
         void **VAR_7)
{
  struct dir_baton *VAR_8 = VAR_3;
  struct edit_baton *VAR_9 = VAR_8->edit_baton;
  struct file_baton *VAR_10;



  VAR_10 = FUNC_1(VAR_2, VAR_8, VAR_1, VAR_8->pool);
  *VAR_7 = VAR_10;


  if (VAR_8->skip_children)
    {
      VAR_10->skip = VAR_1;
      return VAR_0;
    }

  VAR_10->pristine_props = VAR_8->edit_baton->empty_hash;

  VAR_10->right_source = FUNC_3(VAR_9->target_revision, VAR_10->pool);

  FUNC_0(VAR_9->processor->file_opened(&VAR_10->pfb,
                                     &VAR_10->skip,
                                     VAR_2,
                                     ((void*)0),
                                     VAR_10->right_source,
                                     ((void*)0) ,
                                     VAR_8->pdb,
                                     VAR_9->processor,
                                     VAR_10->pool, VAR_10->pool));

  return VAR_0;
}
