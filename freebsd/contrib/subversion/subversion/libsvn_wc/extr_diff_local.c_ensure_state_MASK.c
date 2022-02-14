
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
struct TYPE_11__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct node_state_t {char const* local_abspath; int * pool; int * baton; struct node_state_t* parent; void* right_src; void* left_src; void* relpath; void* skip_children; void* skip; } ;
struct diff_baton {TYPE_7__* processor; int db; struct node_state_t* cur; int anchor_abspath; int * pool; } ;
typedef int apr_pool_t ;
struct TYPE_12__ {TYPE_1__* (* dir_opened ) (int **,void**,void**,void*,void*,void*,int *,int *,TYPE_7__*,int *,int *) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 void* VAR_4 ;
 struct node_state_t* FUNC_1 (int *,int) ;
 char const* FUNC_2 (int *,char const*) ;
 TYPE_1__* FUNC_3 (int **,void**,void**,void*,void*,void*,int *,int *,TYPE_7__*,int *,int *) ;
 void* FUNC_4 (scalar_t__,int *) ;
 char* FUNC_5 (char const*,int *) ;
 scalar_t__ FUNC_6 (char const*,char const*,int *) ;
 void* FUNC_7 (int ,char const*) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (TYPE_1__*) ;
 int * FUNC_10 (int *) ;
 TYPE_1__* FUNC_11 (int *,int *,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int ,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(struct diff_baton *VAR_5,
             const char *VAR_6,
             svn_boolean_t VAR_7,
             apr_pool_t *VAR_8)
{
  struct node_state_t *VAR_9;
  apr_pool_t *VAR_10;
  if (!VAR_5->cur)
    {
      const char *VAR_11;

      VAR_11 = FUNC_7(VAR_5->anchor_abspath, VAR_6);
      if (! VAR_11)
        return VAR_3;




      if (*VAR_11)
        FUNC_0(FUNC_12(VAR_5,
                             FUNC_5(VAR_6, VAR_8),
                             VAR_0,
                             VAR_8));
    }
  else if (FUNC_6(VAR_5->cur->local_abspath, VAR_6, ((void*)0)))
    FUNC_0(FUNC_12(VAR_5, FUNC_5(VAR_6, VAR_8),
                         VAR_0,
                         VAR_8));
  else
    return VAR_3;

  if (VAR_5->cur && VAR_5->cur->skip_children)
    return VAR_3;

  VAR_10 = FUNC_10(VAR_5->cur ? VAR_5->cur->pool : VAR_5->pool);
  VAR_9 = FUNC_1(VAR_10, sizeof(*VAR_9));

  VAR_9->pool = VAR_10;
  VAR_9->local_abspath = FUNC_2(VAR_10, VAR_6);
  VAR_9->relpath = FUNC_7(VAR_5->anchor_abspath, VAR_9->local_abspath);
  VAR_9->parent = VAR_5->cur;
  VAR_5->cur = VAR_9;

  if (VAR_7)
    {
      VAR_9->skip = VAR_4;
      VAR_9->skip_children = VAR_4;
      return VAR_3;
    }

  {
    svn_revnum_t VAR_12;
    svn_error_t *VAR_13;

    VAR_13 = FUNC_11(((void*)0), ((void*)0), &VAR_12, ((void*)0), ((void*)0), ((void*)0),
                                   ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                   ((void*)0), ((void*)0), ((void*)0),
                                   VAR_5->db, VAR_6,
                                   VAR_8, VAR_8);

    if (VAR_13)
      {
        if (VAR_13->apr_err != VAR_1)
          return FUNC_9(VAR_13);
        FUNC_8(VAR_13);

        VAR_12 = 0;
      }
    VAR_9->left_src = FUNC_4(VAR_12, VAR_9->pool);
    VAR_9->right_src = FUNC_4(VAR_2, VAR_9->pool);

    FUNC_0(VAR_5->processor->dir_opened(&VAR_9->baton, &VAR_9->skip,
                                      &VAR_9->skip_children,
                                      VAR_9->relpath,
                                      VAR_9->left_src,
                                      VAR_9->right_src,
                                      ((void*)0) ,
                                      VAR_9->parent ? VAR_9->parent->baton : ((void*)0),
                                      VAR_5->processor,
                                      VAR_9->pool, VAR_8));
  }

  return VAR_3;
}
