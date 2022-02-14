
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef int svn_repos_t ;
struct TYPE_4__ {scalar_t__ number; int date; } ;
struct TYPE_5__ {scalar_t__ kind; TYPE_1__ value; } ;
typedef TYPE_2__ svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int ) ;
 int * FUNC_3 (int ,int *,int ,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (scalar_t__*,int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_revnum_t *VAR_7, const svn_opt_revision_t *VAR_8,
           svn_revnum_t VAR_9, svn_repos_t *VAR_10, apr_pool_t *VAR_11)
{
  if (VAR_8->kind == VAR_5)
    *VAR_7 = VAR_8->value.number;
  else if (VAR_8->kind == VAR_4)
    *VAR_7 = VAR_9;
  else if (VAR_8->kind == VAR_3)
    FUNC_0(FUNC_4(VAR_7, VAR_10, VAR_8->value.date,
                                     VAR_11));
  else if (VAR_8->kind == VAR_6)
    *VAR_7 = VAR_1;
  else
    return FUNC_2(VAR_0, ((void*)0),
                            FUNC_1("Invalid revision specifier"));

  if (*VAR_7 > VAR_9)
    return FUNC_3(VAR_0, ((void*)0),
       FUNC_1("Revisions must not be greater than the youngest revision (%ld)"),
       VAR_9);

  return VAR_2;
}
