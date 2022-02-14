
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int const svn_string_t ;
typedef int svn_revnum_t ;
struct TYPE_22__ {TYPE_2__* priv; } ;
typedef TYPE_1__ svn_ra_session_t ;
struct TYPE_23__ {int rev_stub; } ;
typedef TYPE_2__ svn_ra_serf__session_t ;
struct TYPE_24__ {char const* name; int const* value; } ;
typedef TYPE_3__ svn_prop_t ;
struct TYPE_25__ {scalar_t__ apr_err; struct TYPE_25__* child; } ;
typedef TYPE_4__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_26__ {char const* path; void* prop_changes; void* old_props; int base_revision; int * commit_ctx; int * pool; } ;
typedef TYPE_5__ proppatch_context_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_4__* VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 void* FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (int *,int) ;
 TYPE_5__* FUNC_5 (int *,int) ;
 char* FUNC_6 (int *,char*,int ,int ) ;
 TYPE_4__* FUNC_7 (TYPE_2__*,TYPE_5__*,int *) ;
 TYPE_4__* FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (void*,char const*,TYPE_3__*) ;
 int FUNC_10 (char const**,TYPE_2__*,int *) ;
 int FUNC_11 (char const**,TYPE_2__*,char const*,int ,char*,int *,int *) ;
 int FUNC_12 (TYPE_1__*,scalar_t__*,int ,int *) ;
 int FUNC_13 (TYPE_1__*,int ,char const*,int const**,int *) ;

svn_error_t *
FUNC_14(svn_ra_session_t *VAR_6,
                             svn_revnum_t VAR_7,
                             const char *VAR_8,
                             const svn_string_t *const *VAR_9,
                             const svn_string_t *VAR_10,
                             apr_pool_t *VAR_11)
{
  svn_ra_serf__session_t *VAR_12 = VAR_6->priv;
  proppatch_context_t *VAR_13;
  const char *VAR_14;
  const svn_string_t *VAR_15;
  svn_boolean_t VAR_16 = VAR_0;
  svn_prop_t *VAR_17;
  svn_error_t *VAR_18;

  if (VAR_9 || !VAR_10)
    FUNC_0(FUNC_12(VAR_6, &VAR_16,
                                        VAR_5,
                                        VAR_11));

  if (VAR_9)
    {

      FUNC_1(VAR_16);
    }
  else if (! VAR_10 && VAR_16)
    {
      svn_string_t *VAR_19;
      FUNC_0(FUNC_13(VAR_6, VAR_7, VAR_8, &VAR_19,
                                    VAR_11));

      if (!VAR_19)
        return VAR_4;


      VAR_15 = VAR_19;
      VAR_9 = &VAR_15;
    }

  if (FUNC_2(VAR_12))
    {
      VAR_14 = FUNC_6(VAR_11, "%s/%ld", VAR_12->rev_stub, VAR_7);
    }
  else
    {
      const char *VAR_20;

      FUNC_0(FUNC_10(&VAR_20, VAR_12, VAR_11));

      FUNC_0(FUNC_11(&VAR_14,
                                          VAR_12, VAR_20, VAR_7, "href",
                                          VAR_11, VAR_11));
    }


  VAR_13 = FUNC_5(VAR_11, sizeof(*VAR_13));
  VAR_13->pool = VAR_11;
  VAR_13->commit_ctx = ((void*)0);
  VAR_13->path = VAR_14;
  VAR_13->prop_changes = FUNC_3(VAR_11);
  VAR_13->base_revision = VAR_3;

  if (VAR_9)
    {
      VAR_17 = FUNC_4(VAR_11, sizeof (*VAR_17));

      VAR_17->name = VAR_8;
      VAR_17->value = *VAR_9;

      VAR_13->old_props = FUNC_3(VAR_11);
      FUNC_9(VAR_13->old_props, VAR_17->name, VAR_17);
    }

  VAR_17 = FUNC_4(VAR_11, sizeof (*VAR_17));

  VAR_17->name = VAR_8;
  VAR_17->value = VAR_10;
  FUNC_9(VAR_13->prop_changes, VAR_17->name, VAR_17);

  VAR_18 = FUNC_7(VAR_12, VAR_13, VAR_11);



  if (VAR_18 && VAR_18->apr_err == VAR_2)
    {
      svn_error_t *VAR_21 = VAR_18;

      while (VAR_21 && VAR_21->apr_err == VAR_2)
        {
          VAR_21->apr_err = VAR_1;
          VAR_21 = VAR_21->child;
        }
    }

  return FUNC_8(VAR_18);
}
