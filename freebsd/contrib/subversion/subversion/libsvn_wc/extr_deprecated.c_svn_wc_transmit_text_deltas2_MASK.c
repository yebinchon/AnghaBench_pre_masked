
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int svn_delta_editor_t ;
struct TYPE_7__ {int digest; } ;
typedef TYPE_2__ svn_checksum_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (unsigned char*,int ,int ) ;
 int * FUNC_2 (char const**,char const*,int *) ;
 int * FUNC_3 (int *,int ) ;
 int * FUNC_4 (int ) ;
 int VAR_3 ;
 int * FUNC_5 (int **,char const**,int *,int ,int *,int *) ;
 int FUNC_6 (char const*,int ,int *) ;
 int * FUNC_7 (int *,int ,int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (TYPE_1__**,int *,int ,int *) ;
 int * FUNC_12 (int ,TYPE_2__ const**,int *,int ,char const*,int ,int const*,void*,int *,int *) ;
 int FUNC_13 (TYPE_1__*) ;

svn_error_t *
FUNC_14(const char **VAR_4,
                             unsigned char VAR_5[],
                             const char *VAR_6,
                             svn_wc_adm_access_t *VAR_7,
                             svn_boolean_t VAR_8,
                             const svn_delta_editor_t *VAR_9,
                             void *VAR_10,
                             apr_pool_t *VAR_11)
{
  const char *VAR_12;
  svn_wc_context_t *VAR_13;
  const svn_checksum_t *VAR_14;
  svn_stream_t *VAR_15;
  svn_error_t *VAR_16;

  FUNC_0(FUNC_2(&VAR_12, VAR_6, VAR_11));
  FUNC_0(FUNC_11(&VAR_13, ((void*)0) ,
                                         FUNC_10(VAR_7),
                                         VAR_11));
  if (VAR_4)
    {
      apr_file_t *VAR_17;



      FUNC_0(FUNC_5(&VAR_17, VAR_4, ((void*)0),
                                       VAR_3,
                                       VAR_11, VAR_11));
      VAR_15 = FUNC_7(VAR_17, VAR_1, VAR_2, VAR_11);
    }
  else
    {
      VAR_15 = ((void*)0);
    }

  VAR_16 = FUNC_12(FUNC_9(VAR_15, VAR_11),
                                              (VAR_5
                                               ? &VAR_14
                                               : ((void*)0)),
                                              ((void*)0), VAR_13->db,
                                              VAR_12, VAR_8,
                                              VAR_9, VAR_10,
                                              VAR_11, VAR_11);
  if (VAR_4)
    {
      VAR_16 = FUNC_3(VAR_16, FUNC_8(VAR_15));

      if (VAR_16)
        {
          VAR_16 = FUNC_3(
                  VAR_16, FUNC_6(*VAR_4, VAR_2, VAR_11));
        }
    }

  FUNC_0(VAR_16);

  if (VAR_5)
    FUNC_1(VAR_5, VAR_14->digest, VAR_0);

  return FUNC_4(FUNC_13(VAR_13));
}
