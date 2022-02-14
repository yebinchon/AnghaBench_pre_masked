
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int db_path; } ;
typedef TYPE_1__ svn_repos_t ;
struct TYPE_8__ {int action; } ;
typedef TYPE_2__ svn_repos_notify_t ;
typedef int (* svn_repos_notify_func_t ) (void*,TYPE_2__*,int *) ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__**,char const*,int ,int ,int ,int *,int *,int *) ;
 int FUNC_2 (int ,int ,void*,int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_2__* FUNC_5 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;

svn_error_t *
FUNC_6(const char *VAR_5,
                   svn_boolean_t VAR_6,
                   svn_repos_notify_func_t VAR_7,
                   void *VAR_8,
                   svn_cancel_func_t VAR_9,
                   void * VAR_10,
                   apr_pool_t *VAR_11)
{
  svn_repos_t *VAR_12;
  apr_pool_t *VAR_13 = FUNC_3(VAR_11);






  FUNC_0(FUNC_1(&VAR_12, VAR_5, VAR_2, VAR_6,
                    VAR_0,
                    ((void*)0),
                    VAR_13, VAR_13));

  if (VAR_7)
    {


      svn_repos_notify_t *VAR_14 = FUNC_5(
                                    VAR_3, VAR_13);
      VAR_7(VAR_8, VAR_14, VAR_13);

      VAR_14->action = VAR_4;
      VAR_7(VAR_8, VAR_14, VAR_13);
    }


  FUNC_0(FUNC_2(VAR_12->db_path, VAR_9, VAR_10, VAR_13));


  FUNC_4(VAR_13);

  return VAR_1;
}
