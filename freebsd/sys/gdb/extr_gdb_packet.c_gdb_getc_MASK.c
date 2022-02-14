
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* gdb_getc ) () ;int gdb_dbfeatures; int (* gdb_term ) () ;} ;


 int FUNC_0 (char) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(void)
{
 int VAR_2;

 do
  VAR_2 = VAR_1->gdb_getc();
 while (VAR_2 == -1);

 if (VAR_2 == FUNC_0('C')) {
  FUNC_3("Received ^C; trying to switch back to ddb.\n");

  if (VAR_1->gdb_dbfeatures & VAR_0)
   VAR_1->gdb_term();

  if (FUNC_1("ddb") != 0)
   FUNC_3("The ddb backend could not be selected.\n");
  else {
   FUNC_3("using longjmp, hope it works!\n");
   FUNC_2();
  }
 }
 return (VAR_2);
}
