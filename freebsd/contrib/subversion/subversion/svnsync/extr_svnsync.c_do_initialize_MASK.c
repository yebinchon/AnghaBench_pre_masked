
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_ra_session_t ;
struct TYPE_16__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_17__ {char const* from_url; int source_prop_encoding; int quiet; int config; int source_callbacks; int allow_non_empty; } ;
typedef TYPE_3__ subcommand_baton_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_2__* VAR_7 ;
 int VAR_8 ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (int *,int *,scalar_t__,int ,int ,int ,int ,int*,int *) ;
 int FUNC_3 (int,int ,int *) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;
 TYPE_2__* FUNC_5 (int ,TYPE_2__*,int *) ;
 TYPE_2__* FUNC_6 (int ,int *,int *,int ) ;
 TYPE_2__* FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *,int ,int ,int *,int ,int *) ;
 int FUNC_9 (int *,scalar_t__*,int *) ;
 int FUNC_10 (int *,char const**,int *) ;
 int FUNC_11 (int *,char const**,int *) ;
 TYPE_2__* FUNC_12 (int *,int *,int ,int *) ;
 int FUNC_13 (int **,int *,char const*,int *,int *,TYPE_3__*,int ,int *) ;
 int FUNC_14 (int *,int ,int ,TYPE_1__**,int *) ;
 int FUNC_15 (char const*,int *) ;
 int FUNC_16 (int *,char*,scalar_t__) ;

__attribute__((used)) static svn_error_t *
FUNC_17(svn_ra_session_t *VAR_9,
              subcommand_baton_t *VAR_10,
              apr_pool_t *VAR_11)
{
  svn_ra_session_t *VAR_12;
  svn_string_t *VAR_13;
  svn_revnum_t VAR_14, VAR_15;
  const char *VAR_16, *VAR_17;
  int VAR_18;




  FUNC_0(FUNC_9(VAR_9, &VAR_14, VAR_11));
  if ((VAR_14 != 0) && (! VAR_10->allow_non_empty))
    return FUNC_5
      (VAR_0, ((void*)0),
       FUNC_1("Destination repository already contains revision history; consider "
         "using --allow-non-empty if the repository's revisions are known "
         "to mirror their respective revisions in the source repository"));

  FUNC_0(FUNC_14(VAR_9, 0, VAR_2,
                          &VAR_13, VAR_11));
  if (VAR_13 && (! VAR_10->allow_non_empty))
    return FUNC_6
      (VAR_0, ((void*)0),
       FUNC_1("Destination repository is already synchronizing from '%s'"),
       VAR_13->data);



  FUNC_0(FUNC_13(&VAR_12, ((void*)0), VAR_10->from_url, ((void*)0),
                       &(VAR_10->source_callbacks), VAR_10,
                       VAR_10->config, VAR_11));
  FUNC_0(FUNC_10(VAR_12, &VAR_17, VAR_11));



  if (FUNC_4(VAR_17, VAR_10->from_url) != 0)
    {
      svn_boolean_t VAR_19;
      svn_error_t *VAR_20 = FUNC_12(VAR_12,
                                               &VAR_19,
                                               VAR_8,
                                               VAR_11);
      if (VAR_20 && VAR_20->apr_err != VAR_6)
        return FUNC_7(VAR_20);

      if (VAR_20 || !VAR_19)
        return FUNC_5(VAR_5, VAR_20,
                                ((void*)0));
    }



  if (VAR_14 != 0)
    {
      FUNC_0(FUNC_9(VAR_12, &VAR_15, VAR_11));
      if (VAR_15 < VAR_14)
        return FUNC_5
          (VAR_0, ((void*)0),
           FUNC_1("Destination repository has more revisions than source "
             "repository"));
    }

  FUNC_0(FUNC_8(VAR_9, 0, VAR_2, ((void*)0),
                                  FUNC_15(VAR_10->from_url, VAR_11),
                                  VAR_11));

  FUNC_0(FUNC_11(VAR_12, &VAR_16, VAR_11));
  FUNC_0(FUNC_8(VAR_9, 0, VAR_3, ((void*)0),
                                  FUNC_15(VAR_16, VAR_11), VAR_11));

  FUNC_0(FUNC_8(VAR_9, 0, VAR_4,
                                  ((void*)0), FUNC_16(VAR_11, "%ld", VAR_14),
                                  VAR_11));
  FUNC_0(FUNC_2(VAR_12, VAR_9, VAR_14, VAR_1, VAR_1,
                        VAR_10->quiet, VAR_10->source_prop_encoding,
                        &VAR_18, VAR_11));

  FUNC_0(FUNC_3(VAR_18, 0, VAR_11));
  return VAR_7;
}
