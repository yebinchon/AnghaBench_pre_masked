
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_operation_t ;


 int FUNC_0 () ;
 char const* FUNC_1 (char*) ;





__attribute__((used)) static const char *
FUNC_2(svn_wc_operation_t VAR_0)
{
  switch (VAR_0)
    {
    case 128: return FUNC_1("upon update");
    case 129: return FUNC_1("upon switch");
    case 131: return FUNC_1("upon merge");
    case 130: return FUNC_1("upon none");
    }
  FUNC_0();
  return ((void*)0);
}
