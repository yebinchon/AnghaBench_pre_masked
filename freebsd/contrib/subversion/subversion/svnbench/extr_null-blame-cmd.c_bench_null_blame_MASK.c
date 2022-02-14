
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef int svn_ra_session_t ;
struct TYPE_17__ {scalar_t__ number; } ;
struct TYPE_18__ {scalar_t__ kind; TYPE_1__ value; } ;
typedef TYPE_2__ svn_opt_revision_t ;
typedef int svn_error_t ;
struct TYPE_19__ {int wc_ctx; } ;
typedef TYPE_3__ svn_client_ctx_t ;
struct TYPE_20__ {int url; } ;
typedef TYPE_4__ svn_client__pathrev_t ;
typedef int svn_boolean_t ;
struct file_rev_baton {int byte_count; int delta_count; int rev_count; int member_2; int member_1; int member_0; } ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int FUNC_3 (int ,char,int *) ;
 int FUNC_4 (scalar_t__*,int *,int ,char const*,int *,TYPE_2__ const*,int *) ;
 int FUNC_5 (int **,int *,char const*,int *,TYPE_2__ const*,TYPE_2__ const*,TYPE_3__*,int *) ;
 int FUNC_6 (TYPE_4__**,int *,char const*,TYPE_2__ const*,TYPE_2__*,TYPE_3__*,int *) ;
 int FUNC_7 (int *,int ,int ,int ,int ) ;
 int FUNC_8 (char const**,char const*,int *) ;
 int * FUNC_9 (int ,int *,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_10 (char const*) ;
 int FUNC_11 (int *,char*,scalar_t__,scalar_t__,int,int ,struct file_rev_baton*,int *) ;
 int FUNC_12 (int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_13(const char *VAR_5,
                 const svn_opt_revision_t *VAR_6,
                 const svn_opt_revision_t *VAR_7,
                 const svn_opt_revision_t *VAR_8,
                 svn_boolean_t VAR_9,
                 svn_boolean_t VAR_10,
                 svn_client_ctx_t *VAR_11,
                 apr_pool_t *VAR_12)
{
  struct file_rev_baton VAR_13 = { 0, 0, 0};
  svn_ra_session_t *VAR_14;
  svn_revnum_t VAR_15, VAR_16;
  svn_boolean_t VAR_17;
  const char *VAR_18;

  if (VAR_7->kind == VAR_4
      || VAR_8->kind == VAR_4)
    return FUNC_9
      (VAR_0, ((void*)0), ((void*)0));

  if (FUNC_10(VAR_5))
    VAR_18 = VAR_5;
  else
    FUNC_1(FUNC_8(&VAR_18, VAR_5, VAR_12));



  FUNC_1(FUNC_5(&VAR_14, ((void*)0),
                                            VAR_5, ((void*)0), VAR_6,
                                            VAR_6,
                                            VAR_11, VAR_12));

  FUNC_1(FUNC_4(&VAR_15, ((void*)0), VAR_11->wc_ctx,
                                          VAR_18, VAR_14,
                                          VAR_7, VAR_12));

  FUNC_1(FUNC_4(&VAR_16, ((void*)0), VAR_11->wc_ctx,
                                          VAR_18, VAR_14,
                                          VAR_8, VAR_12));

  {
    svn_client__pathrev_t *VAR_19;
    svn_opt_revision_t VAR_20;
    VAR_20.kind = VAR_3;
    VAR_20.value.number = FUNC_0(VAR_15, VAR_16);

    FUNC_1(FUNC_6(&VAR_19, VAR_14,
                                            VAR_5, VAR_6,
                                            &VAR_20,
                                            VAR_11, VAR_12));


    FUNC_1(FUNC_12(VAR_14, VAR_19->url, VAR_12));
  }

  VAR_17 = (VAR_15 > VAR_16);





  FUNC_1(FUNC_11(VAR_14, "",
                                VAR_17 ? VAR_15
                                          : FUNC_0(0, VAR_15-1),
                                VAR_16,
                                VAR_9,
                                VAR_2, &VAR_13, VAR_12));

  if (!VAR_10)
    FUNC_1(FUNC_7(VAR_12,
                               FUNC_2("%15s revisions\n"
                                 "%15s deltas\n"
                                 "%15s bytes in deltas\n"),
                               FUNC_3(VAR_13.rev_count, ',', VAR_12),
                               FUNC_3(VAR_13.delta_count, ',', VAR_12),
                               FUNC_3(VAR_13.byte_count, ',', VAR_12)));

  return VAR_1;
}
