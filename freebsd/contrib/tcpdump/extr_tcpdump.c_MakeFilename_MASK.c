
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 struct tm* FUNC_2 (int *) ;
 char* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (char*,scalar_t__,char*,char*,int,int) ;
 int FUNC_5 (char*,scalar_t__,char*,struct tm*) ;
 int FUNC_6 (char*,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(char *VAR_3, char *VAR_4, int VAR_5, int VAR_6)
{
        char *VAR_7 = FUNC_3(VAR_2 + 1);
        if (VAR_7 == ((void*)0))
            FUNC_0("Makefilename: malloc");


        if (VAR_0 != 0) {
          struct tm *VAR_8;


          if ((VAR_8 = FUNC_2(&VAR_1)) == ((void*)0)) {
                  FUNC_0("MakeTimedFilename: localtime");
          }




          FUNC_5(VAR_7, VAR_2, VAR_4, VAR_8);
        } else {
          FUNC_6(VAR_7, VAR_4, VAR_2);
        }

 if (VAR_5 == 0 && VAR_6 == 0)
  FUNC_6(VAR_3, VAR_7, VAR_2 + 1);
 else
  if (FUNC_4(VAR_3, VAR_2 + 1, "%s%0*d", VAR_7, VAR_6, VAR_5) > VAR_2)

                  FUNC_0("too many output files or filename is too long (> %d)", VAR_2);
        FUNC_1(VAR_7);
}
