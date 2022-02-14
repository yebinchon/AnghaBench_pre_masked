
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int pretty_printer ;


 int FUNC_0 (int ) ;


 int FUNC_1 (int ) ;

 int FUNC_2 (int ) ;






 int FUNC_3 (int ) ;



 int FUNC_4 (int ) ;



 int FUNC_5 (int ) ;

 int FUNC_6 (int ) ;


 int FUNC_7 (int ) ;



 int FUNC_8 (int *,int ,int,int,int) ;
 int FUNC_9 () ;
 char* FUNC_10 (int ) ;
 int FUNC_11 (int *,char) ;
 int FUNC_12 (int *,char const*) ;

__attribute__((used)) static void
FUNC_13 (pretty_printer *VAR_0, tree VAR_1, int VAR_2, int VAR_3)
{
  const char *VAR_4;

  switch (FUNC_0 (VAR_1))
    {
    case 135:
      VAR_4 = "private";
      goto print_remap;
    case 128:
      VAR_4 = "shared";
      goto print_remap;
    case 141:
      VAR_4 = "firstprivate";
      goto print_remap;
    case 139:
      VAR_4 = "lastprivate";
      goto print_remap;
    case 148:
      VAR_4 = "copyin";
      goto print_remap;
    case 147:
      VAR_4 = "copyprivate";
      goto print_remap;
  print_remap:
      FUNC_12 (VAR_0, VAR_4);
      FUNC_11 (VAR_0, '(');
      FUNC_8 (VAR_0, FUNC_1 (VAR_1),
   VAR_2, VAR_3, 0);
      FUNC_11 (VAR_0, ')');
      break;

    case 134:
      FUNC_12 (VAR_0, "reduction(");
      FUNC_12 (VAR_0, FUNC_10 (FUNC_5 (VAR_1)));
      FUNC_11 (VAR_0, ':');
      FUNC_8 (VAR_0, FUNC_1 (VAR_1),
   VAR_2, VAR_3, 0);
      FUNC_11 (VAR_0, ')');
      break;

    case 140:
      FUNC_12 (VAR_0, "if(");
      FUNC_8 (VAR_0, FUNC_3 (VAR_1),
   VAR_2, VAR_3, 0);
      FUNC_11 (VAR_0, ')');
      break;

    case 137:
      FUNC_12 (VAR_0, "num_threads(");
      FUNC_8 (VAR_0, FUNC_4 (VAR_1),
   VAR_2, VAR_3, 0);
      FUNC_11 (VAR_0, ')');
      break;

    case 138:
      FUNC_12 (VAR_0, "nowait");
      break;
    case 136:
      FUNC_12 (VAR_0, "ordered");
      break;

    case 146:
      FUNC_12 (VAR_0, "default(");
      switch (FUNC_2 (VAR_1))
 {
      case 142:
 break;
      case 143:
 FUNC_12 (VAR_0, "shared");
 break;
      case 145:
 FUNC_12 (VAR_0, "none");
 break;
      case 144:
 FUNC_12 (VAR_0, "private");
 break;
      default:
 FUNC_9 ();
 }
      FUNC_11 (VAR_0, ')');
      break;

    case 133:
      FUNC_12 (VAR_0, "schedule(");
      switch (FUNC_7 (VAR_1))
 {
      case 129:
 FUNC_12 (VAR_0, "static");
 break;
      case 132:
 FUNC_12 (VAR_0, "dynamic");
 break;
      case 131:
 FUNC_12 (VAR_0, "guided");
 break;
      case 130:
 FUNC_12 (VAR_0, "runtime");
 break;
      default:
 FUNC_9 ();
 }
      if (FUNC_6 (VAR_1))
 {
   FUNC_11 (VAR_0, ',');
   FUNC_8 (VAR_0,
       FUNC_6 (VAR_1),
       VAR_2, VAR_3, 0);
 }
      FUNC_11 (VAR_0, ')');
      break;

    default:

      FUNC_8 (VAR_0, VAR_1, VAR_2, VAR_3, 0);
      break;
    }
}
