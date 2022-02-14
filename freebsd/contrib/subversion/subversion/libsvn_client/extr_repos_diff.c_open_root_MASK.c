
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct edit_baton {TYPE_1__* processor; int target_revision; int revision; int pool; } ;
struct dir_baton {int pool; void* right_source; void* left_source; int skip_children; int skip; int pdb; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int (* dir_opened ) (int *,int *,int *,char*,void*,void*,int *,int *,TYPE_1__*,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 struct dir_baton* FUNC_1 (char*,int *,struct edit_baton*,int ,int ,int ) ;
 int FUNC_2 (int *,int *,int *,char*,void*,void*,int *,int *,TYPE_1__*,int ,int ) ;
 void* FUNC_3 (int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_2,
          svn_revnum_t VAR_3,
          apr_pool_t *VAR_4,
          void **VAR_5)
{
  struct edit_baton *VAR_6 = VAR_2;
  struct dir_baton *VAR_7 = FUNC_1("", ((void*)0), VAR_6, VAR_0, VAR_3,
                                        VAR_6->pool);

  VAR_7->left_source = FUNC_3(VAR_6->revision, VAR_7->pool);
  VAR_7->right_source = FUNC_3(VAR_6->target_revision, VAR_7->pool);

  FUNC_0(VAR_6->processor->dir_opened(&VAR_7->pdb,
                                    &VAR_7->skip,
                                    &VAR_7->skip_children,
                                    "",
                                    VAR_7->left_source,
                                    VAR_7->right_source,
                                    ((void*)0),
                                    ((void*)0),
                                    VAR_6->processor,
                                    VAR_7->pool,
                                    VAR_7->pool ));

  *VAR_5 = VAR_7;
  return VAR_1;
}
