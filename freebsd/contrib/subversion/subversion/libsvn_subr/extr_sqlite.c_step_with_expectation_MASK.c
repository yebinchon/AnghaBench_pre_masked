
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_sqlite__stmt_t* VAR_2,
                      svn_boolean_t VAR_3)
{
  svn_boolean_t VAR_4;

  FUNC_0(FUNC_4(&VAR_4, VAR_2));
  if ((VAR_4 && !VAR_3)
      ||
      (!VAR_4 && VAR_3))
    return FUNC_2(VAR_0,
                            FUNC_3(VAR_2),
                            VAR_3
                              ? FUNC_1("sqlite: Expected database row missing")
                              : FUNC_1("sqlite: Extra database row found"));

  return VAR_1;
}
