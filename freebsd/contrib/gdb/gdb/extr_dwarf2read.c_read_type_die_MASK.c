
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf2_cu {int dummy; } ;
struct die_info {int tag; } ;
struct cleanup {int dummy; } ;
 int FUNC_0 (int *,char*,int ) ;
 char* FUNC_1 (struct die_info*,struct dwarf2_cu*) ;
 int FUNC_2 (struct cleanup*) ;
 int FUNC_3 (int) ;
 struct cleanup* FUNC_4 (int ,char*) ;
 char const* VAR_0 ;
 int FUNC_5 (struct die_info*,struct dwarf2_cu*) ;
 int FUNC_6 (struct die_info*,struct dwarf2_cu*) ;
 int FUNC_7 (struct die_info*,struct dwarf2_cu*) ;
 int FUNC_8 (struct die_info*,struct dwarf2_cu*) ;
 int FUNC_9 (struct die_info*,struct dwarf2_cu*) ;
 int FUNC_10 (struct die_info*,struct dwarf2_cu*) ;
 int FUNC_11 (struct die_info*,struct dwarf2_cu*) ;
 int FUNC_12 (struct die_info*,struct dwarf2_cu*) ;
 int FUNC_13 (struct die_info*,struct dwarf2_cu*) ;
 int FUNC_14 (struct die_info*,struct dwarf2_cu*) ;
 int FUNC_15 (struct die_info*,struct dwarf2_cu*) ;
 int FUNC_16 (struct die_info*,struct dwarf2_cu*) ;
 int FUNC_17 (struct die_info*,struct dwarf2_cu*) ;
 int FUNC_18 (struct die_info*,struct dwarf2_cu*) ;
 int FUNC_19 (struct die_info*,struct dwarf2_cu*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_20 (struct die_info *VAR_3, struct dwarf2_cu *VAR_4)
{
  char *VAR_5 = FUNC_1 (VAR_3, VAR_4);
  const char *VAR_6 = VAR_0;
  struct cleanup *VAR_7 = FUNC_4 (VAR_2, VAR_5);
  VAR_0 = VAR_5;

  switch (VAR_3->tag)
    {
    case 144:
    case 135:
    case 130:
      FUNC_8 (VAR_3, VAR_4);
      break;
    case 142:
      FUNC_7 (VAR_3, VAR_4);
      break;
    case 134:
    case 132:
      FUNC_10 (VAR_3, VAR_4);
      break;
    case 146:
      FUNC_5 (VAR_3, VAR_4);
      break;
    case 141:
      FUNC_12 (VAR_3, VAR_4);
      break;
    case 129:
      FUNC_17 (VAR_3, VAR_4);
      break;
    case 140:
      FUNC_13 (VAR_3, VAR_4);
      break;
    case 139:
    case 137:
      FUNC_14 (VAR_3, VAR_4);
      break;
    case 143:
      FUNC_11 (VAR_3, VAR_4);
      break;
    case 128:
      FUNC_18 (VAR_3, VAR_4);
      break;
    case 138:
      FUNC_15 (VAR_3, VAR_4);
      break;
    case 136:
      FUNC_16 (VAR_3, VAR_4);
      break;
    case 131:
      FUNC_19 (VAR_3, VAR_4);
      break;
    case 133:
      FUNC_9 (VAR_3, VAR_4);
      break;
    case 145:
      FUNC_6 (VAR_3, VAR_4);
      break;
    default:
      FUNC_0 (&VAR_1, "unexepected tag in read_type_die: '%s'",
   FUNC_3 (VAR_3->tag));
      break;
    }

  VAR_0 = VAR_6;
  FUNC_2 (VAR_7);
}
