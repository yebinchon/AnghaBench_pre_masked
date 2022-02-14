
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_4__ {char const* local_abspath; int db; int old_actual_props; int merge_options; int diff3_cmd; int wri_abspath; } ;
typedef TYPE_1__ merge_target_t ;
typedef enum svn_wc_merge_outcome_t { ____Placeholder_svn_wc_merge_outcome_t } svn_wc_merge_outcome_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__*,int *,int ,char const*,char const*,char const*,char const*,char const*,char const*,int ,void*,int *) ;
 int FUNC_2 (scalar_t__*,int *,int ,int ,char const*,char const*,char const*,char const*,char const*,char const*,int *) ;
 int FUNC_3 (int **,char const**,char const**,char const**,TYPE_1__ const*,char const*,char const*,char const*,char const*,char const*,char const*,int ,void*,int *,int *) ;
 char* FUNC_4 (char const*,int *) ;
 int FUNC_5 (int *,int *) ;
 int VAR_3 ;
 int FUNC_6 (scalar_t__*,char const*,char const*,int *) ;
 int FUNC_7 (int **,char const**,char const*,char const*,char*,int ,int *,int *) ;
 int FUNC_8 (int *,int ,char const*,char const*,char const*,char const*,int *,int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (char const**,int ,int ,int *,int *) ;
 int FUNC_11 (int *,int *,int *,scalar_t__*,int ,char const*,int ,int ,int *,int *) ;
 int FUNC_12 (int **,int ,char const*,char const*,int ,int ,int *,int *) ;
 int FUNC_13 (int **,int ,char const*,char const*,int *,int *) ;
 int * FUNC_14 (int *,int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static svn_error_t*
FUNC_15(svn_skel_t **VAR_7,
                svn_skel_t **VAR_8,
                enum svn_wc_merge_outcome_t *VAR_9,
                const merge_target_t *VAR_10,
                const char *VAR_11,
                const char *VAR_12,
                const char *VAR_13,
                const char *VAR_14,
                const char *VAR_15,
                svn_boolean_t VAR_16,
                const char *VAR_17,
                svn_cancel_func_t VAR_18,
                void *VAR_19,
                apr_pool_t *VAR_20,
                apr_pool_t *VAR_21)
{
  apr_pool_t *VAR_22 = VAR_21;
  svn_boolean_t VAR_23;
  apr_file_t *VAR_24;
  const char *VAR_25;
  const char *VAR_26;
  const char *VAR_27;
  svn_skel_t *VAR_28;

  *VAR_7 = ((void*)0);

  VAR_26 = FUNC_4(VAR_10->local_abspath, VAR_21);





  FUNC_0(FUNC_10(&VAR_27, VAR_10->db, VAR_10->wri_abspath,
                                         VAR_22, VAR_22));
  FUNC_0(FUNC_7(&VAR_24, &VAR_25,
                                     VAR_27, VAR_26, ".tmp",
                                     VAR_3, VAR_22, VAR_22));


  if (VAR_10->diff3_cmd)
      FUNC_0(FUNC_2(&VAR_23,
                                     VAR_24,
                                     VAR_10->diff3_cmd,
                                     VAR_10->merge_options,
                                     VAR_17,
                                     VAR_11,
                                     VAR_12,
                                     VAR_15,
                                     VAR_13,
                                     VAR_14,
                                     VAR_22));
  else
    FUNC_0(FUNC_1(&VAR_23,
                          VAR_24,
                          VAR_10->merge_options,
                          VAR_17,
                          VAR_11,
                          VAR_12,
                          VAR_15,
                          VAR_13,
                          VAR_14,
                          VAR_18, VAR_19,
                          VAR_22));

  FUNC_0(FUNC_5(VAR_24, VAR_22));


  if (VAR_23)
    {
      *VAR_9 = VAR_4;

      if (! VAR_16)
        {
          const char *VAR_29, *VAR_30, *VAR_31;


          FUNC_0(FUNC_3(
                    &VAR_28,
                    &VAR_29, &VAR_30, &VAR_31,
                    VAR_10, VAR_11, VAR_12,
                    VAR_13, VAR_14, VAR_15,
                    VAR_17,
                    VAR_18, VAR_19,
                    VAR_20, VAR_21));
          *VAR_7 = FUNC_14(*VAR_7, VAR_28, VAR_20);



          if (!*VAR_8)
            *VAR_8 = FUNC_9(VAR_20);

          FUNC_0(FUNC_8(*VAR_8,
                                                          VAR_10->db, VAR_10->local_abspath,
                                                          VAR_31,
                                                          VAR_29,
                                                          VAR_30,
                                                          VAR_20,
                                                          VAR_21));
        }
    }
  else
    {
      svn_boolean_t VAR_32, VAR_33;





      FUNC_0(FUNC_11(((void*)0), ((void*)0), ((void*)0),
                                         &VAR_33, VAR_10->db, VAR_10->local_abspath,
                                         VAR_10->old_actual_props, VAR_2,
                                         VAR_22, VAR_22));
      FUNC_0(FUNC_6(&VAR_32, VAR_25,
                                           (VAR_33 ?
                                              VAR_17 :
                                              VAR_10->local_abspath),
                                           VAR_22));

      *VAR_9 = VAR_32 ? VAR_6 : VAR_5;
    }

  if (*VAR_9 != VAR_6 && ! VAR_16)
    {

      FUNC_0(FUNC_12(&VAR_28,
                                            VAR_10->db, VAR_10->local_abspath,
                                            VAR_25,
                                            VAR_0 ,
                                            VAR_0 ,
                                            VAR_20, VAR_21));
      *VAR_7 = FUNC_14(*VAR_7, VAR_28, VAR_20);
    }


  FUNC_0(FUNC_13(&VAR_28, VAR_10->db, VAR_10->local_abspath,
                                       VAR_25,
                                       VAR_20, VAR_21));

  *VAR_7 = FUNC_14(*VAR_7, VAR_28, VAR_20);

  return VAR_1;
}
