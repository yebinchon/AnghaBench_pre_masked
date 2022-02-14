
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
struct TYPE_6__ {int pool; int wc_queues; } ;
typedef TYPE_2__ svn_wc_committed_queue_t ;
typedef int svn_wc__db_commit_queue_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ,char const*) ;
 int FUNC_3 (char const*) ;
 int * FUNC_4 (int ) ;
 int * FUNC_5 (int ,char const*) ;
 int FUNC_6 (int ,char const*,int *) ;
 int FUNC_7 (int *,char const*,int ,int ,int ,int ,int const*,int ,int ,int *) ;
 int FUNC_8 (int **,int ,char const*,int ,int *) ;
 int FUNC_9 (char const**,int ,char const*,int *,int *) ;
 int FUNC_10 (int const*,int ) ;

svn_error_t *
FUNC_11(svn_wc_committed_queue_t *VAR_0,
                        svn_wc_context_t *VAR_1,
                        const char *VAR_2,
                        svn_boolean_t VAR_3,
                        svn_boolean_t VAR_4,
                        const apr_array_header_t *VAR_5,
                        svn_boolean_t VAR_6,
                        svn_boolean_t VAR_7,
                        const svn_checksum_t *VAR_8,
                        apr_pool_t *VAR_9)
{
  const char *VAR_10;
  svn_wc__db_commit_queue_t *VAR_11;

  FUNC_1(FUNC_3(VAR_2));





  FUNC_0(FUNC_9(&VAR_10,
                                VAR_1->db, VAR_2,
                                VAR_9, VAR_9));

  VAR_11 = FUNC_5(VAR_0->wc_queues, VAR_10);
  if (! VAR_11)
    {
      VAR_10 = FUNC_2(VAR_0->pool, VAR_10);

      FUNC_0(FUNC_8(&VAR_11,
                                             VAR_1->db, VAR_10,
                                             VAR_0->pool, VAR_9));

      FUNC_6(VAR_0->wc_queues, VAR_10, VAR_11);
    }

  return FUNC_4(
          FUNC_7(VAR_11, VAR_2, VAR_3,
                                      VAR_4, VAR_6,
                                      VAR_7, VAR_8,
                                      FUNC_10(VAR_5,
                                                                 VAR_0->pool),
                                      VAR_0->pool, VAR_9));
}
