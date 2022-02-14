
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int (* fn ) () ;} ;


 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 () ;
 TYPE_1__* VAR_0 ;

int
FUNC_3(int VAR_1, char *VAR_2[])
{
 size_t VAR_3;

 if (VAR_1 <= 1) {
  FUNC_1("usage: testspeed all | name...\n");
  FUNC_1("individual test names:\n");
  for (VAR_3 = 0; VAR_3 < (sizeof VAR_0) / (sizeof VAR_0[0]); VAR_3 ++) {
   FUNC_1("   %s\n", VAR_0[VAR_3].name);
  }
 } else {
  for (VAR_3 = 0; VAR_3 < (sizeof VAR_0) / (sizeof VAR_0[0]); VAR_3 ++) {
   int VAR_4;

   for (VAR_4 = 1; VAR_4 < VAR_1; VAR_4 ++) {
    if (FUNC_0(VAR_2[VAR_4], VAR_0[VAR_3].name)
     || FUNC_0(VAR_2[VAR_4], "all"))
    {
     VAR_0[VAR_3].fn();
     break;
    }
   }
  }
 }
 return 0;
}
