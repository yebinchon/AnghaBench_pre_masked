
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ svn_subst_eol_style_t ;
struct TYPE_7__ {TYPE_1__* value; } ;
typedef TYPE_2__ svn_prop_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
struct TYPE_8__ {int wri_abspath; int db; int prop_diff; int old_actual_props; int local_abspath; } ;
typedef TYPE_3__ merge_target_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_6__ {char const* data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 char* FUNC_1 (int *,char const*) ;
 TYPE_2__* FUNC_2 (int ,int ) ;
 int FUNC_3 (char const**,char const*,int *) ;
 int * FUNC_4 (int ,int *,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int *,char const**,char const*,int ,int *,int *) ;
 scalar_t__ FUNC_6 (char const*) ;
 char* FUNC_7 (int ,int ) ;
 int FUNC_8 (char const*,char const*,char const*,int ,int *,int,int,int ,void*,int *) ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (scalar_t__*,char const**,char const*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_10 (char const**,int ,int ,int *,int *) ;
 int FUNC_11 (scalar_t__*,char const**,int **,int*,int ,int ,int ,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(const char **VAR_12,
                    const merge_target_t *VAR_13,
                    svn_boolean_t VAR_14,
                    const char *VAR_15,
                    svn_cancel_func_t VAR_16,
                    void *VAR_17,
                    apr_pool_t *VAR_18,
                    apr_pool_t *VAR_19)
{
  svn_boolean_t VAR_20, VAR_21;
  svn_subst_eol_style_t VAR_22;
  const char *VAR_23;
  apr_hash_t *VAR_24;
  svn_boolean_t VAR_25;

  {
    const char *VAR_26
      = FUNC_7(VAR_13->old_actual_props, VAR_4);
    const svn_prop_t *VAR_27 = FUNC_2(VAR_13->prop_diff, VAR_4);
    const char *VAR_28
      = VAR_27 ? (VAR_27->value ? VAR_27->value->data : ((void*)0)) : VAR_26;

    VAR_20 = VAR_26 && FUNC_6(VAR_26);
    VAR_21 = VAR_28 && FUNC_6(VAR_28);
  }


  if (VAR_20 && VAR_21)
    {

      FUNC_0(FUNC_11(((void*)0), ((void*)0), &VAR_24, ((void*)0),
                                         VAR_13->db, VAR_13->local_abspath,
                                         VAR_13->old_actual_props, VAR_6,
                                         VAR_19, VAR_19));

      VAR_25 = VAR_0;
      VAR_23 = ((void*)0);
      VAR_22 = VAR_11;
    }
  else if (!VAR_20 && VAR_21)
    {


      FUNC_0(FUNC_11(&VAR_22, &VAR_23,
                                         &VAR_24,
                                         &VAR_25,
                                         VAR_13->db, VAR_13->local_abspath,
                                         VAR_13->old_actual_props, VAR_6,
                                         VAR_19, VAR_19));
    }
  else
    {



      FUNC_0(FUNC_11(&VAR_22, &VAR_23,
                                         &VAR_24,
                                         &VAR_25,
                                         VAR_13->db, VAR_13->local_abspath,
                                         VAR_13->old_actual_props, VAR_6,
                                         VAR_19, VAR_19));

      if (VAR_25)
        {
          VAR_24 = ((void*)0);
          VAR_23 = ((void*)0);
          VAR_22 = VAR_11;
        }
      else
        {
          const svn_prop_t *VAR_29;


          if ((VAR_29 = FUNC_2(VAR_13->prop_diff, VAR_3)) && VAR_29->value)
            {

              FUNC_9(&VAR_22, &VAR_23, VAR_29->value->data);
            }
          else if (!VAR_20)
            {

            }
          else
            {
              VAR_23 = ((void*)0);
              VAR_22 = VAR_11;
            }
        }
    }



  if (VAR_14 || VAR_24 || VAR_23 || VAR_25)
    {
      const char *VAR_30;
      const char *VAR_31;



      FUNC_0(FUNC_10(&VAR_30, VAR_13->db,
                                             VAR_13->wri_abspath,
                                             VAR_19, VAR_19));



      FUNC_0(FUNC_5(((void*)0), &VAR_31, VAR_30,
                                       (VAR_14
                                        ? VAR_7
                                        : VAR_8),
                                       VAR_18, VAR_19));





      if (VAR_22 == VAR_10)
        VAR_23 = VAR_5;
      else if (VAR_22 != VAR_9
               && VAR_22 != VAR_11)
        return FUNC_4(VAR_1, ((void*)0), ((void*)0));

      FUNC_0(FUNC_8(VAR_15,
                                            VAR_31,
                                            VAR_23,
                                            VAR_6 ,
                                            VAR_24,
                                            VAR_0 ,
                                            VAR_25,
                                            VAR_16, VAR_17,
                                            VAR_19));

      FUNC_0(FUNC_3(VAR_12, VAR_31,
                                      VAR_18));
    }
  else
    *VAR_12 = FUNC_1(VAR_18, VAR_15);

  return VAR_2;
}
