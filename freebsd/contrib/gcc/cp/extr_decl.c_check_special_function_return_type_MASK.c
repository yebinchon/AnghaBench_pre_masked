
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char* tree ;
typedef int special_function_kind ;
struct TYPE_3__ {int (* cdtor_returns_this ) () ;} ;
struct TYPE_4__ {TYPE_1__ cxx; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*) ;



 int FUNC_6 () ;
 int FUNC_7 () ;
 TYPE_2__ VAR_0 ;
 char* VAR_1 ;

__attribute__((used)) static tree
FUNC_8 (special_function_kind VAR_2,
        tree VAR_3,
        tree VAR_4)
{
  switch (VAR_2)
    {
    case 130:
      if (VAR_3)
 FUNC_2 ("return type specification for constructor invalid");

      if (VAR_0.cxx.cdtor_returns_this () && !FUNC_0 (VAR_4))
 VAR_3 = FUNC_1 (VAR_4);
      else
 VAR_3 = VAR_1;
      break;

    case 128:
      if (VAR_3)
 FUNC_2 ("return type specification for destructor invalid");




      if (VAR_0.cxx.cdtor_returns_this () && !FUNC_0 (VAR_4))
 VAR_3 = FUNC_1 (VAR_1);
      else
 VAR_3 = VAR_1;
      break;

    case 129:
      if (VAR_3 && !FUNC_5 (VAR_3, VAR_4))
 FUNC_2 ("operator %qT declared to return %qT", VAR_4, VAR_3);
      else if (VAR_3)
 FUNC_4 ("return type specified for %<operator %T%>", VAR_4);
      VAR_3 = VAR_4;
      break;

    default:
      FUNC_3 ();
    }

  return VAR_3;
}
