
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int e_event; int * e_asp; } ;
typedef int SCR ;
typedef TYPE_1__ EVENT ;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,char*) ;

void
FUNC_3(
 SCR *VAR_1,
 EVENT *VAR_2)
{
 switch (VAR_2->e_event) {
 case 137:
  FUNC_2(VAR_1, VAR_0, "276|Unexpected character event");
  break;
 case 136:
  FUNC_2(VAR_1, VAR_0, "277|Unexpected end-of-file event");
  break;
 case 134:
  FUNC_2(VAR_1, VAR_0, "279|Unexpected interrupt event");
  break;
 case 133:
  FUNC_2(VAR_1, VAR_0, "281|Unexpected repaint event");
  break;
 case 130:
  FUNC_2(VAR_1, VAR_0, "285|Unexpected string event");
  break;
 case 129:
  FUNC_2(VAR_1, VAR_0, "286|Unexpected timeout event");
  break;
 case 128:
  FUNC_2(VAR_1, VAR_0, "316|Unexpected resize event");
  break;





 case 135:
 case 132:
 case 131:
 default:
  FUNC_0();
 }


 if (VAR_2->e_asp != ((void*)0))
  FUNC_1(VAR_2->e_asp);
}
