
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,int *) ;
 int * FUNC_2 (int ,int *,int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const char *VAR_5,
                                 const svn_opt_revision_t *VAR_6,
                                 apr_pool_t *VAR_7)
{
  if (VAR_6->kind != VAR_4
      && VAR_6->kind != VAR_2
      && VAR_6->kind != VAR_3
      && ! FUNC_3(VAR_5))
    return FUNC_2(
      VAR_0, ((void*)0),
      FUNC_0("Invalid merge source '%s'; a working copy path can only be "
        "used with a repository revision (a number, a date, or head)"),
      FUNC_1(VAR_5, VAR_7));
  return VAR_1;
}
