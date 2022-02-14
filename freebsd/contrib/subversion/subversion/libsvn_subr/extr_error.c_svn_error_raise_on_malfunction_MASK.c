
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_boolean_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char const*,int) ;
 int * FUNC_3 (int ,int *,int ,char const*,int,...) ;

svn_error_t *
FUNC_4(svn_boolean_t VAR_1,
                               const char *VAR_2, int VAR_3,
                               const char *VAR_4)
{
  if (!VAR_1)
    FUNC_1();




  FUNC_2(VAR_2, VAR_3);

  if (VAR_4)
    return FUNC_3(VAR_0, ((void*)0),
                             FUNC_0("In file '%s' line %d: assertion failed (%s)"),
                             VAR_2, VAR_3, VAR_4);
  else
    return FUNC_3(VAR_0, ((void*)0),
                             FUNC_0("In file '%s' line %d: internal malfunction"),
                             VAR_2, VAR_3);
}
