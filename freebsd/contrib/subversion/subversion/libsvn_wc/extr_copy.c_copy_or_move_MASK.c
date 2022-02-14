
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int svn_wc_notify_func2_t ;
struct TYPE_24__ {int * db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_wc__db_t ;
typedef int svn_wc__db_status_t ;
typedef char const* svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_filesize_t ;
struct TYPE_25__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_time_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (char const*) ;
 TYPE_2__* VAR_8 ;
 int FUNC_3 (char*) ;
 TYPE_2__* FUNC_4 (int *,char const*,char const*,char const*,char const*,int,int,int *,int ,void*,int ,void*,int *) ;
 TYPE_2__* FUNC_5 (int *,char const*,char const*,char const*,char const*,int,int,int,int *,int ,int ,int ,void*,int ,void*,int *) ;
 scalar_t__ FUNC_6 (char const*,char const*) ;
 char* FUNC_7 (char const*,int *) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char const*,int *) ;
 int FUNC_10 (TYPE_2__*) ;
 TYPE_2__* FUNC_11 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_12 (scalar_t__,int *,int ,int ,...) ;
 scalar_t__ FUNC_13 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_14 (TYPE_2__*) ;
 TYPE_2__* FUNC_15 (char const*,scalar_t__*,int *) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_2__* FUNC_16 (int *,int *,int *,int *,char const**,char const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,char const*,int *,int *) ;
 TYPE_2__* FUNC_17 (char const**,int *,char const*,int *,int *) ;
 TYPE_2__* FUNC_18 (char const**,char const**,int *,char const*,int,int *) ;
 int FUNC_19 (int *,int *,char const*,char const*,int *,int *) ;
 TYPE_2__* FUNC_20 (int *,char const*,char const*,int ,void*,int *) ;
 TYPE_2__* FUNC_21 (int*,scalar_t__*,int *,char const**,char const**,char const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int*,int *,int *,int *,int *,int *,int *,int *,char const*,int *,int *) ;
 TYPE_2__* FUNC_22 (int *,int *,int *,char const**,char const**,int *,int *,int *,int *,int *,char const*,int *,int *) ;
 int VAR_12 ;


 int VAR_13 ;


 TYPE_2__* FUNC_23 (char const**,int *,char const*,int *,int *) ;
 int FUNC_24 (int *,char const*,int ,void*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_25(svn_boolean_t *VAR_14,
             svn_wc_context_t *VAR_15,
             const char *VAR_16,
             const char *VAR_17,
             svn_boolean_t VAR_18,
             svn_boolean_t VAR_19,
             svn_boolean_t VAR_20,
             svn_cancel_func_t VAR_21,
             void *VAR_22,
             svn_wc_notify_func2_t VAR_23,
             void *VAR_24,
             apr_pool_t *VAR_25)
{
  svn_wc__db_t *VAR_26 = VAR_15->db;
  svn_node_kind_t VAR_27;
  const char *VAR_28;
  svn_boolean_t VAR_29;
  const char *VAR_30;
  const char *VAR_31;
  const char *VAR_32;
  svn_boolean_t VAR_33;
  svn_wc__db_status_t VAR_34;
  svn_error_t *VAR_35;
  svn_filesize_t VAR_36;
  apr_time_t VAR_37;

  FUNC_1(FUNC_8(VAR_16));
  FUNC_1(FUNC_8(VAR_17));

  VAR_28 = FUNC_7(VAR_17, VAR_25);



  {
    svn_wc__db_status_t VAR_38;
    const char *VAR_39, *VAR_40;
    const char *VAR_41, *VAR_42;
    const char *VAR_43;

    VAR_35 = FUNC_21(&VAR_34, &VAR_27, ((void*)0),
                               &VAR_43, &VAR_39,
                               &VAR_41, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               &VAR_36, &VAR_37,
                               ((void*)0), &VAR_29, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0),
                               VAR_26, VAR_16, VAR_25, VAR_25);

    if (VAR_35 && VAR_35->apr_err == VAR_6)
      {

        FUNC_10(VAR_35);
        return FUNC_12(VAR_3, ((void*)0),
                                 FUNC_3("'%s' is not under version control"),
                                 FUNC_9(VAR_16,
                                                        VAR_25));
      }
    else
      FUNC_0(VAR_35);


    FUNC_0(FUNC_17(&VAR_31, VAR_26, VAR_16,
                                  VAR_25, VAR_25));

    switch (VAR_34)
      {
        case 131:
          return FUNC_12(VAR_7, ((void*)0),
                                   FUNC_3("Deleted node '%s' can't be copied."),
                                   FUNC_9(VAR_16,
                                                          VAR_25));

        case 130:
        case 128:
        case 129:
          return FUNC_12(VAR_6, ((void*)0),
                                   FUNC_3("The node '%s' was not found."),
                                   FUNC_9(VAR_16,
                                                          VAR_25));
        default:
          break;
      }

     if (VAR_19 && ! FUNC_6(VAR_16, VAR_31))
      {
        return FUNC_12(VAR_7, ((void*)0),
                                 FUNC_3("'%s' is the root of a working copy and "
                                   "cannot be moved"),
                                   FUNC_9(VAR_16,
                                                          VAR_25));
      }
    if (VAR_19 && VAR_43 && !VAR_43[0])
      {
        return FUNC_12(VAR_7, ((void*)0),
                                 FUNC_3("'%s' represents the repository root "
                                   "and cannot be moved"),
                                 FUNC_9(VAR_16,
                                                        VAR_25));
      }

    VAR_35 = FUNC_21(&VAR_38, ((void*)0), ((void*)0), ((void*)0),
                               &VAR_40, &VAR_42, ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0),
                               VAR_26, VAR_28,
                               VAR_25, VAR_25);

    if (VAR_35 && VAR_35->apr_err == VAR_6)
      {

        FUNC_10(VAR_35);
        return FUNC_12(VAR_3, ((void*)0),
                                 FUNC_3("'%s' is not under version control"),
                                 FUNC_9(VAR_28,
                                                        VAR_25));
      }
    else
      FUNC_0(VAR_35);


    FUNC_0(FUNC_17(&VAR_32, VAR_26, VAR_28,
                                  VAR_25, VAR_25));

    if (!VAR_39)
      {
        if (VAR_34 == VAR_12)
          FUNC_0(FUNC_22(((void*)0), ((void*)0), ((void*)0),
                                           &VAR_39,
                                           &VAR_41, ((void*)0), ((void*)0), ((void*)0),
                                           ((void*)0),
                                           VAR_26, VAR_16,
                                           VAR_25, VAR_25));
        else

          FUNC_0(FUNC_16(((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                           &VAR_39,
                                           &VAR_41, ((void*)0), ((void*)0), ((void*)0),
                                           ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                           ((void*)0),
                                           VAR_26, VAR_16,
                                           VAR_25, VAR_25));
      }

    if (!VAR_40)
      {
        if (VAR_38 == VAR_12)
          FUNC_0(FUNC_22(((void*)0), ((void*)0), ((void*)0),
                                           &VAR_40,
                                           &VAR_42, ((void*)0), ((void*)0), ((void*)0),
                                           ((void*)0),
                                           VAR_26, VAR_28,
                                           VAR_25, VAR_25));
        else

          FUNC_0(FUNC_16(((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                           &VAR_40,
                                           &VAR_42, ((void*)0), ((void*)0), ((void*)0),
                                           ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                           ((void*)0),
                                           VAR_26, VAR_28,
                                           VAR_25, VAR_25));
      }

    if (FUNC_6(VAR_39, VAR_40) != 0
        || FUNC_6(VAR_41, VAR_42) != 0)
      return FUNC_12(
         VAR_4, ((void*)0),
         FUNC_3("Cannot copy to '%s', as it is not from repository '%s'; "
           "it is from '%s'"),
         FUNC_9(VAR_17, VAR_25),
         VAR_39, VAR_40);

    if (VAR_38 == 131)
      return FUNC_12(
         VAR_4, ((void*)0),
         FUNC_3("Cannot copy to '%s' as it is scheduled for deletion"),
         FUNC_9(VAR_17, VAR_25));

  }




  {
    svn_wc__db_status_t VAR_44;

    VAR_35 = FUNC_21(&VAR_44, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               VAR_26, VAR_17, VAR_25, VAR_25);

    if (VAR_35 && VAR_35->apr_err != VAR_6)
      return FUNC_14(VAR_35);

    FUNC_10(VAR_35);

    if (!VAR_35)
      switch (VAR_44)
        {
          case 130:
            return FUNC_12(
                     VAR_2, ((void*)0),
                     FUNC_3("'%s' is already under version control "
                       "but is excluded."),
                     FUNC_9(VAR_17, VAR_25));
          case 128:
            return FUNC_12(
                     VAR_2, ((void*)0),
                     FUNC_3("'%s' is already under version control"),
                     FUNC_9(VAR_17, VAR_25));

          case 131:
          case 129:
            break;

          default:
            if (!VAR_18)
              return FUNC_12(VAR_2, ((void*)0),
                                 FUNC_3("There is already a versioned item '%s'"),
                                 FUNC_9(VAR_17,
                                                        VAR_25));
        }
  }


  if (!VAR_18)
    {
      svn_node_kind_t VAR_45;



      FUNC_0(FUNC_15(VAR_17, &VAR_45, VAR_25));
      if (VAR_45 != VAR_10)
        return FUNC_12(VAR_2, ((void*)0),
                                 FUNC_3("'%s' already exists and is in the way"),
                                 FUNC_9(VAR_17,
                                                        VAR_25));
    }

  FUNC_0(FUNC_23(&VAR_30, VAR_26,
                                         VAR_28,
                                         VAR_25, VAR_25));

  VAR_33 = (FUNC_6(VAR_31, VAR_32) == 0);

  if (VAR_19
      && !VAR_33)
    {
      if (VAR_14)
        *VAR_14 = VAR_0;

      VAR_19 = VAR_0;
    }

  if (!VAR_33)
    FUNC_0(FUNC_20(VAR_26, VAR_16, VAR_32,
                                         VAR_21, VAR_22,
                                         VAR_25));

  if (VAR_27 == VAR_9
      || VAR_27 == VAR_11)
    {
      VAR_35 = FUNC_5(VAR_26, VAR_16, VAR_17, VAR_17,
                                VAR_30,
                                VAR_18, VAR_29, VAR_19,
                                ((void*)0), VAR_36, VAR_37,
                                VAR_21, VAR_22,
                                VAR_23, VAR_24,
                                VAR_25);
    }
  else
    {
      if (VAR_19
          && VAR_34 == VAR_13)
        {
          svn_revnum_t VAR_46;
          svn_revnum_t VAR_47;


          FUNC_0(FUNC_18(&VAR_46, &VAR_47, VAR_26,
                                               VAR_16, VAR_0, VAR_25));
          if (FUNC_2(VAR_46) && FUNC_2(VAR_47) &&
              VAR_46 != VAR_47)
            {
              if (!VAR_20)
                return FUNC_12(VAR_5, ((void*)0),
                                         FUNC_3("Cannot move mixed-revision "
                                           "subtree '%s' [%ld:%ld]; "
                                           "try updating it first"),
                                         FUNC_9(VAR_16,
                                                                VAR_25),
                                         VAR_46, VAR_47);


              VAR_19 = VAR_0;
              if (VAR_14)
                *VAR_14 = VAR_0;

            }
        }

      VAR_35 = FUNC_4(VAR_26, VAR_16, VAR_17, VAR_17,
                               VAR_30, VAR_18, VAR_19,
                               ((void*)0) ,
                               VAR_21, VAR_22,
                               VAR_23, VAR_24,
                               VAR_25);
    }

  if (VAR_35 && FUNC_13(VAR_35, VAR_1))
    return FUNC_14(VAR_35);

  if (VAR_19)
    VAR_35 = FUNC_11(VAR_35,
                FUNC_19(((void*)0),
                                               VAR_26, VAR_17, VAR_16,
                                               ((void*)0) ,
                                               VAR_25));


  FUNC_0(FUNC_11(
                                VAR_35,
                                FUNC_24(VAR_26, VAR_17,
                                                   VAR_21, VAR_22,
                                                   VAR_25)));

  return VAR_8;
}
