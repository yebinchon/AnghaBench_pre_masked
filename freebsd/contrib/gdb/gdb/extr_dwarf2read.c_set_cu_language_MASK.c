
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf2_cu {int language; int language_defn; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_1 (unsigned int VAR_6, struct dwarf2_cu *VAR_7)
{
  switch (VAR_6)
    {
    case 138:
    case 139:
      VAR_7->language = VAR_1;
      break;
    case 137:
      VAR_7->language = VAR_2;
      break;
    case 134:
    case 133:
    case 132:
      VAR_7->language = VAR_3;
      break;
    case 130:
      VAR_7->language = VAR_0;
      break;
    case 131:
      VAR_7->language = VAR_4;
      break;
    case 141:
    case 140:
    case 136:
    case 135:
    case 128:
    case 129:
    default:
      VAR_7->language = VAR_5;
      break;
    }
  VAR_7->language_defn = FUNC_0 (VAR_7->language);
}
