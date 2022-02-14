
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int (* svn_repos_authz_func_t ) (int *,int *,int ,void*,int *) ;
typedef int svn_fs_t ;
typedef int svn_fs_root_t ;
typedef int svn_fs_history_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct path_info {int * newpool; int * oldpool; int * hist; void* done; TYPE_1__* path; int history_rev; scalar_t__ first_time; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (char const**,int *,int *,int *) ;
 int FUNC_2 (int **,int *,int,int *,int *) ;
 int FUNC_3 (int **,int *,int ,int *,int *) ;
 int FUNC_4 (int **,int *,int ,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_9(struct path_info *VAR_3,
            svn_fs_t *VAR_4,
            svn_boolean_t VAR_5,
            svn_repos_authz_func_t VAR_6,
            void *VAR_7,
            svn_revnum_t VAR_8,
            apr_pool_t *VAR_9,
            apr_pool_t *VAR_10)
{
  svn_fs_root_t *VAR_11 = ((void*)0);
  svn_fs_history_t *VAR_12;
  apr_pool_t *VAR_13;
  const char *VAR_14;

  if (VAR_3->hist)
    {
      VAR_13 = VAR_3->newpool;

      FUNC_0(FUNC_2(&VAR_3->hist, VAR_3->hist, ! VAR_5,
                                   VAR_13, VAR_10));

      VAR_12 = VAR_3->hist;
    }
  else
    {
      VAR_13 = FUNC_6(VAR_9);


      FUNC_0(FUNC_4(&VAR_11, VAR_4, VAR_3->history_rev,
                                   VAR_13));

      FUNC_0(FUNC_3(&VAR_12, VAR_11, VAR_3->path->data,
                                   VAR_13, VAR_10));

      FUNC_0(FUNC_2(&VAR_12, VAR_12, ! VAR_5, VAR_13,
                                   VAR_10));

      if (VAR_3->first_time)
        VAR_3->first_time = VAR_0;
      else
        FUNC_0(FUNC_2(&VAR_12, VAR_12, ! VAR_5, VAR_13,
                                     VAR_10));
    }

  if (! VAR_12)
    {
      FUNC_7(VAR_13);
      if (VAR_3->oldpool)
        FUNC_7(VAR_3->oldpool);
      VAR_3->done = VAR_2;
      return VAR_1;
    }


  FUNC_0(FUNC_1(&VAR_14, &VAR_3->history_rev,
                                  VAR_12, VAR_13));

  FUNC_8(VAR_3->path, VAR_14);



  if (VAR_3->history_rev < VAR_8)
    {
      FUNC_7(VAR_13);
      if (VAR_3->oldpool)
        FUNC_7(VAR_3->oldpool);
      VAR_3->done = VAR_2;
      return VAR_1;
    }


  if (VAR_6)
    {
      svn_boolean_t VAR_15;
      FUNC_0(FUNC_4(&VAR_11, VAR_4,
                                   VAR_3->history_rev,
                                   VAR_10));
      FUNC_0(VAR_6(&VAR_15, VAR_11,
                              VAR_3->path->data,
                              VAR_7,
                              VAR_10));
      if (! VAR_15)
        VAR_3->done = VAR_2;
    }

  if (! VAR_3->hist)
    {
      FUNC_7(VAR_13);
    }
  else
    {
      apr_pool_t *VAR_16 = VAR_3->oldpool;
      VAR_3->oldpool = VAR_3->newpool;
      FUNC_5(VAR_16);
      VAR_3->newpool = VAR_16;
    }

  return VAR_1;
}
