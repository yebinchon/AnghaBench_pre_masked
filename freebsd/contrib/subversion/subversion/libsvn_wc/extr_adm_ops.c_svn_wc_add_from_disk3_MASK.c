
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int mime_type; int kind; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int (* svn_wc_notify_func2_t ) (void*,TYPE_1__*,int *) ;
struct TYPE_9__ {int db; } ;
typedef TYPE_3__ svn_wc_context_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char const*,int ,int const*,int *) ;
 int FUNC_2 (int *,int *,int *,int ,char const*,int *,int ,int *) ;
 int FUNC_3 (int *,int *,int ,char const*,int *,int *) ;
 int FUNC_4 (void*,TYPE_1__*,int *) ;
 int FUNC_5 (int const*,int ) ;
 int FUNC_6 (int **,char const*,int ,int const*,int ,int *,int *) ;
 TYPE_1__* FUNC_7 (char const*,int ,int *) ;
 int VAR_3 ;

svn_error_t *
FUNC_8(svn_wc_context_t *VAR_4,
                      const char *VAR_5,
                      const apr_hash_t *VAR_6,
                      svn_boolean_t VAR_7,
                      svn_wc_notify_func2_t VAR_8,
                      void *VAR_9,
                      apr_pool_t *VAR_10)
{
  svn_node_kind_t VAR_11;

  FUNC_0(FUNC_2(&VAR_11, ((void*)0), ((void*)0), VAR_4->db, VAR_5,
                             ((void*)0), VAR_0, VAR_10));
  FUNC_0(FUNC_3(((void*)0), ((void*)0), VAR_4->db, VAR_5,
                                  VAR_10, VAR_10));


  if (VAR_6)
    {
      apr_hash_t *VAR_12;

      FUNC_0(FUNC_6(
                &VAR_12,
                VAR_5, VAR_11, VAR_6, VAR_7,
                VAR_10, VAR_10));
      VAR_6 = VAR_12;
    }


  FUNC_0(FUNC_1(VAR_4->db, VAR_5, VAR_11, VAR_6,
                        VAR_10));


  if (VAR_8 != ((void*)0))
    {
      svn_wc_notify_t *VAR_13 = FUNC_7(VAR_5,
                                                     VAR_3,
                                                     VAR_10);
      VAR_13->kind = VAR_11;
      VAR_13->mime_type = FUNC_5(VAR_6, VAR_2);
      (*VAR_8)(VAR_9, VAR_13, VAR_10);
    }

  return VAR_1;
}
