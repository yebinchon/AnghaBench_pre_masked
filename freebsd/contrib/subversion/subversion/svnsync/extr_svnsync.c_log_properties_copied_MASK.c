
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,int ,...) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_boolean_t VAR_2,
                      svn_revnum_t VAR_3,
                      apr_pool_t *VAR_4)
{
  if (VAR_2)
    FUNC_0(FUNC_2(VAR_4,
                               FUNC_1("Copied properties for revision %ld "
                                 "(%s* properties skipped).\n"),
                               VAR_3, VAR_0));
  else
    FUNC_0(FUNC_2(VAR_4,
                               FUNC_1("Copied properties for revision %ld.\n"),
                               VAR_3));

  return VAR_1;
}
