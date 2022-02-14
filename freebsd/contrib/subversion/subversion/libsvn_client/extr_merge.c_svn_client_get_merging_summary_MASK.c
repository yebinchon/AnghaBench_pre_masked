
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_18__ {scalar_t__ kind; } ;
typedef TYPE_5__ svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int svn_boolean_t ;
struct TYPE_19__ {int is_reintegrate_like; TYPE_4__* yca; TYPE_3__* target; TYPE_2__* right; TYPE_1__* base; } ;
typedef TYPE_6__ automatic_merge_t ;
typedef int apr_pool_t ;
struct TYPE_17__ {int repos_root_url; int rev; int url; } ;
struct TYPE_16__ {int rev; int url; } ;
struct TYPE_15__ {int rev; int url; } ;
struct TYPE_14__ {int rev; int url; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_6__**,char const*,TYPE_5__ const*,char const*,int ,int ,int ,int *,int *,int *) ;
 int FUNC_3 (TYPE_6__**,char const*,TYPE_5__ const*,char const*,TYPE_5__ const*,int *,int *,int *) ;
 int FUNC_4 (char const**,char const*,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (char const*) ;

svn_error_t *
FUNC_6(svn_boolean_t *VAR_5,
                               const char **VAR_6, svn_revnum_t *VAR_7,
                               const char **VAR_8, svn_revnum_t *VAR_9,
                               const char **VAR_10, svn_revnum_t *VAR_11,
                               const char **VAR_12, svn_revnum_t *VAR_13,
                               const char **VAR_14,
                               const char *VAR_15,
                               const svn_opt_revision_t *VAR_16,
                               const char *VAR_17,
                               const svn_opt_revision_t *VAR_18,
                               svn_client_ctx_t *VAR_19,
                               apr_pool_t *VAR_20,
                               apr_pool_t *VAR_21)
{
  svn_boolean_t VAR_22;
  automatic_merge_t *VAR_23;

  VAR_22 = (! FUNC_5(VAR_17))
                 && (VAR_18->kind == VAR_3
                     || VAR_18->kind == VAR_4
                     || VAR_18->kind == VAR_2);
  if (VAR_22)
    {
      const char *VAR_24;

      FUNC_0(FUNC_4(&VAR_24, VAR_17,
                                      VAR_21));
      FUNC_0(FUNC_2(
                &VAR_23,
                VAR_15, VAR_16,
                VAR_24,
                VAR_1, VAR_1, VAR_1,
                VAR_19, VAR_21, VAR_21));
    }
  else
    FUNC_0(FUNC_3(
              &VAR_23,
              VAR_15, VAR_16,
              VAR_17, VAR_18,
              VAR_19, VAR_21, VAR_21));

  if (VAR_5)
    *VAR_5 = VAR_23->is_reintegrate_like;
  if (VAR_6)
    *VAR_6 = FUNC_1(VAR_20, VAR_23->yca->url);
  if (VAR_7)
    *VAR_7 = VAR_23->yca->rev;
  if (VAR_8)
    *VAR_8 = FUNC_1(VAR_20, VAR_23->base->url);
  if (VAR_9)
    *VAR_9 = VAR_23->base->rev;
  if (VAR_10)
    *VAR_10 = FUNC_1(VAR_20, VAR_23->right->url);
  if (VAR_11)
    *VAR_11 = VAR_23->right->rev;
  if (VAR_12)
    *VAR_12 = FUNC_1(VAR_20, VAR_23->target->url);
  if (VAR_13)
    *VAR_13 = VAR_23->target->rev;
  if (VAR_14)
    *VAR_14 = FUNC_1(VAR_20, VAR_23->yca->repos_root_url);

  return VAR_0;
}
