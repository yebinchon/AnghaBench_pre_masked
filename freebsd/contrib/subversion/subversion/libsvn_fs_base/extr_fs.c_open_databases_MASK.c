
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int pool; int path; TYPE_3__* fsap_data; int * vtable; } ;
typedef TYPE_1__ svn_fs_t ;
struct TYPE_17__ {int apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_18__ {TYPE_5__* bdb; int checksum_reps; int miscellaneous; int node_origins; int lock_tokens; int locks; int uuids; int strings; int representations; int changes; int copies; int transactions; int revisions; int nodes; } ;
typedef TYPE_3__ base_fs_data_t ;
struct TYPE_19__ {int env; } ;


 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_3 (char*) ;
 TYPE_3__* FUNC_4 (int ,int) ;
 int VAR_6 ;
 int FUNC_5 (int ,TYPE_1__*,int ,int ) ;
 int FUNC_6 (int ,char const*) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__* FUNC_8 (int ,TYPE_2__*,int ,int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 TYPE_2__* FUNC_10 (TYPE_5__**,char const*,int ,int,int ) ;
 int FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (int *,int ,int ) ;
 int FUNC_14 (int *,int ,int ) ;
 int FUNC_15 (int *,int ,int ) ;
 int FUNC_16 (int *,int ,int ) ;
 int FUNC_17 (int *,int ,int ) ;
 int FUNC_18 (int *,int ,int ) ;
 int FUNC_19 (int *,int ,int ) ;
 int FUNC_20 (int *,int ,int ) ;
 int FUNC_21 (int *,int ,int ) ;
 int FUNC_22 (int *,int ,int ) ;
 int FUNC_23 (int *,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_24(svn_fs_t *VAR_9,
               svn_boolean_t VAR_10,
               int VAR_11,
               const char *VAR_12)
{
  base_fs_data_t *VAR_13;

  FUNC_2(FUNC_9(VAR_9, VAR_0));

  VAR_13 = FUNC_4(VAR_9->pool, sizeof(*VAR_13));
  VAR_9->vtable = &VAR_8;
  VAR_9->fsap_data = VAR_13;


  VAR_9->path = FUNC_6(VAR_9->pool, VAR_12);

  if (VAR_10)
    FUNC_2(FUNC_7(VAR_9));


  {
    svn_error_t *VAR_14 = FUNC_10(&(VAR_13->bdb), VAR_12,
                                        VAR_1,
                                        0666, VAR_9->pool);
    if (VAR_14)
      {
        if (VAR_10)
          return FUNC_8
            (VAR_14->apr_err, VAR_14,
             FUNC_3("Berkeley DB error for filesystem '%s'"
               " while creating environment:\n"),
             VAR_9->path);
        else
          return FUNC_8
            (VAR_14->apr_err, VAR_14,
             FUNC_3("Berkeley DB error for filesystem '%s'"
               " while opening environment:\n"),
             VAR_9->path);
      }
  }




  FUNC_5(VAR_9->pool, VAR_9, VAR_7,
                            VAR_6);



  FUNC_2(FUNC_0(VAR_9, (VAR_10
                        ? FUNC_1("creating 'nodes' table")
                        : FUNC_1("opening 'nodes' table")),
                   FUNC_18(&VAR_13->nodes,
                                                VAR_13->bdb->env,
                                                VAR_10)));
  FUNC_2(FUNC_0(VAR_9, (VAR_10
                        ? FUNC_1("creating 'revisions' table")
                        : FUNC_1("opening 'revisions' table")),
                   FUNC_20(&VAR_13->revisions,
                                                    VAR_13->bdb->env,
                                                    VAR_10)));
  FUNC_2(FUNC_0(VAR_9, (VAR_10
                        ? FUNC_1("creating 'transactions' table")
                        : FUNC_1("opening 'transactions' table")),
                   FUNC_22(&VAR_13->transactions,
                                                       VAR_13->bdb->env,
                                                       VAR_10)));
  FUNC_2(FUNC_0(VAR_9, (VAR_10
                        ? FUNC_1("creating 'copies' table")
                        : FUNC_1("opening 'copies' table")),
                   FUNC_13(&VAR_13->copies,
                                                 VAR_13->bdb->env,
                                                 VAR_10)));
  FUNC_2(FUNC_0(VAR_9, (VAR_10
                        ? FUNC_1("creating 'changes' table")
                        : FUNC_1("opening 'changes' table")),
                   FUNC_11(&VAR_13->changes,
                                                  VAR_13->bdb->env,
                                                  VAR_10)));
  FUNC_2(FUNC_0(VAR_9, (VAR_10
                        ? FUNC_1("creating 'representations' table")
                        : FUNC_1("opening 'representations' table")),
                   FUNC_19(&VAR_13->representations,
                                               VAR_13->bdb->env,
                                               VAR_10)));
  FUNC_2(FUNC_0(VAR_9, (VAR_10
                        ? FUNC_1("creating 'strings' table")
                        : FUNC_1("opening 'strings' table")),
                   FUNC_21(&VAR_13->strings,
                                                  VAR_13->bdb->env,
                                                  VAR_10)));
  FUNC_2(FUNC_0(VAR_9, (VAR_10
                        ? FUNC_1("creating 'uuids' table")
                        : FUNC_1("opening 'uuids' table")),
                   FUNC_23(&VAR_13->uuids,
                                                VAR_13->bdb->env,
                                                VAR_10)));
  FUNC_2(FUNC_0(VAR_9, (VAR_10
                        ? FUNC_1("creating 'locks' table")
                        : FUNC_1("opening 'locks' table")),
                   FUNC_15(&VAR_13->locks,
                                                VAR_13->bdb->env,
                                                VAR_10)));
  FUNC_2(FUNC_0(VAR_9, (VAR_10
                        ? FUNC_1("creating 'lock-tokens' table")
                        : FUNC_1("opening 'lock-tokens' table")),
                   FUNC_14(&VAR_13->lock_tokens,
                                                      VAR_13->bdb->env,
                                                      VAR_10)));

  if (VAR_11 >= VAR_3)
    {
      FUNC_2(FUNC_0(VAR_9, (VAR_10
                            ? FUNC_1("creating 'node-origins' table")
                            : FUNC_1("opening 'node-origins' table")),
                       FUNC_17(&VAR_13->node_origins,
                                                           VAR_13->bdb->env,
                                                           VAR_10)));
    }

  if (VAR_11 >= VAR_2)
    {
      FUNC_2(FUNC_0(VAR_9, (VAR_10
                            ? FUNC_1("creating 'miscellaneous' table")
                            : FUNC_1("opening 'miscellaneous' table")),
                       FUNC_16(&VAR_13->miscellaneous,
                                                            VAR_13->bdb->env,
                                                            VAR_10)));
    }

  if (VAR_11 >= VAR_4)
    {
      FUNC_2(FUNC_0(VAR_9, (VAR_10
                            ? FUNC_1("creating 'checksum-reps' table")
                            : FUNC_1("opening 'checksum-reps' table")),
                       FUNC_12(&VAR_13->checksum_reps,
                                                            VAR_13->bdb->env,
                                                            VAR_10)));
    }

  return VAR_5;
}
