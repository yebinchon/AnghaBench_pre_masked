
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_wc__db_t ;
typedef int svn_wc__db_status_t ;
typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_9__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*,int *) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char const*,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_1__* FUNC_8 (scalar_t__,int *,int ,int ) ;
 TYPE_1__* FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (char const*,scalar_t__*,scalar_t__*,int *) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_11 (char const*,int *) ;
 scalar_t__ FUNC_12 (char const*,int *) ;
 int FUNC_13 (scalar_t__*,int *,char const*,int *) ;
 TYPE_1__* FUNC_14 (int*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,char const*,int *,int *) ;



 scalar_t__ FUNC_15 (char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_16(svn_node_kind_t *VAR_10,
                   svn_boolean_t *VAR_11,
                   svn_boolean_t *VAR_12,
                   svn_wc__db_t *VAR_13,
                   const char *VAR_14,
                   const char *VAR_15,
                   svn_revnum_t VAR_16,
                   apr_pool_t *VAR_17)
{
  const char *VAR_18 = FUNC_4(VAR_14, VAR_17);
  svn_boolean_t VAR_19;
  svn_node_kind_t VAR_20;
  svn_boolean_t VAR_21;

  FUNC_1(FUNC_5(VAR_14));
  FUNC_1(!VAR_15 || (FUNC_12(VAR_15,
                                                        VAR_17)
                                   && FUNC_2(VAR_16)));


  if (FUNC_15(VAR_18, VAR_17))
    return FUNC_8
      (VAR_2, ((void*)0),
       FUNC_3("Can't create an entry with a reserved name while trying to add '%s'"),
       FUNC_6(VAR_14, VAR_17));

  FUNC_0(FUNC_11(VAR_14, VAR_17));


  FUNC_0(FUNC_10(VAR_14, &VAR_20, &VAR_21,
                                    VAR_17));
  if (VAR_20 == VAR_8)
    return FUNC_8(VAR_5, ((void*)0),
                             FUNC_3("'%s' not found"),
                             FUNC_6(VAR_14,
                                                    VAR_17));
  if (VAR_20 == VAR_9)
    return FUNC_8(VAR_3, ((void*)0),
                             FUNC_3("Unsupported node kind for path '%s'"),
                             FUNC_6(VAR_14,
                                                    VAR_17));
  if (VAR_10)
    *VAR_10 = VAR_20;




  {
    svn_wc__db_status_t VAR_22;
    svn_boolean_t VAR_23;
    svn_boolean_t VAR_24;
    svn_error_t *VAR_25
      = FUNC_14(&VAR_22, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                             ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                             ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                             &VAR_23,
                             ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                             VAR_13, VAR_14,
                             VAR_17, VAR_17);

    if (VAR_25)
      {
        if (VAR_25->apr_err != VAR_5)
          return FUNC_9(VAR_25);

        FUNC_7(VAR_25);
        VAR_24 = VAR_0;
        VAR_19 = VAR_0;
      }
    else
      {
        VAR_19 = VAR_0;
        VAR_24 = VAR_7;



        if (VAR_23)
          return FUNC_8(VAR_4, ((void*)0),
                                   FUNC_3("'%s' is an existing item in conflict; "
                                   "please mark the conflict as resolved "
                                   "before adding a new item here"),
                                   FUNC_6(VAR_14,
                                                          VAR_17));
        switch (VAR_22)
          {
            case 128:
              break;
            case 130:

              FUNC_1(!VAR_19);
              break;
            case 129:
              FUNC_0(FUNC_13(&VAR_19, VAR_13, VAR_14,
                                           VAR_17));

              if (VAR_19 && VAR_15)
                {


                  break;
                }
              else if (VAR_19 && VAR_21)
                {


                  break;
                }


            default:
              return FUNC_8(
                               VAR_1, ((void*)0),
                               FUNC_3("'%s' is already under version control"),
                               FUNC_6(VAR_14,
                                                      VAR_17));
          }
      }

    if (VAR_11)
      *VAR_11 = VAR_24;
    if (VAR_12)
      *VAR_12 = VAR_19;
  }

  return VAR_6;
}
