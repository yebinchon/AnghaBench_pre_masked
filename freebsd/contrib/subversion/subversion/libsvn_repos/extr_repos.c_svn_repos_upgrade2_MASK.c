
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int db_path; int path; } ;
typedef TYPE_1__ svn_repos_t ;
struct TYPE_8__ {int action; } ;
typedef TYPE_2__ svn_repos_notify_t ;
typedef int (* svn_repos_notify_func_t ) (void*,TYPE_2__*,int *) ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct fs_upgrade_notify_baton_t {void* notify_baton; int (* notify_func ) (void*,TYPE_2__*,int *) ;} ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_1 (TYPE_1__**,char const*,int ,int ,int ,int *,int *,int *) ;
 char* FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int *,struct fs_upgrade_notify_baton_t*,int *,int *,int *) ;
 int FUNC_4 (int*,char const*,int *) ;
 int FUNC_5 (char const*,int,int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_2__* FUNC_8 (int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;

svn_error_t *
FUNC_9(const char *VAR_8,
                   svn_boolean_t VAR_9,
                   svn_repos_notify_func_t VAR_10,
                   void *VAR_11,
                   apr_pool_t *VAR_12)
{
  svn_repos_t *VAR_13;
  const char *VAR_14;
  int VAR_15;
  apr_pool_t *VAR_16 = FUNC_6(VAR_12);

  struct fs_upgrade_notify_baton_t VAR_17;
  VAR_17.notify_func = VAR_10;
  VAR_17.notify_baton = VAR_11;






  FUNC_0(FUNC_1(&VAR_13, VAR_8, VAR_4, VAR_9, VAR_0, ((void*)0), VAR_16,
                    VAR_16));

  if (VAR_10)
    {


      svn_repos_notify_t *VAR_18 = FUNC_8(
                                    VAR_6, VAR_16);
      VAR_10(VAR_11, VAR_18, VAR_16);

      VAR_18->action = VAR_7;
      VAR_10(VAR_11, VAR_18, VAR_16);
    }





  VAR_14 = FUNC_2(VAR_13->path, VAR_2, VAR_16);
  FUNC_0(FUNC_4(&VAR_15, VAR_14, VAR_16));
  FUNC_0(FUNC_5(VAR_14, VAR_15, VAR_16));


  FUNC_0(FUNC_3(VAR_13->db_path,
                          VAR_10 ? VAR_5 : ((void*)0),
                          &VAR_17, ((void*)0), ((void*)0), VAR_16));


  FUNC_0(FUNC_5(VAR_14, VAR_3,
                                    VAR_16));


  FUNC_7(VAR_16);

  return VAR_1;
}
