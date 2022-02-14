
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inodesc {int id_fix; int id_number; int id_type; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;



 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*) ;

int
FUNC_5(struct inodesc *VAR_4, const char *VAR_5)
{

 switch (VAR_4->id_fix) {

 case 131:
  if (VAR_4->id_type == VAR_1)
   FUNC_0(VAR_4->id_number, VAR_5);
  else
   FUNC_3("%s", VAR_5);
  if (VAR_3) {
   FUNC_2(" (SALVAGED)\n");
   VAR_4->id_fix = 130;
   return (VAR_0);
  }
  if (FUNC_4("SALVAGE") == 0) {
   VAR_4->id_fix = 128;
   return (0);
  }
  VAR_4->id_fix = 130;
  return (VAR_0);

 case 130:
  return (VAR_0);

 case 128:
 case 129:
  return (0);

 default:
  FUNC_1(VAR_2, "UNKNOWN INODESC FIX MODE %d", VAR_4->id_fix);
 }

 return (0);
}
