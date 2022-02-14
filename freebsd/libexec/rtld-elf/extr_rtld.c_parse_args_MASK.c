
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static int
FUNC_8(char* VAR_0[], int VAR_1, bool *VAR_2, int *VAR_3)
{
 const char *VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8;
 char VAR_9;

 FUNC_2("Parsing command-line arguments");
 *VAR_2 = 0;
 *VAR_3 = -1;

 for (VAR_6 = 1; VAR_6 < VAR_1; VAR_6++ ) {
  VAR_4 = VAR_0[VAR_6];
  FUNC_2("argv[%d]: '%s'", VAR_6, VAR_4);





  if (FUNC_6(VAR_4, "--") == 0) {
   VAR_6++;
   break;
  }
  if (VAR_4[0] != '-')
   break;





  VAR_8 = FUNC_7(VAR_4);
  for (VAR_7 = 1; VAR_7 < VAR_8; VAR_7++) {
   VAR_9 = VAR_4[VAR_7];
   if (VAR_9 == 'h') {
    FUNC_4(VAR_0[0]);
    FUNC_0(0);
   } else if (VAR_9 == 'f') {






   if (VAR_7 != VAR_8 - 1) {

    FUNC_1("Invalid options: %s", VAR_4);
    FUNC_5();
   }
   VAR_6++;
   VAR_5 = FUNC_3(VAR_0[VAR_6]);
   if (VAR_5 == -1) {
    FUNC_1("Invalid file descriptor: '%s'",
        VAR_0[VAR_6]);
    FUNC_5();
   }
   *VAR_3 = VAR_5;
   break;
   } else if (VAR_9 == 'p') {
    *VAR_2 = 1;
   } else {
    FUNC_1("Invalid argument: '%s'", VAR_4);
    FUNC_4(VAR_0[0]);
    FUNC_5();
   }
  }
 }

 return (VAR_6);
}
