
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ svn_wc_conflict_reason_t ;
typedef scalar_t__ svn_wc_conflict_action_t ;
typedef int svn_wc__db_t ;
struct TYPE_11__ {TYPE_1__* children; } ;
typedef TYPE_2__ svn_skel_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_10__ {TYPE_2__* next; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 char const* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__**,TYPE_2__*,char const*) ;
 int VAR_3 ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_5 (char const*,TYPE_2__*,int *) ;
 char const* FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (char const**,int *,char const*,char const*,int *,int *) ;
 scalar_t__ VAR_4 ;

svn_error_t *
FUNC_8(svn_skel_t *VAR_5,
                                        svn_wc__db_t *VAR_6,
                                        const char *VAR_7,
                                        svn_wc_conflict_reason_t VAR_8,
                                        svn_wc_conflict_action_t VAR_9,
                                        const char *VAR_10,
                                        apr_pool_t *VAR_11,
                                        apr_pool_t *VAR_12)
{
  svn_skel_t *VAR_13;
  svn_skel_t *VAR_14;

  FUNC_0(FUNC_2(&VAR_13, VAR_5,
                                 VAR_1));

  FUNC_1(!VAR_13);

  FUNC_1(VAR_8 == VAR_4
                 || !VAR_10);

  VAR_13 = FUNC_3(VAR_11);

  if (VAR_8 == VAR_4
      && VAR_10)
    {
      const char *VAR_15;

      FUNC_0(FUNC_7(&VAR_15,
                                    VAR_6, VAR_7,
                                    VAR_10,
                                    VAR_11, VAR_12));

      FUNC_5(VAR_15, VAR_13,
                            VAR_11);
    }

  FUNC_5(FUNC_6(VAR_2, VAR_9),
                        VAR_13, VAR_11);

  FUNC_5(FUNC_6(VAR_3, VAR_8),
                        VAR_13, VAR_11);


  VAR_14 = FUNC_3(VAR_11);
  FUNC_4(VAR_14, VAR_13);

  FUNC_5(VAR_1, VAR_13,
                        VAR_11);


  FUNC_4(VAR_13, VAR_5->children->next);

  return VAR_0;
}
