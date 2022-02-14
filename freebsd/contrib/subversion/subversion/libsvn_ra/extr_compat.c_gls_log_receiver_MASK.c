
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_3__ {int revision; int changed_paths2; } ;
typedef TYPE_1__ svn_log_entry_t ;
typedef int svn_error_t ;
struct gls_log_receiver_baton {char* last_path; int range_end; int pool; int receiver_baton; int receiver; int start_rev; scalar_t__ done; int kind; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_2 (int ,char const*) ;
 int * FUNC_3 (char const*,int ,int,int,int ,int ,int *) ;
 int * FUNC_4 (char const**,int *,int*,int ,char const*,int ,int,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(void *VAR_2,
                 svn_log_entry_t *VAR_3,
                 apr_pool_t *VAR_4)
{
  struct gls_log_receiver_baton *VAR_5 = VAR_2;
  const char *VAR_6 = VAR_5->last_path;
  const char *VAR_7;
  svn_revnum_t VAR_8;


  if (VAR_5->done)
    return VAR_0;




  FUNC_0(FUNC_4(&VAR_7, ((void*)0), &VAR_8,
                        VAR_3->changed_paths2, VAR_6,
                        VAR_5->kind, VAR_3->revision, VAR_4));



  if (! VAR_7)
    {
      VAR_5->done = VAR_1;
      return FUNC_3(VAR_6, VAR_5->start_rev,
                                         VAR_3->revision, VAR_5->range_end,
                                         VAR_5->receiver, VAR_5->receiver_baton,
                                         VAR_4);
    }


  if (FUNC_1(VAR_8))
    {


      FUNC_0(FUNC_3(VAR_6, VAR_5->start_rev,
                                          VAR_3->revision, VAR_5->range_end,
                                          VAR_5->receiver, VAR_5->receiver_baton,
                                          VAR_4));
      VAR_5->range_end = VAR_3->revision - 1;


      if (VAR_3->revision - VAR_8 > 1)
        {
          FUNC_0(FUNC_3(((void*)0), VAR_5->start_rev,
                                              VAR_8 + 1, VAR_5->range_end,
                                              VAR_5->receiver,
                                              VAR_5->receiver_baton, VAR_4));
          VAR_5->range_end = VAR_8;
        }


      VAR_5->last_path = FUNC_2(VAR_5->pool, VAR_7);
    }

  return VAR_0;
}
