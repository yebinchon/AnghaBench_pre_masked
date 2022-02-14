
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_wc_conflict_reason_t ;
typedef int svn_wc_conflict_action_t ;
typedef int svn_wc__db_status_t ;
typedef int svn_skel_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct edit_baton {int db; int cancel_baton; int cancel_func; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char const*,int *) ;
 int * FUNC_5 (int ,int *,int ,int ) ;
 int FUNC_6 (char const*,int *,int *) ;
 int VAR_4 ;
 int FUNC_7 (int *,int ,char const*,scalar_t__,int ,char const*,int *,int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int *,char const**,int ,char const*,int *,int *) ;
 int FUNC_10 (int*,int *,int *,int *,int *,int *,int *,int *,int *,int ,char const*,int *,int *) ;
 int FUNC_11 (int *,int *,int ,char const*,int ,int ,int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;

__attribute__((used)) static svn_error_t *
FUNC_12(svn_skel_t **VAR_16,
                    struct edit_baton *VAR_17,
                    const char *VAR_18,
                    svn_wc__db_status_t VAR_19,
                    svn_boolean_t VAR_20,
                    svn_node_kind_t VAR_21,
                    svn_wc_conflict_action_t VAR_22,
                    apr_pool_t *VAR_23,
                    apr_pool_t *VAR_24)
{
  svn_wc_conflict_reason_t VAR_25 = VAR_3;
  svn_boolean_t VAR_26 = VAR_0;
  const char *VAR_27 = ((void*)0);

  *VAR_16 = ((void*)0);



  switch (VAR_19)
    {
      case 137:
      case 131:
      case 135:
        if (!VAR_20)
          {
            FUNC_1(VAR_22 == VAR_5);


            if (VAR_19 == 137)
              FUNC_0(FUNC_10(&VAR_19, ((void*)0), ((void*)0),
                                               ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                               ((void*)0), ((void*)0),
                                               VAR_17->db, VAR_18,
                                               VAR_24, VAR_24));

            if (VAR_19 == 131)
              VAR_25 = VAR_13;
            else
              VAR_25 = VAR_9;
          }
        else
          {
            VAR_25 = VAR_15;
          }
        break;


      case 134:
        {
          FUNC_0(FUNC_9(((void*)0), ((void*)0), ((void*)0),
                                           &VAR_27,
                                           VAR_17->db, VAR_18,
                                           VAR_24, VAR_24));
          if (VAR_27)
            VAR_25 = VAR_12;
          else
            VAR_25 = VAR_10;
        }
        break;

      case 132:






      case 130:
        if (VAR_22 == VAR_7)
          {






            if (VAR_20)
              {
                svn_node_kind_t VAR_28;

                FUNC_0(FUNC_6(VAR_18, &VAR_28,
                                          VAR_24));

                if (VAR_28 != VAR_21 && VAR_28 != VAR_4)
                  {
                    VAR_25 = VAR_14;
                    break;
                  }

              }
            return VAR_2;
          }



        FUNC_1(VAR_22 == VAR_6);
        FUNC_0(FUNC_11(&VAR_26, ((void*)0),
                                            VAR_17->db, VAR_18, VAR_0,
                                            VAR_17->cancel_func, VAR_17->cancel_baton,
                                            VAR_24));

        if (VAR_26)
          {
            if (VAR_19 == 134)
              VAR_25 = VAR_10;
            else
              VAR_25 = VAR_11;
          }
        break;

      case 128:


      case 133:

      case 129:


        return VAR_2;

      case 136:

        FUNC_2();
        break;

    }

  if (VAR_25 == VAR_3)

    return VAR_2;




  if (VAR_25 == VAR_11
      || VAR_25 == VAR_14
      || VAR_25 == VAR_10
      || VAR_25 == VAR_12
      || VAR_25 == VAR_15)
    {



    if (VAR_22 != VAR_7
        && VAR_22 != VAR_6
        && VAR_22 != VAR_8)
      return FUNC_5(VAR_1, ((void*)0),
               FUNC_3("Unexpected attempt to add a node at path '%s'"),
               FUNC_4(VAR_18, VAR_24));
    }
  else if (VAR_25 == VAR_9 ||
           VAR_25 == VAR_13)
    {



      if (VAR_22 != VAR_5)
        return FUNC_5(VAR_1, ((void*)0),
                 FUNC_3("Unexpected attempt to edit, delete, or replace "
                   "a node at path '%s'"),
                 FUNC_4(VAR_18, VAR_24));

    }



  *VAR_16 = FUNC_8(VAR_23);

  FUNC_0(FUNC_7(*VAR_16,
                                                  VAR_17->db, VAR_18,
                                                  VAR_25,
                                                  VAR_22,
                                                  VAR_27,
                                                  VAR_23, VAR_24));

  return VAR_2;
}
