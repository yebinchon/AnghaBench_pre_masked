
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int (* svn_wc_status_func4_t ) (void*,char const*,int *,int *) ;
struct TYPE_3__ {int s; } ;
typedef TYPE_1__ svn_wc__internal_status_t ;
typedef int svn_lock_t ;
typedef int svn_io_dirent2_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct walk_status_baton {int check_working_copy; int ignore_text_mods; int db; scalar_t__ repos_locks; } ;
struct svn_wc__db_info_t {int dummy; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__**,int ,char const*,char const*,char const*,char const*,struct svn_wc__db_info_t const*,int const*,int ,int ,int ,int const*,int *,int *) ;
 int FUNC_2 (char const**,char const**,char const**,struct svn_wc__db_info_t const*,char const*,char const*,char const*,int ,char const*,int *,int *) ;
 int FUNC_3 (void*,char const*,int *,int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (char*,char const*,int *) ;
 int * FUNC_6 (scalar_t__,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_7(const struct walk_status_baton *VAR_1,
                      const char *VAR_2,
                      const char *VAR_3,
                      const char *VAR_4,
                      const char *VAR_5,
                      const struct svn_wc__db_info_t *VAR_6,
                      const svn_io_dirent2_t *VAR_7,
                      svn_boolean_t VAR_8,
                      svn_wc_status_func4_t VAR_9,
                      void *VAR_10,
                      apr_pool_t *VAR_11)
{
  svn_wc__internal_status_t *VAR_12;
  const svn_lock_t *VAR_13 = ((void*)0);


  if (VAR_1->repos_locks)
    {
      const char *VAR_14, *VAR_15, *VAR_16;

      FUNC_0(FUNC_2(&VAR_14, &VAR_15,
                                         &VAR_16,
                                         VAR_6, VAR_4,
                                         VAR_3,
                                         VAR_5,
                                         VAR_1->db, VAR_2,
                                         VAR_11, VAR_11));
      if (VAR_14)
        {


          VAR_13 = FUNC_6(VAR_1->repos_locks,
                                     FUNC_5("/", VAR_14,
                                                      VAR_11));
        }
    }

  FUNC_0(FUNC_1(&VAR_12, VAR_1->db, VAR_2,
                          VAR_3, VAR_4,
                          VAR_5,
                          VAR_6, VAR_7, VAR_8,
                          VAR_1->ignore_text_mods, VAR_1->check_working_copy,
                          VAR_13, VAR_11, VAR_11));

  if (VAR_12 && VAR_9)
    return FUNC_4((*VAR_9)(VAR_10, VAR_2,
                                          &VAR_12->s,
                                          VAR_11));

  return VAR_0;
}
