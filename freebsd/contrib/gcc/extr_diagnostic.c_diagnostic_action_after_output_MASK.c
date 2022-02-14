
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int kind; } ;
typedef TYPE_1__ diagnostic_info ;
struct TYPE_6__ {int abort_on_error; } ;
typedef TYPE_2__ diagnostic_context ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_4 (diagnostic_context *VAR_5,
    diagnostic_info *VAR_6)
{
  switch (VAR_6->kind)
    {
    case 134:
    case 130:
    case 135:
    case 128:
      break;

    case 133:
    case 129:
      if (VAR_5->abort_on_error)
 FUNC_3 ();
      if (VAR_3)
 {
   FUNC_1 (VAR_4, "compilation terminated due to -Wfatal-errors.\n");
   FUNC_0 (VAR_0);
 }
      break;

    case 131:
      if (VAR_5->abort_on_error)
 FUNC_3 ();

      FUNC_1 (VAR_4, "Please submit a full bug report,\n"
        "with preprocessed source if appropriate.\n"
        "See %s for instructions.\n", VAR_2);
      FUNC_0 (VAR_1);

    case 132:
      if (VAR_5->abort_on_error)
 FUNC_3 ();

      FUNC_1 (VAR_4, "compilation terminated.\n");
      FUNC_0 (VAR_0);

    default:
      FUNC_2 ();
    }
}
