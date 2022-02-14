
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (char*,int,char*,int) ;
 scalar_t__ VAR_2 ;
 char** VAR_3 ;
 int VAR_4 ;
 char** VAR_5 ;
 char** VAR_6 ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(void)
{
 char **VAR_7;
 char *VAR_8;






 if (VAR_5 != ((void*)0) && (VAR_3 != VAR_5 || (VAR_2 > 0 &&
     VAR_3[0] == ((void*)0)))) {

  if (VAR_2 > 0) {
   VAR_6 = ((void*)0);
   FUNC_0(0);
  }





  VAR_6 = VAR_3;
  if (VAR_6 != ((void*)0))
   for (VAR_7 = VAR_6; *VAR_7 != ((void*)0); VAR_7++) {
    if ((VAR_8 = FUNC_3(*VAR_7, '=')) == ((void*)0)) {
     FUNC_1(VAR_0, *VAR_7,
         FUNC_4(*VAR_7));
     VAR_4 = VAR_1;
     return (-1);
    }
    if (FUNC_2(*VAR_7, VAR_8 - *VAR_7, VAR_8 + 1,
        1) == -1)
     return (-1);
   }
 }

 return (0);
}
