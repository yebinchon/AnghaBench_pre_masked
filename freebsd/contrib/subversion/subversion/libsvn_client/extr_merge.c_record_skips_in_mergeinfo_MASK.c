
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ svn_wc_notify_state_t ;
typedef int svn_rangelist_t ;
typedef int svn_merge_range_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_6__ {int ctx; TYPE_1__* target; int skipped_abspaths; } ;
typedef TYPE_2__ merge_cmd_baton_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;
struct TYPE_5__ {int abspath; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__*,int *,int *,int *,int *,TYPE_2__*,char const*,int *) ;
 int FUNC_8 (int *,char const*,int ) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_12 (int *,int ,char const*,int *,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_13(const char *VAR_3,
                          const svn_rangelist_t *VAR_4,
                          svn_boolean_t VAR_5,
                          merge_cmd_baton_t *VAR_6,
                          apr_pool_t *VAR_7)
{
  apr_hash_index_t *VAR_8;
  apr_hash_t *VAR_9;
  apr_size_t VAR_10 = FUNC_2(VAR_6->skipped_abspaths);
  apr_pool_t *VAR_11 = FUNC_10(VAR_7);

  if (VAR_10 == 0)
    return VAR_0;

  VAR_9 = FUNC_4(VAR_7);


  for (VAR_8 = FUNC_3(VAR_7, VAR_6->skipped_abspaths); VAR_8;
       VAR_8 = FUNC_5(VAR_8))
    {
      const char *VAR_12 = FUNC_6(VAR_8);
      svn_wc_notify_state_t VAR_13;

      FUNC_9(VAR_11);



      FUNC_0(FUNC_7(&VAR_13, ((void*)0), ((void*)0),
                                        ((void*)0), ((void*)0),
                                        VAR_6, VAR_12,
                                        VAR_11));
      if (VAR_13 == VAR_2
          || VAR_13 == VAR_1)
        continue;
      FUNC_8(VAR_9, VAR_12,
                    FUNC_1(VAR_7, 0,
                                   sizeof(svn_merge_range_t *)));





    }
  FUNC_0(FUNC_12(((void*)0), VAR_6->target->abspath,
                              VAR_3, VAR_9,
                              VAR_5, VAR_6->ctx, VAR_11));
  FUNC_11(VAR_11);
  return VAR_0;
}
