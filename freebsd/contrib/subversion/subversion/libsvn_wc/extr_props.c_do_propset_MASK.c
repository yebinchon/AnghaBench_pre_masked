
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {char const* prop_name; scalar_t__ kind; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int (* svn_wc_notify_func2_t ) (void*,TYPE_1__*,int *) ;
typedef int svn_wc_notify_action_t ;
typedef int svn_wc__db_t ;
struct TYPE_15__ {int data; } ;
typedef TYPE_3__ svn_string_t ;
typedef int svn_skel_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct getter_baton {char const* local_abspath; TYPE_3__* mime_type; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int * VAR_1 ;
 char const* VAR_2 ;
 char const* VAR_3 ;
 char const* VAR_4 ;
 char const* VAR_5 ;
 char const* VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int *) ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (char const*,char const*) ;
 int FUNC_6 (void*,TYPE_1__*,int *) ;
 int FUNC_7 (char const*) ;
 TYPE_3__* FUNC_8 (int *,char const*) ;
 int FUNC_9 (int *,char const*,TYPE_3__ const*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_10 (char const*) ;
 int FUNC_11 (TYPE_3__ const*,TYPE_3__*) ;
 scalar_t__ FUNC_12 (int *,int *,int ,int *) ;
 int FUNC_13 (int *,char const*,int *,int ,int *,int *,int *) ;
 int FUNC_14 (int **,int *,char const*,int *,int *) ;
 int FUNC_15 (int **,int *,char const*,int *,int ,int ,int *,int *) ;
 int FUNC_16 (int **,int *,char const*,int *,int *) ;
 int FUNC_17 (int *,char const*,int *,int *,int *) ;
 int FUNC_18 (TYPE_3__ const**,char const*,TYPE_3__ const*,char const*,scalar_t__,int ,int ,struct getter_baton*,int *) ;
 TYPE_1__* FUNC_19 (char const*,int ,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static svn_error_t *
FUNC_20(svn_wc__db_t *VAR_14,
           const char *VAR_15,
           svn_node_kind_t VAR_16,
           const char *VAR_17,
           const svn_string_t *VAR_18,
           svn_boolean_t VAR_19,
           svn_wc_notify_func2_t VAR_20,
           void *VAR_21,
           apr_pool_t *VAR_22)
{
  apr_hash_t *VAR_23;
  svn_wc_notify_action_t VAR_24;
  svn_skel_t *VAR_25 = ((void*)0);
  svn_boolean_t VAR_26 = VAR_0;

  FUNC_1(FUNC_7(VAR_15));

  FUNC_2(FUNC_14(&VAR_23, VAR_14, VAR_15,
                                  VAR_22, VAR_22),
            FUNC_3("Failed to load current properties"));






  if (VAR_18 && FUNC_10(VAR_17))
    {
      const svn_string_t *VAR_27;
      struct getter_baton VAR_28;

      VAR_28.mime_type = FUNC_8(VAR_23, VAR_5);
      VAR_28.local_abspath = VAR_15;

      FUNC_0(FUNC_18(&VAR_27, VAR_17, VAR_18,
                                           VAR_15, VAR_16,
                                           VAR_19,
                                           VAR_8, &VAR_28,
                                           VAR_22));
      VAR_18 = VAR_27;
    }

  if (VAR_16 == VAR_9
        && (FUNC_5(VAR_17, VAR_3) == 0
            || FUNC_5(VAR_17, VAR_6) == 0))
    {
      FUNC_0(FUNC_16(&VAR_25, VAR_14, VAR_15,
                                               VAR_22, VAR_22));
    }
  if (VAR_16 == VAR_9 && FUNC_5(VAR_17, VAR_4) == 0)
    {
      svn_string_t *VAR_29 = FUNC_8(VAR_23, VAR_4);
      apr_hash_t *VAR_30, *VAR_31;

      if (VAR_29)
        FUNC_0(FUNC_15(&VAR_30,
                                        VAR_14, VAR_15, ((void*)0),
                                        VAR_29->data, VAR_7,
                                        VAR_22, VAR_22));
      else
        VAR_30 = FUNC_4(VAR_22);

      if (VAR_18)
        FUNC_0(FUNC_15(&VAR_31,
                                        VAR_14, VAR_15, ((void*)0),
                                        VAR_18->data, VAR_7,
                                        VAR_22, VAR_22));
      else
        VAR_31 = FUNC_4(VAR_22);

      if (FUNC_12(VAR_30, VAR_31, VAR_0,
                                     VAR_22))
        {
          VAR_26 = VAR_7;
        }
    }
  else if (VAR_16 == VAR_9 && FUNC_5(VAR_17, VAR_2) == 0)
    {
      svn_string_t *VAR_32 = FUNC_8(VAR_23, VAR_2);

      if (((VAR_18 == ((void*)0)) != (VAR_32 == ((void*)0)))
          || (VAR_18 && ! FUNC_11(VAR_18, VAR_32)))
        {
          VAR_26 = VAR_7;
        }
    }



  if (FUNC_8(VAR_23, VAR_17) == ((void*)0))
    {
      if (VAR_18 == ((void*)0))

        VAR_24 = VAR_12;
      else

        VAR_24 = VAR_10;
    }
  else
    {
      if (VAR_18 == ((void*)0))

        VAR_24 = VAR_11;
      else

        VAR_24 = VAR_13;
    }



  FUNC_9(VAR_23, VAR_17, VAR_18);


  FUNC_0(FUNC_13(VAR_14, VAR_15, VAR_23,
                                  VAR_26, ((void*)0), VAR_25,
                                  VAR_22));


  if (VAR_25)
    FUNC_0(FUNC_17(VAR_14, VAR_15, ((void*)0), ((void*)0), VAR_22));

  if (VAR_20)
    {
      svn_wc_notify_t *VAR_33 = FUNC_19(VAR_15,
                                                     VAR_24,
                                                     VAR_22);
      VAR_33->prop_name = VAR_17;
      VAR_33->kind = VAR_16;

      (*VAR_20)(VAR_21, VAR_33, VAR_22);
    }

  return VAR_1;
}
