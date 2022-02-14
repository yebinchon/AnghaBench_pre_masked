
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct coff_where {int where; int offset; TYPE_1__* section; } ;
struct TYPE_2__ {char* name; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4 (struct coff_where *VAR_0)
{
  FUNC_3 (1);
  switch (VAR_0->where)
    {
    case 131:
      FUNC_2 ("Stack offset %x", VAR_0->offset);
      break;
    case 133:
      FUNC_2 ("Memory section %s+%x", VAR_0->section->name, VAR_0->offset);
      break;
    case 132:
      FUNC_2 ("Register %d", VAR_0->offset);
      break;
    case 134:
      FUNC_2 ("Struct Member offset %x", VAR_0->offset);
      break;
    case 135:
      FUNC_2 ("Enum Member offset %x", VAR_0->offset);
      break;
    case 128:
      FUNC_2 ("Undefined symbol");
      break;
    case 130:
      FUNC_2 ("STRTAG");
    case 136:
      FUNC_2 ("ENTAG");
      break;
    case 129:
      FUNC_2 ("TYPEDEF");
      break;
    default:
      FUNC_0 ();
    }
  FUNC_1 ();
  FUNC_3 (-1);
}
