
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_parser {int dummy; } ;
typedef int realbuf ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (char*,int) ;
 int FUNC_2 (struct ucl_parser*,char*,char*) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*,char const*,int) ;

bool
FUNC_5 (struct ucl_parser *VAR_1, const char *VAR_2, bool VAR_3)
{
 char VAR_4[VAR_0], *VAR_5;

 if (VAR_2 != ((void*)0)) {
  if (VAR_3) {
   if (FUNC_3 (VAR_2, VAR_4) == ((void*)0)) {
    return 0;
   }
  }
  else {
   FUNC_4 (VAR_4, VAR_2, sizeof (VAR_4));
  }


  FUNC_2 (VAR_1, "FILENAME", VAR_4);
  VAR_5 = FUNC_0 (VAR_4);
  FUNC_2 (VAR_1, "CURDIR", VAR_5);
 }
 else {

  VAR_5 = FUNC_1 (VAR_4, sizeof (VAR_4));
  FUNC_2 (VAR_1, "FILENAME", "undef");
  FUNC_2 (VAR_1, "CURDIR", VAR_5);
 }

 return 1;
}
