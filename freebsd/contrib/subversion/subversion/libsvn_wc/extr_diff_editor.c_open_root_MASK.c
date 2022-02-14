
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct edit_baton_t {char* target; TYPE_1__* processor; int revnum; int depth; void* root_opened; } ;
struct dir_baton_t {void* skip; int pool; void* right_src; void* left_src; int skip_children; int pdb; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int (* dir_opened ) (int *,void**,int *,char*,void*,void*,int *,int *,TYPE_1__*,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 void* VAR_3 ;
 struct dir_baton_t* FUNC_1 (char*,int *,struct edit_baton_t*,int ,int ,int *) ;
 int FUNC_2 (int *,void**,int *,char*,void*,void*,int *,int *,TYPE_1__*,int ,int ) ;
 void* FUNC_3 (int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_4,
          svn_revnum_t VAR_5,
          apr_pool_t *VAR_6,
          void **VAR_7)
{
  struct edit_baton_t *VAR_8 = VAR_4;
  struct dir_baton_t *VAR_9;

  VAR_8->root_opened = VAR_3;
  VAR_9 = FUNC_1("", ((void*)0), VAR_8, VAR_0, VAR_8->depth, VAR_6);
  *VAR_7 = VAR_9;

  if (VAR_8->target[0] == '\0')
    {
      VAR_9->left_src = FUNC_3(VAR_8->revnum, VAR_9->pool);
      VAR_9->right_src = FUNC_3(VAR_1, VAR_9->pool);

      FUNC_0(VAR_8->processor->dir_opened(&VAR_9->pdb, &VAR_9->skip,
                                        &VAR_9->skip_children,
                                        "",
                                        VAR_9->left_src,
                                        VAR_9->right_src,
                                        ((void*)0) ,
                                        ((void*)0) ,
                                        VAR_8->processor,
                                        VAR_9->pool, VAR_9->pool));
    }
  else
    VAR_9->skip = VAR_3;

  return VAR_2;
}
