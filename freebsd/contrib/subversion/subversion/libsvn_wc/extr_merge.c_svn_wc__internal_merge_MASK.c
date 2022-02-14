
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
struct TYPE_9__ {TYPE_1__* value; } ;
typedef TYPE_2__ svn_prop_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
struct TYPE_10__ {char const* local_abspath; char const* wri_abspath; char const* diff3_cmd; int * old_actual_props; int const* merge_options; int const* prop_diff; int * db; } ;
typedef TYPE_3__ merge_target_t ;
typedef enum svn_wc_merge_outcome_t { ____Placeholder_svn_wc_merge_outcome_t } svn_wc_merge_outcome_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;
struct TYPE_8__ {char const* data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char const**,TYPE_3__*,int,char const*,int ,void*,int *,int *) ;
 TYPE_2__* FUNC_3 (int const*,int ) ;
 int FUNC_4 (char const**,int const*,char const*,int ,void*,int *,int *) ;
 int FUNC_5 (int **,int **,int*,TYPE_3__*,char const*,char const*,char const*,char const*,char const*,int,char const*,int *,int *) ;
 int FUNC_6 (int **,int*,char const*,char const*,char const*,char const*,int,int *,int ,void*,int *,int *) ;
 int FUNC_7 (int **,int **,int*,TYPE_3__*,char const*,char const*,char const*,char const*,char const*,int,char const*,int ,void*,int *,int *) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char const*) ;
 char* FUNC_10 (int *,int ) ;
 int FUNC_11 (int **,int *,char const*,int *,int *) ;
 int * FUNC_12 (int *,int *,int *) ;
 int VAR_3 ;

svn_error_t *
FUNC_13(svn_skel_t **VAR_4,
                       svn_skel_t **VAR_5,
                       enum svn_wc_merge_outcome_t *VAR_6,
                       svn_wc__db_t *VAR_7,
                       const char *VAR_8,
                       const char *VAR_9,
                       const char *VAR_10,
                       const char *VAR_11,
                       const char *VAR_12,
                       const char *VAR_13,
                       const char *VAR_14,
                       apr_hash_t *VAR_15,
                       svn_boolean_t VAR_16,
                       const char *VAR_17,
                       const apr_array_header_t *VAR_18,
                       const apr_array_header_t *VAR_19,
                       svn_cancel_func_t VAR_20,
                       void *VAR_21,
                       apr_pool_t *VAR_22,
                       apr_pool_t *VAR_23)
{
  const char *VAR_24;
  svn_boolean_t VAR_25 = VAR_0;
  const svn_prop_t *VAR_26;
  svn_skel_t *VAR_27;
  merge_target_t VAR_28;

  FUNC_1(FUNC_8(VAR_8));
  FUNC_1(FUNC_8(VAR_9));
  FUNC_1(FUNC_8(VAR_10));

  *VAR_4 = ((void*)0);


  VAR_28.db = VAR_7;
  VAR_28.local_abspath = VAR_10;
  VAR_28.wri_abspath = VAR_11;
  VAR_28.old_actual_props = VAR_15;
  VAR_28.prop_diff = VAR_19;
  VAR_28.diff3_cmd = VAR_17;
  VAR_28.merge_options = VAR_18;


  if ((VAR_26 = FUNC_3(VAR_19, VAR_2))
      && VAR_26->value)
    VAR_25 = FUNC_9(VAR_26->value->data);
  else
    {
      const char *VAR_29 = FUNC_10(VAR_28.old_actual_props,
                                             VAR_2);

      VAR_25 = VAR_29 && FUNC_9(VAR_29);
    }

  FUNC_0(FUNC_2(&VAR_24, &VAR_28,
                              (! VAR_25) && VAR_17 != ((void*)0),
                              VAR_10,
                              VAR_20, VAR_21,
                              VAR_23, VAR_23));




  FUNC_0(FUNC_4(&VAR_8, VAR_19, VAR_8,
                                   VAR_20, VAR_21,
                                   VAR_23, VAR_23));

  FUNC_0(FUNC_6(VAR_4, VAR_6,
                             VAR_8, VAR_9,
                             VAR_10, VAR_24,
                             VAR_16, VAR_7, VAR_20, VAR_21,
                             VAR_22, VAR_23));
  if (*VAR_6 == VAR_3)
    {



      if (VAR_25)
        {

          FUNC_0(FUNC_5(VAR_4,
                                    VAR_5,
                                    VAR_6,
                                    &VAR_28,
                                    VAR_8,
                                    VAR_9,
                                    VAR_12,
                                    VAR_13,
                                    VAR_14,
                                    VAR_16,
                                    VAR_24,
                                    VAR_22, VAR_23));
        }
      else
        {
          FUNC_0(FUNC_7(VAR_4,
                                  VAR_5,
                                  VAR_6,
                                  &VAR_28,
                                  VAR_8,
                                  VAR_9,
                                  VAR_12,
                                  VAR_13,
                                  VAR_14,
                                  VAR_16,
                                  VAR_24,
                                  VAR_20, VAR_21,
                                  VAR_22, VAR_23));
        }
    }




  if (! VAR_16)
    {
      FUNC_0(FUNC_11(&VAR_27, VAR_7,
                                               VAR_10,
                                               VAR_22, VAR_23));
      *VAR_4 = FUNC_12(*VAR_4, VAR_27, VAR_22);
    }

  return VAR_1;
}
