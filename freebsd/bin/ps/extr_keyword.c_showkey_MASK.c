
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; } ;
typedef TYPE_1__ VAR ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;

void
FUNC_5(void)
{
 VAR *VAR_2;
 int VAR_3;
 const char *VAR_4, *VAR_5;

 VAR_3 = 0;
 VAR_5 = "";
 FUNC_4("key");
 for (VAR_2 = VAR_1; *(VAR_4 = VAR_2->name); ++VAR_2) {
  int VAR_6 = FUNC_0(VAR_4);
  if (VAR_0 && (VAR_3 += VAR_6 + 1) > VAR_0) {
   VAR_3 = VAR_6;
   VAR_5 = "\n";
  }
  FUNC_2("{P:/%s}{l:key/%s}", VAR_5, VAR_4);
  VAR_5 = " ";
 }
 FUNC_2("\n");
 FUNC_1("key");
 FUNC_3();
}
