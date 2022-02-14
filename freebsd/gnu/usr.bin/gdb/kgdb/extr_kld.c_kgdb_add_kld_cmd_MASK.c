
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int,char*,char*) ;

__attribute__((used)) static void
FUNC_7 (char *VAR_2, int VAR_3)
{
 char VAR_4[VAR_0];
 CORE_ADDR VAR_5;

 if (!VAR_1)
  FUNC_1("No kernel symbol file");


 FUNC_6(VAR_4, sizeof(VAR_4), "%s", VAR_2);
 if (!FUNC_0(VAR_4, sizeof(VAR_4))) {





  if (!FUNC_3(VAR_2, VAR_4, sizeof(VAR_4))) {
   FUNC_1("Unable to locate kld");
   return;
  }
 }

 if (!FUNC_2(VAR_2, &VAR_5)) {
  FUNC_1("Unable to find kld in kernel");
  return;
 }

 FUNC_4(VAR_4, VAR_5, VAR_3);

 FUNC_5();
}
