
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct revert_baton_t {scalar_t__ clear_changelists; int * db; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,char const*,int *) ;
 int FUNC_3 (TYPE_1__*,char const*,int *) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (TYPE_1__*,int *,char const*,int,int *) ;
 int * FUNC_6 (int ,int *,int ,int ) ;
 int FUNC_7 (int *,char*,int ,char const*,...) ;
 scalar_t__ FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int ) ;
 char* FUNC_10 (int *,int,int *) ;
 int FUNC_11 (int **,int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (scalar_t__*,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int*,int *) ;
 int FUNC_16 (TYPE_1__*,char const*,int,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_17(void *VAR_12,
              svn_wc__db_wcroot_t *VAR_13,
              const char *VAR_14,
              apr_pool_t *VAR_15)
{
  struct revert_baton_t *VAR_16 = VAR_12;
  svn_wc__db_t *VAR_17 = VAR_16->db;
  svn_sqlite__stmt_t *VAR_18;
  svn_boolean_t VAR_19;
  int VAR_20;
  svn_boolean_t VAR_21;
  int VAR_22;
  const char *VAR_23;
  int VAR_24;




  FUNC_0(FUNC_11(&VAR_18, VAR_13->sdb,
                                    VAR_7));
  FUNC_0(FUNC_7(VAR_18, "is", VAR_13->wc_id, VAR_14));
  FUNC_0(FUNC_13(&VAR_19, VAR_18));
  if (!VAR_19)
    {
      FUNC_0(FUNC_12(VAR_18));


      FUNC_0(FUNC_11(&VAR_18, VAR_13->sdb,
                                        VAR_2));
      FUNC_0(FUNC_7(VAR_18, "is", VAR_13->wc_id, VAR_14));
      FUNC_0(FUNC_15(&VAR_22, VAR_18));
      if (VAR_22)
        {


          FUNC_0(FUNC_11(&VAR_18, VAR_13->sdb,
                                            VAR_0));
          FUNC_0(FUNC_7(VAR_18, "is", VAR_13->wc_id, VAR_14));
          FUNC_0(FUNC_13(&VAR_19, VAR_18));
          FUNC_0(FUNC_12(VAR_18));
          if (VAR_19)
            return FUNC_6(VAR_9, ((void*)0),
                                     FUNC_1("Can't revert '%s' without"
                                       " reverting children"),
                                     FUNC_3(VAR_13,
                                                            VAR_14,
                                                            VAR_15));
          return VAR_11;
        }

      return FUNC_6(VAR_10, ((void*)0),
                               FUNC_1("The node '%s' was not found."),
                               FUNC_3(VAR_13,
                                                      VAR_14,
                                                      VAR_15));
    }

  VAR_20 = FUNC_9(VAR_18, 0);
  VAR_21 = FUNC_8(VAR_18, 15);
  VAR_23 = FUNC_10(VAR_18, 17, VAR_15);

  FUNC_0(FUNC_13(&VAR_19, VAR_18));
  if (VAR_19)
    VAR_24 = FUNC_9(VAR_18, 0);
  else
    VAR_24 = -1;

  FUNC_0(FUNC_12(VAR_18));

  if (VAR_23)
    {
      FUNC_0(FUNC_16(VAR_13,
                                                VAR_14, VAR_20,
                                                VAR_23, ((void*)0), VAR_15));
    }

  if (VAR_20 > 0 && VAR_20 == FUNC_4(VAR_14))
    {
      int VAR_25;


      FUNC_0(FUNC_11(&VAR_18, VAR_13->sdb,
                                        VAR_6));
      FUNC_0(FUNC_7(VAR_18, "isd", VAR_13->wc_id,
                                VAR_14, VAR_20));
      FUNC_0(FUNC_13(&VAR_19, VAR_18));
      FUNC_0(FUNC_12(VAR_18));
      if (VAR_19)
        return FUNC_6(VAR_9, ((void*)0),
                                 FUNC_1("Can't revert '%s' without"
                                   " reverting children"),
                                 FUNC_3(VAR_13,
                                                        VAR_14,
                                                        VAR_15));



      FUNC_0(FUNC_11(&VAR_18, VAR_13->sdb,
                                     VAR_8));
      FUNC_0(FUNC_7(VAR_18, "isd", VAR_13->wc_id,
                                VAR_14,
                                VAR_20));
      FUNC_0(FUNC_15(&VAR_25, VAR_18));

      FUNC_0(FUNC_11(&VAR_18, VAR_13->sdb,
                                        VAR_5));
      FUNC_0(FUNC_7(VAR_18, "is", VAR_13->wc_id, VAR_14));
      FUNC_0(FUNC_14(VAR_18));


      FUNC_0(FUNC_11(&VAR_18, VAR_13->sdb,
                                        VAR_4));
      FUNC_0(FUNC_7(VAR_18, "is", VAR_13->wc_id, VAR_14));
      FUNC_0(FUNC_14(VAR_18));


      if (VAR_21)
        FUNC_0(FUNC_2(VAR_13, VAR_14, VAR_15));



      if (VAR_25 && !VAR_23)
        FUNC_0(FUNC_5(VAR_13, VAR_17, VAR_14,
                                              VAR_24, VAR_15));
    }

  if (VAR_16->clear_changelists)
    {
      FUNC_0(FUNC_11(&VAR_18, VAR_13->sdb,
                                        VAR_2));
      FUNC_0(FUNC_7(VAR_18, "is", VAR_13->wc_id, VAR_14));
      FUNC_0(FUNC_15(&VAR_22, VAR_18));
    }
  else
    {
      FUNC_0(FUNC_11(&VAR_18, VAR_13->sdb,
                                  VAR_3));
      FUNC_0(FUNC_7(VAR_18, "is", VAR_13->wc_id, VAR_14));
      FUNC_0(FUNC_15(&VAR_22, VAR_18));
      if (!VAR_22)
        {
          FUNC_0(FUNC_11(&VAR_18, VAR_13->sdb,
                                  VAR_1));
          FUNC_0(FUNC_7(VAR_18, "is", VAR_13->wc_id, VAR_14));
          FUNC_0(FUNC_15(&VAR_22, VAR_18));
        }
    }

  return VAR_11;
}
