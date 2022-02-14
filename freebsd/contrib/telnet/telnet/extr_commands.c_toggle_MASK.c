
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct togglelist {int* variable; char* actionexplanation; int (* handler ) (int) ;} ;


 scalar_t__ FUNC_0 (void*) ;
 struct togglelist* FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*,char*,char*) ;
 int VAR_0 ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(int VAR_1, char *VAR_2[])
{
    int VAR_3 = 1;
    char *VAR_4;
    struct togglelist *VAR_5;

    if (VAR_1 < 2) {
 FUNC_2(VAR_0,
     "Need an argument to 'toggle' command.  'toggle ?' for help.\n");
 return 0;
    }
    VAR_1--;
    VAR_2++;
    while (VAR_1--) {
 VAR_4 = *VAR_2++;
 VAR_5 = FUNC_1(VAR_4);
 if (FUNC_0((void *)VAR_5)) {
     FUNC_2(VAR_0, "'%s': ambiguous argument ('toggle ?' for help).\n",
     VAR_4);
     return 0;
 } else if (VAR_5 == 0) {
     FUNC_2(VAR_0, "'%s': unknown argument ('toggle ?' for help).\n",
     VAR_4);
     return 0;
 } else {
     if (VAR_5->variable) {
  *VAR_5->variable = !*VAR_5->variable;
  if (VAR_5->actionexplanation) {
      FUNC_3("%s %s.\n", *VAR_5->variable? "Will" : "Won't",
       VAR_5->actionexplanation);
  }
     }
     if (VAR_5->handler) {
  VAR_3 &= (*VAR_5->handler)(-1);
     }
 }
    }
    return VAR_3;
}
