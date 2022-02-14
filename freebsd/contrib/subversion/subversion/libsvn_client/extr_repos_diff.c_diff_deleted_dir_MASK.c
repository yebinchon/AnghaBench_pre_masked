
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_5__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_dirent_t ;
typedef int svn_diff_source_t ;
typedef scalar_t__ svn_boolean_t ;
struct edit_baton {TYPE_2__* processor; int revision; int ra_session; int cancel_baton; int * (* cancel_func ) (int ) ;} ;
struct dir_baton {int pdb; struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;
struct TYPE_6__ {int * (* dir_deleted ) (char const*,int *,int *,int ,TYPE_2__*,int *) ;int * (* dir_opened ) (int *,scalar_t__*,scalar_t__*,char const*,int *,int *,int *,int ,TYPE_2__*,int *,int *) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int * VAR_3 ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int *) ;
 int * FUNC_7 (char const*,struct dir_baton*,int *) ;
 struct dir_baton* FUNC_8 (char const*,struct dir_baton*,struct edit_baton*,scalar_t__,int ,int *) ;
 int * FUNC_9 (struct dir_baton*) ;
 int * FUNC_10 (int ) ;
 int * FUNC_11 (int *,scalar_t__*,scalar_t__*,char const*,int *,int *,int *,int ,TYPE_2__*,int *,int *) ;
 int * FUNC_12 (char const*,int *,int *,int ,TYPE_2__*,int *) ;
 int * FUNC_13 (int ,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int * FUNC_17 (int ,int **,int *,int **,char const*,int ,int ,int *) ;
 char* FUNC_18 (char const*,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_19(const char *VAR_6,
                 struct dir_baton *VAR_7,
                 apr_pool_t *VAR_8)
{
  struct edit_baton *VAR_9 = VAR_7->edit_baton;
  struct dir_baton *VAR_10;
  apr_pool_t *VAR_11 = FUNC_15(VAR_8);
  svn_boolean_t VAR_12 = VAR_0;
  svn_boolean_t VAR_13 = VAR_0;
  apr_hash_t *VAR_14 = ((void*)0);
  apr_hash_t *VAR_15 = ((void*)0);
  svn_diff_source_t *VAR_16 = FUNC_13(VAR_9->revision,
                                                           VAR_8);
  VAR_10 = FUNC_8(VAR_6, VAR_7, VAR_7->edit_baton, VAR_0, VAR_2,
                      VAR_8);

  FUNC_1(FUNC_2(VAR_9->revision));

  if (VAR_9->cancel_func)
    FUNC_0(VAR_9->cancel_func(VAR_9->cancel_baton));

  FUNC_0(VAR_9->processor->dir_opened(&VAR_10->pdb, &VAR_12, &VAR_13,
                                    VAR_6,
                                    VAR_16,
                                    ((void*)0) ,
                                    ((void*)0) ,
                                    VAR_7->pdb,
                                    VAR_9->processor,
                                    VAR_8, VAR_11));

  if (!VAR_12 || !VAR_13)
    FUNC_0(FUNC_17(VAR_9->ra_session,
                            VAR_13 ? ((void*)0) : &VAR_14,
                            ((void*)0),
                            VAR_12 ? ((void*)0) : &VAR_15,
                            VAR_6,
                            VAR_9->revision,
                            VAR_1,
                            VAR_8));





  if (! VAR_13)
    {
      apr_hash_index_t *VAR_17;

      for (VAR_17 = FUNC_3(VAR_8, VAR_14); VAR_17;
           VAR_17 = FUNC_4(VAR_17))
        {
          const char *VAR_18;
          const char *VAR_19 = FUNC_5(VAR_17);
          svn_dirent_t *VAR_20 = FUNC_6(VAR_17);

          FUNC_14(VAR_11);

          VAR_18 = FUNC_18(VAR_6, VAR_19, VAR_11);

          if (VAR_20->kind == VAR_5)
            {
              FUNC_0(FUNC_7(VAR_18, VAR_10, VAR_11));
            }
          else if (VAR_20->kind == VAR_4)
            {
              FUNC_0(FUNC_19(VAR_18, VAR_10, VAR_11));
            }
        }
    }

  if (! VAR_12)
    {
      FUNC_0(VAR_9->processor->dir_deleted(VAR_6,
                                         VAR_16,
                                         VAR_15,
                                         VAR_10->pdb,
                                         VAR_9->processor,
                                         VAR_8));
    }

  FUNC_0(FUNC_9(VAR_10));

  FUNC_16(VAR_11);
  return VAR_3;
}
