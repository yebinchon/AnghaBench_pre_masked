
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct edit_baton {TYPE_2__* processor; int ra_session; int * empty_hash; } ;
struct dir_baton {int * pool; int pdb; int right_source; int left_source; int path; int skip; TYPE_1__* propchanges; scalar_t__ added; int base_revision; scalar_t__ has_propchange; struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_8__ {int (* dir_closed ) (int ,int ,int ,int ,TYPE_2__*,int *) ;int (* dir_changed ) (int ,int ,int ,int *,int *,TYPE_1__*,int ,TYPE_2__*,int *) ;int (* dir_added ) (int ,int *,int ,int *,int *,int ,TYPE_2__*,int *) ;} ;
struct TYPE_7__ {scalar_t__ nelts; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dir_baton*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int ,int *,int ,int *,int *,int ,TYPE_2__*,int *) ;
 int FUNC_4 (int ,int ,int ,int *,int *,TYPE_1__*,int ,TYPE_2__*,int *) ;
 int FUNC_5 (int ,int ,int ,int ,TYPE_2__*,int *) ;
 int * FUNC_6 (int *,TYPE_1__*,int *) ;
 int FUNC_7 (int ,int *,int *,int **,int ,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(void *VAR_3,
                apr_pool_t *VAR_4)
{
  struct dir_baton *VAR_5 = VAR_3;
  struct edit_baton *VAR_6 = VAR_5->edit_baton;
  apr_pool_t *VAR_7;
  apr_hash_t *VAR_8;
  svn_boolean_t VAR_9 = VAR_0;

  VAR_7 = VAR_5->pool;

  if ((VAR_5->has_propchange || VAR_5->added) && !VAR_5->skip)
    {
      if (VAR_5->added)
        {
          VAR_8 = VAR_6->empty_hash;
        }
      else
        {
          FUNC_0(FUNC_7(VAR_6->ra_session, ((void*)0), ((void*)0), &VAR_8,
                                  VAR_5->path, VAR_5->base_revision, 0, VAR_7));
        }

      if (VAR_5->propchanges->nelts > 0)
        {
          FUNC_2(VAR_8, VAR_5->propchanges);
        }

      if (VAR_5->propchanges->nelts > 0 || VAR_5->added)
        {
          apr_hash_t *VAR_10;

          VAR_10 = FUNC_6(VAR_8, VAR_5->propchanges,
                                        VAR_7);

          if (VAR_5->added)
            {
              FUNC_0(VAR_6->processor->dir_added(VAR_5->path,
                                           ((void*)0) ,
                                           VAR_5->right_source,
                                           ((void*)0) ,
                                           VAR_10,
                                           VAR_5->pdb,
                                           VAR_6->processor,
                                           VAR_5->pool));
            }
          else
            {
              FUNC_0(VAR_6->processor->dir_changed(VAR_5->path,
                                                 VAR_5->left_source,
                                                 VAR_5->right_source,
                                                 VAR_8,
                                                 VAR_10,
                                                 VAR_5->propchanges,
                                                 VAR_5->pdb,
                                                 VAR_6->processor,
                                                 VAR_5->pool));
            }

          VAR_9 = VAR_2;
        }
    }

  if (! VAR_5->skip && !VAR_9)
    {
      FUNC_0(VAR_6->processor->dir_closed(VAR_5->path,
                                        VAR_5->left_source,
                                        VAR_5->right_source,
                                        VAR_5->pdb,
                                        VAR_6->processor,
                                        VAR_5->pool));
    }
  FUNC_0(FUNC_1(VAR_5));

  return VAR_1;
}
