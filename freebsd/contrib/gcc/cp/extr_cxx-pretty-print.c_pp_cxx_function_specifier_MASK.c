
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int cxx_pretty_printer ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,char*) ;

__attribute__((used)) static void
FUNC_7 (cxx_pretty_printer *VAR_0, tree VAR_1)
{
  switch (FUNC_3 (VAR_1))
    {
    case 128:
      if (FUNC_2 (VAR_1))
 FUNC_6 (VAR_0, "virtual");
      else if (FUNC_0 (VAR_1) && FUNC_1 (VAR_1))
 FUNC_6 (VAR_0, "explicit");
      else
 FUNC_5 (FUNC_4 (VAR_0), VAR_1);

    default:
      break;
    }
}
