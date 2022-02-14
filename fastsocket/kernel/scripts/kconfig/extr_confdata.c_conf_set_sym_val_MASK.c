
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {int type; int flags; int name; TYPE_1__* def; } ;
struct TYPE_2__ {int val; int tri; } ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char*) ;
 int FUNC_6 (struct symbol*,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_7(struct symbol *VAR_3, int VAR_4, int VAR_5, char *VAR_6)
{
 char *VAR_7;

 switch (VAR_3->type) {
 case 128:
  if (VAR_6[0] == 'm') {
   VAR_3->def[VAR_4].tri = VAR_0;
   VAR_3->flags |= VAR_5;
   break;
  }
 case 133:
  if (VAR_6[0] == 'y') {
   VAR_3->def[VAR_4].tri = VAR_2;
   VAR_3->flags |= VAR_5;
   break;
  }
  if (VAR_6[0] == 'n') {
   VAR_3->def[VAR_4].tri = VAR_1;
   VAR_3->flags |= VAR_5;
   break;
  }
  FUNC_0("symbol value '%s' invalid for %s", VAR_6, VAR_3->name);
  break;
 case 130:
  if (*VAR_6 != '"') {
   for (VAR_7 = VAR_6; *VAR_7 && !FUNC_1(*VAR_7); VAR_7++)
    ;
   VAR_3->type = 129;
   goto done;
  }
 case 129:
  if (*VAR_6++ != '"')
   break;
  for (VAR_7 = VAR_6; (VAR_7 = FUNC_5(VAR_7, "\"\\")); VAR_7++) {
   if (*VAR_7 == '"') {
    *VAR_7 = 0;
    break;
   }
   FUNC_2(VAR_7, VAR_7 + 1, FUNC_4(VAR_7));
  }
  if (!VAR_7) {
   FUNC_0("invalid string found");
   return 1;
  }
 case 131:
 case 132:
 done:
  if (FUNC_6(VAR_3, VAR_6)) {
   VAR_3->def[VAR_4].val = FUNC_3(VAR_6);
   VAR_3->flags |= VAR_5;
  } else {
   FUNC_0("symbol value '%s' invalid for %s", VAR_6, VAR_3->name);
   return 1;
  }
  break;
 default:
  ;
 }
 return 0;
}
