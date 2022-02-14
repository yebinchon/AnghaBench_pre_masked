
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (char const*,char*,char*,int ,int *) ;
 int FUNC_2 (struct strbuf*,char*,char const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char const*,int ) ;

__attribute__((used)) static void FUNC_5(const char *VAR_2, const char *VAR_3)
{
 if (!FUNC_0()) {

  struct strbuf VAR_4 = VAR_0;

  if (!VAR_2)
   VAR_2 = "emacsclient";
  FUNC_2(&VAR_4, "(woman \"%s\")", VAR_3);
  FUNC_1(VAR_2, "emacsclient", "-e", VAR_4.buf, ((void*)0));
  FUNC_4("failed to exec '%s': %s", VAR_2, FUNC_3(VAR_1));
 }
}
