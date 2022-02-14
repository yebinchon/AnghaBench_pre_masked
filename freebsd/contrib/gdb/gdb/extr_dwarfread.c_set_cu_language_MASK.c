
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dieinfo {int at_language; int at_name; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_2 (struct dieinfo *VAR_7)
{
  switch (VAR_7->at_language)
    {
    case 135:
    case 136:
      VAR_0 = VAR_2;
      break;
    case 132:
      VAR_0 = VAR_3;
      break;
    case 129:
      VAR_0 = VAR_5;
      break;
    case 131:
    case 130:
      VAR_0 = VAR_4;
      break;
    case 137:
    case 134:
    case 133:
    case 128:

      VAR_0 = VAR_6;
      break;
    default:

      VAR_0 = FUNC_0 (VAR_7->at_name);
      break;
    }
  VAR_1 = FUNC_1 (VAR_0);
}
