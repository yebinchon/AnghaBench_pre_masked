
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int cxx_pretty_printer ;





 size_t FUNC_0 (int ) ;


 int FUNC_1 (int *,char const*) ;
 char** VAR_0 ;

__attribute__((used)) static void
FUNC_2 (cxx_pretty_printer *VAR_1, tree VAR_2)
{
  const char *VAR_3;

  switch (FUNC_0 (VAR_2))
    {
    case 131:
      VAR_3 = "=";
      break;

    case 130:
      VAR_3 = "+=";
      break;

    case 132:
      VAR_3 = "-=";
      break;

    case 129:
      VAR_3 = "/=";
      break;

    case 128:
      VAR_3 = "%=";
      break;

    default:
      VAR_3 = VAR_0[FUNC_0 (VAR_2)];
      break;
    }

  FUNC_1 (VAR_1, VAR_3);
}
