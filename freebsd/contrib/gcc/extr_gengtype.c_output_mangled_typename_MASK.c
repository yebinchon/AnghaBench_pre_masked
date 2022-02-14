
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_4__* type_p ;
typedef int outf_p ;
struct TYPE_7__ {TYPE_4__* stru; TYPE_4__** param; } ;
struct TYPE_6__ {int tag; } ;
struct TYPE_8__ {TYPE_2__ param_struct; TYPE_1__ s; TYPE_4__* p; } ;
struct TYPE_9__ {int kind; TYPE_3__ u; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3 (outf_p VAR_1, type_p VAR_2)
{
  if (VAR_2 == ((void*)0))
    FUNC_1 (VAR_1, "Z");
  else switch (VAR_2->kind)
    {
    case 132:
      FUNC_1 (VAR_1, "P");
      FUNC_3 (VAR_1, VAR_2->u.p);
      break;
    case 131:
      FUNC_1 (VAR_1, "I");
      break;
    case 130:
      FUNC_1 (VAR_1, "S");
      break;
    case 129:
    case 128:
    case 134:
      FUNC_1 (VAR_1, "%lu%s", (unsigned long) FUNC_2 (VAR_2->u.s.tag), VAR_2->u.s.tag);
      break;
    case 133:
      {
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
   if (VAR_2->u.param_struct.param[VAR_3] != ((void*)0))
     FUNC_3 (VAR_1, VAR_2->u.param_struct.param[VAR_3]);
 FUNC_3 (VAR_1, VAR_2->u.param_struct.stru);
      }
      break;
    case 135:
      FUNC_0 ();
    }
}
