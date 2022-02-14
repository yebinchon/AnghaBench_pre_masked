
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 struct strbuf VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char const*,char*,int ,int *) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (struct strbuf*,char*,char const*) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (char const*,char) ;
 int FUNC_8 (char*,char const*,int ) ;

__attribute__((used)) static void FUNC_9(const char *VAR_2, const char *VAR_3)
{
 const char *VAR_4 = FUNC_1("DISPLAY");
 if (VAR_4 && *VAR_4) {
  struct strbuf VAR_5 = VAR_0;
  const char *VAR_6 = "kfmclient";


  if (VAR_2) {
   const char *VAR_7 = FUNC_7(VAR_2, '/');
   if (VAR_7 && !FUNC_3(VAR_7 + 1, "konqueror")) {
    char *VAR_8 = FUNC_5(VAR_2);
    char *VAR_9 = FUNC_7(VAR_8, '/');


    FUNC_4(VAR_9 + 1, "kfmclient");
    VAR_2 = VAR_8;
   }
   if (VAR_7)
    VAR_6 = VAR_7;
  } else
   VAR_2 = "kfmclient";
  FUNC_2(&VAR_5, "man:%s(1)", VAR_3);
  FUNC_0(VAR_2, VAR_6, "newTab", VAR_5.buf, ((void*)0));
  FUNC_8("failed to exec '%s': %s", VAR_2, FUNC_6(VAR_1));
 }
}
