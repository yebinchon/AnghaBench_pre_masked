
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_21__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
struct TYPE_22__ {int node_status; int prop_status; char* local_abspath; char const* revision; scalar_t__ repos_node_status; char const* changed_rev; char* changed_author; TYPE_2__* lock; scalar_t__ copied; scalar_t__ wc_is_locked; scalar_t__ versioned; TYPE_1__* repos_lock; scalar_t__ moved_to_abspath; scalar_t__ moved_from_abspath; scalar_t__ conflicted; } ;
typedef TYPE_4__ svn_client_status_t ;
struct TYPE_23__ {int wc_ctx; } ;
typedef TYPE_5__ svn_client_ctx_t ;
typedef int svn_client_conflict_t ;
typedef scalar_t__ svn_boolean_t ;
typedef enum svn_wc_status_kind { ____Placeholder_svn_wc_status_kind } svn_wc_status_kind ;
typedef int apr_pool_t ;
struct TYPE_20__ {scalar_t__ token; } ;
struct TYPE_19__ {scalar_t__ token; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (char const*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (int *,char*,char const*) ;
 char* FUNC_4 (int *,char*,char*,int ) ;
 int FUNC_5 (TYPE_4__ const*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_4__ const*) ;
 char* FUNC_8 (char const*,char const*,scalar_t__,int *,int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 TYPE_3__* FUNC_10 (char const**,int *,int *) ;
 TYPE_3__* FUNC_11 (int **,char const*,TYPE_5__*,int *,int *) ;
 TYPE_3__* FUNC_12 (int ) ;
 TYPE_3__* FUNC_13 (int *,char*,int ,int ,char,char,int ,char,char,...) ;
 char* FUNC_14 (char const*,int *) ;
 int FUNC_15 (TYPE_3__*) ;
 TYPE_3__* FUNC_16 (scalar_t__*,scalar_t__*,scalar_t__*,int ,char const*,int *) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static svn_error_t *
FUNC_17(const char *VAR_7,
             const char *VAR_8,
             const char *VAR_9,
             svn_boolean_t VAR_10,
             svn_boolean_t VAR_11,
             svn_boolean_t VAR_12,
             const svn_client_status_t *VAR_13,
             unsigned int *VAR_14,
             unsigned int *VAR_15,
             unsigned int *VAR_16,
             svn_client_ctx_t *VAR_17,
             apr_pool_t *VAR_18)
{
  enum svn_wc_status_kind VAR_19 = VAR_13->node_status;
  enum svn_wc_status_kind VAR_20 = VAR_13->prop_status;
  char VAR_21 = ' ';
  const char *VAR_22 = "";
  const char *VAR_23 = "";
  const char *VAR_24 = "";
  if (VAR_19 == VAR_5)
      VAR_20 = VAR_6;





  if (VAR_13->conflicted)
    {
      const char *VAR_25;
      const char *VAR_26 = VAR_13->local_abspath;
      svn_boolean_t VAR_27;
      svn_boolean_t VAR_28;
      svn_boolean_t VAR_29;

      if (VAR_13->versioned)
        {
          svn_error_t *VAR_30;

          VAR_30 = FUNC_16(&VAR_27,
                                     &VAR_28,
                                     &VAR_29, VAR_17->wc_ctx,
                                     VAR_26, VAR_18);

          if (VAR_30 && VAR_30->apr_err == VAR_1)
            {
              FUNC_15(VAR_30);
              VAR_27 = VAR_0;
              VAR_28 = VAR_0;
              VAR_29 = VAR_0;
            }
          else
            FUNC_0(VAR_30);
        }
      else
        {
          VAR_27 = VAR_0;
          VAR_28 = VAR_0;
          VAR_29 = VAR_3;
        }

      if (VAR_29)
        {
          svn_client_conflict_t *VAR_31;

          FUNC_0(FUNC_11(&VAR_31, VAR_26,
                                          VAR_17, VAR_18, VAR_18));
          VAR_21 = 'C';
          FUNC_0(FUNC_10(
                            &VAR_25, VAR_31, VAR_18));
          VAR_22 = FUNC_3(VAR_18, "\n      >   %s", VAR_25);
          (*VAR_16)++;
        }
      else if (VAR_27)
        (*VAR_14)++;
      else if (VAR_28)
        (*VAR_15)++;
    }




  if (VAR_13->moved_from_abspath && VAR_13->moved_to_abspath &&
      FUNC_9(VAR_13->moved_from_abspath, VAR_13->moved_to_abspath) == 0)
    {
      const char *VAR_32;

      VAR_32 = FUNC_8(VAR_7, VAR_8,
                             VAR_13->moved_from_abspath,
                             VAR_18, VAR_18);
      VAR_32 = FUNC_14(VAR_32, VAR_18);
      VAR_23 = FUNC_4(VAR_18, "\n        > ",
                                    FUNC_3(VAR_18,
                                                 FUNC_2("swapped places with %s"),
                                                 VAR_32),
                                    VAR_2);
    }
  else if (VAR_13->moved_from_abspath || VAR_13->moved_to_abspath)
    {
      const char *VAR_33;

      if (VAR_13->moved_from_abspath)
        {
          VAR_33 = FUNC_8(VAR_7, VAR_8,
                                 VAR_13->moved_from_abspath,
                                 VAR_18, VAR_18);
          VAR_33 = FUNC_14(VAR_33, VAR_18);
          VAR_23 = FUNC_4(VAR_18, "\n        > ",
                                        FUNC_3(VAR_18, FUNC_2("moved from %s"),
                                                     VAR_33),
                                        VAR_2);
        }

      if (VAR_13->moved_to_abspath)
        {
          VAR_33 = FUNC_8(VAR_7, VAR_8,
                                 VAR_13->moved_to_abspath,
                                 VAR_18, VAR_18);
          VAR_33 = FUNC_14(VAR_33, VAR_18);
          VAR_24 = FUNC_4(VAR_18, "\n        > ",
                                      FUNC_3(VAR_18, FUNC_2("moved to %s"),
                                                   VAR_33),
                                      VAR_2);
        }
    }

  VAR_9 = FUNC_14(VAR_9, VAR_18);

  if (VAR_10)
    {
      char VAR_34, VAR_35;
      const char *VAR_36;

      if (! VAR_13->versioned)
        VAR_36 = "";
      else if (VAR_13->copied
               || ! FUNC_1(VAR_13->revision))
        VAR_36 = "-";
      else
        VAR_36 = FUNC_3(VAR_18, "%ld", VAR_13->revision);

      if (VAR_13->repos_node_status != VAR_6)
        VAR_34 = '*';
      else
        VAR_34 = ' ';

      if (VAR_12)
        {
          if (VAR_13->repos_lock)
            {
              if (VAR_13->lock)
                {
                  if (FUNC_9(VAR_13->repos_lock->token, VAR_13->lock->token)
                      == 0)
                    VAR_35 = 'K';
                  else
                    VAR_35 = 'T';
                }
              else
                VAR_35 = 'O';
            }
          else if (VAR_13->lock)
            VAR_35 = 'B';
          else
            VAR_35 = ' ';
        }
      else
        VAR_35 = (VAR_13->lock) ? 'K' : ' ';

      if (VAR_11)
        {
          const char *VAR_37;
          const char *VAR_38;

          if (FUNC_1(VAR_13->changed_rev))
            VAR_37 = FUNC_3(VAR_18, "%ld", VAR_13->changed_rev);
          else if (VAR_13->versioned)
            VAR_37 = " ? ";
          else
            VAR_37 = "";

          if (VAR_13->changed_author)
            VAR_38 = VAR_13->changed_author;
          else if (VAR_13->versioned)
            VAR_38 = " ? ";
          else
            VAR_38 = "";

          FUNC_0
            (FUNC_13(VAR_18,
                                "%c%c%c%c%c%c%c %c %8s %8s %-12s %s%s%s%s\n",
                                FUNC_6(FUNC_5(VAR_13)),
                                FUNC_6(VAR_20),
                                VAR_13->wc_is_locked ? 'L' : ' ',
                                VAR_13->copied ? '+' : ' ',
                                FUNC_7(VAR_13),
                                VAR_35,
                                VAR_21,
                                VAR_34,
                                VAR_36,
                                VAR_37,
                                VAR_38,
                                VAR_9,
                                VAR_24,
                                VAR_23,
                                VAR_22));
        }
      else
        FUNC_0(
           FUNC_13(VAR_18, "%c%c%c%c%c%c%c %c %8s   %s%s%s%s\n",
                              FUNC_6(FUNC_5(VAR_13)),
                              FUNC_6(VAR_20),
                              VAR_13->wc_is_locked ? 'L' : ' ',
                              VAR_13->copied ? '+' : ' ',
                              FUNC_7(VAR_13),
                              VAR_35,
                              VAR_21,
                              VAR_34,
                              VAR_36,
                              VAR_9,
                              VAR_24,
                              VAR_23,
                              VAR_22));
    }
  else
    FUNC_0(
       FUNC_13(VAR_18, "%c%c%c%c%c%c%c %s%s%s%s\n",
                          FUNC_6(FUNC_5(VAR_13)),
                          FUNC_6(VAR_20),
                          VAR_13->wc_is_locked ? 'L' : ' ',
                          VAR_13->copied ? '+' : ' ',
                          FUNC_7(VAR_13),
                          ((VAR_13->lock)
                           ? 'K' : ' '),
                          VAR_21,
                          VAR_9,
                          VAR_24,
                          VAR_23,
                          VAR_22));

  return FUNC_12(VAR_4);
}
