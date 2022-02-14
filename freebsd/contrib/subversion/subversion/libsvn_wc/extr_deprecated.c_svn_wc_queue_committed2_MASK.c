
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_wc_committed_queue_t ;
typedef int svn_wc_adm_access_t ;
struct TYPE_15__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_1 (char const**,char const*,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 TYPE_2__* FUNC_5 (TYPE_1__**,int *,int ,int *) ;
 TYPE_2__* FUNC_6 (int const**,int ,char const*,int const*,int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_2__* FUNC_9 (int *,TYPE_1__*,char const*,int ,int const*,int ,int ,int const*,int *) ;

svn_error_t *
FUNC_10(svn_wc_committed_queue_t *VAR_1,
                        const char *VAR_2,
                        svn_wc_adm_access_t *VAR_3,
                        svn_boolean_t VAR_4,
                        const apr_array_header_t *VAR_5,
                        svn_boolean_t VAR_6,
                        svn_boolean_t VAR_7,
                        const svn_checksum_t *VAR_8,
                        apr_pool_t *VAR_9)
{
  svn_wc_context_t *VAR_10;
  const char *VAR_11;
  const svn_checksum_t *VAR_12 = ((void*)0);

  FUNC_0(FUNC_5(&VAR_10, ((void*)0),
                                         FUNC_4(VAR_3),
                                         VAR_9));
  FUNC_0(FUNC_1(&VAR_11, VAR_2, VAR_9));

  if (VAR_8 != ((void*)0))
    {
      svn_error_t *VAR_13;
      VAR_13 = FUNC_6(&VAR_12, VAR_10->db,
                                         VAR_11, VAR_8,
                                         FUNC_7(VAR_1),
                                         VAR_9);


      if (VAR_13 && VAR_13->apr_err == VAR_0)
        {
          FUNC_2(VAR_13);
          VAR_12 = ((void*)0);
        }
      else
        FUNC_0(VAR_13);
    }

  FUNC_0(FUNC_9(VAR_1, VAR_10, VAR_11, VAR_4,
                                  VAR_5,
                                  VAR_6, VAR_7,
                                  VAR_12, VAR_9));

  return FUNC_3(FUNC_8(VAR_10));
}
