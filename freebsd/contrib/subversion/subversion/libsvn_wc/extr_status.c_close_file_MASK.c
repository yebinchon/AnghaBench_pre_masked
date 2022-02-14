
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_lock_t ;
typedef int svn_error_t ;
struct file_baton {int local_abspath; TYPE_2__* edit_baton; scalar_t__ prop_changed; scalar_t__ text_changed; int name; int dir_baton; scalar_t__ added; } ;
typedef enum svn_wc_status_kind { ____Placeholder_svn_wc_status_kind } svn_wc_status_kind ;
typedef int apr_pool_t ;
struct TYPE_3__ {int check_working_copy; scalar_t__ repos_locks; } ;
struct TYPE_4__ {TYPE_1__ wb; int db; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 char* FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,char const*,int *) ;
 int * FUNC_2 (scalar_t__,int ) ;
 char* FUNC_3 (char const*,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_4 (struct file_baton*,int *,int ,int ,int ,int ,int,int,int,int ,int const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(void *VAR_5,
           const char *VAR_6,
           apr_pool_t *VAR_7)
{
  struct file_baton *VAR_8 = VAR_5;
  enum svn_wc_status_kind VAR_9;
  enum svn_wc_status_kind VAR_10;
  enum svn_wc_status_kind VAR_11;
  const svn_lock_t *VAR_12 = ((void*)0);


  if (! (VAR_8->added || VAR_8->prop_changed || VAR_8->text_changed))
    return VAR_2;


  if (VAR_8->added)
    {
      VAR_9 = VAR_3;
      VAR_10 = VAR_8->text_changed ? VAR_4
                                           : 0 ;
      VAR_11 = VAR_8->prop_changed ? VAR_4
                                           : 0 ;

      if (VAR_8->edit_baton->wb.repos_locks)
        {
          const char *VAR_13 = FUNC_0(VAR_8->dir_baton,
                                                                 VAR_7);



          const char *VAR_14 = FUNC_3(VAR_13,
                                                       VAR_8->name, VAR_7);

          VAR_12 = FUNC_2(VAR_8->edit_baton->wb.repos_locks,
                                     FUNC_1("/", VAR_14,
                                                      VAR_7));
        }
    }
  else
    {
      VAR_9 = (VAR_8->text_changed || VAR_8->prop_changed)
                                 ? VAR_4
                                 : 0 ;
      VAR_10 = VAR_8->text_changed ? VAR_4
                                           : 0 ;
      VAR_11 = VAR_8->prop_changed ? VAR_4
                                           : 0 ;
    }

  return FUNC_4(VAR_8, ((void*)0), VAR_0, VAR_8->edit_baton->db,
                          VAR_8->edit_baton->wb.check_working_copy,
                          VAR_8->local_abspath, VAR_9,
                          VAR_10, VAR_11,
                          VAR_1, VAR_12, VAR_7);
}
