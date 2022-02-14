
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ kind; int name; } ;
typedef TYPE_1__ const svn_wc_entry_t ;
struct TYPE_10__ {int * (* handle_error ) (char const*,int *,void*,int *) ;int * (* found_entry ) (char const*,TYPE_1__ const*,void*,int *) ;} ;
typedef TYPE_2__ svn_wc_entry_callbacks2_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_depth_t ;
typedef int * (* svn_cancel_func_t ) (void*) ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 TYPE_1__ const* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int * FUNC_7 (char const*,int *,void*,int *) ;
 int * FUNC_8 (char const*,int *,void*,int *) ;
 int * FUNC_9 (char const*,TYPE_1__ const*,void*,int *) ;
 int * FUNC_10 (char const*,int *,void*,int *) ;
 int * FUNC_11 (char const*,TYPE_1__ const*,void*,int *) ;
 int * FUNC_12 (char const*,int *,void*,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_13 (char const**,char const*,int *) ;
 char* FUNC_14 (char const*,char const*,int *) ;
 int FUNC_15 (char const*,int *) ;
 int * FUNC_16 (int ,int *,int ,int ) ;
 TYPE_1__ const* FUNC_17 (int *,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_18 (int *) ;
 int * FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int * FUNC_21 (int *) ;
 int * FUNC_22 (int *,char const*,int *) ;
 int * FUNC_23 (int **,int *,int ,int *) ;
 int * FUNC_24 (int *,TYPE_1__ const*) ;

__attribute__((used)) static svn_error_t *
FUNC_25(const char *VAR_7,
              svn_wc_adm_access_t *VAR_8,
              const svn_wc_entry_callbacks2_t *VAR_9,
              void *VAR_10,
              svn_depth_t VAR_11,
              svn_boolean_t VAR_12,
              svn_cancel_func_t VAR_13,
              void *VAR_14,
              apr_pool_t *VAR_15)
{
  apr_pool_t *VAR_16 = FUNC_19(VAR_15);
  apr_hash_t *VAR_17;
  apr_hash_index_t *VAR_18;
  svn_wc_entry_t *VAR_19;
  svn_error_t *VAR_20;
  svn_wc__db_t *VAR_21 = FUNC_21(VAR_8);

  VAR_20 = FUNC_23(&VAR_17, VAR_8, VAR_12,
                                      VAR_15);

  if (VAR_20)
    FUNC_0(VAR_9->handle_error(VAR_7, VAR_20, VAR_10, VAR_15));


  VAR_19 = FUNC_17(VAR_17, VAR_2);
  if (! VAR_19)
    return VAR_9->handle_error
      (VAR_7, FUNC_16(VAR_0, ((void*)0),
                                  FUNC_1("Directory '%s' has no THIS_DIR entry"),
                                  FUNC_15(VAR_7, VAR_15)),
       VAR_10, VAR_15);






  VAR_20 = VAR_9->found_entry(VAR_7, VAR_19, VAR_10, VAR_16);


  if(VAR_20)
    FUNC_0(VAR_9->handle_error(VAR_7, VAR_20, VAR_10, VAR_15));

  if (VAR_11 == VAR_3)
    return VAR_1;


  for (VAR_18 = FUNC_2(VAR_15, VAR_17); VAR_18; VAR_18 = FUNC_3(VAR_18))
    {
      const char *VAR_22 = FUNC_4(VAR_18);
      const svn_wc_entry_t *VAR_23 = FUNC_5(VAR_18);
      const char *VAR_24;
      const char *VAR_25;
      svn_boolean_t VAR_26;

      FUNC_18(VAR_16);


      if (VAR_13)
        FUNC_0(VAR_13(VAR_14));


      if (FUNC_6(VAR_23->name, VAR_2) == 0)
        continue;

      VAR_24 = FUNC_14(VAR_7, VAR_22, VAR_16);
      FUNC_0(FUNC_24(&VAR_26, VAR_23));
      FUNC_0(FUNC_13(&VAR_25, VAR_24, VAR_16));



      if (VAR_23->kind == VAR_6
          || VAR_11 >= VAR_4)
        {
          VAR_20 = VAR_9->found_entry(VAR_24, VAR_23,
                                            VAR_10, VAR_16);

          if (VAR_20)
            FUNC_0(VAR_9->handle_error(VAR_24, VAR_20,
                                                 VAR_10, VAR_15));
        }


      if (VAR_23->kind == VAR_5
          && !VAR_26
          && VAR_11 >= VAR_4)
        {
          svn_wc_adm_access_t *VAR_27;
          svn_depth_t VAR_28 = VAR_11;

          if (VAR_11 == VAR_4)
            VAR_28 = VAR_3;

          VAR_27 = FUNC_22(VAR_21, VAR_25,
                                                        VAR_16);

          if (VAR_27)
            FUNC_0(FUNC_25(VAR_24, VAR_27,
                                  VAR_9, VAR_10,
                                  VAR_28, VAR_12,
                                  VAR_13, VAR_14,
                                  VAR_16));
        }
    }

  FUNC_20(VAR_16);
  return VAR_1;
}
