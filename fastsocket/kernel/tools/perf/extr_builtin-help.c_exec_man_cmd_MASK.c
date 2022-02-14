
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 struct strbuf VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,char*,int ,int *) ;
 int FUNC_1 (struct strbuf*,char*,char const*,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*,int ) ;

__attribute__((used)) static void FUNC_4(const char *VAR_2, const char *VAR_3)
{
 struct strbuf VAR_4 = VAR_0;
 FUNC_1(&VAR_4, "%s %s", VAR_2, VAR_3);
 FUNC_0("/bin/sh", "sh", "-c", VAR_4.buf, ((void*)0));
 FUNC_3("failed to exec '%s': %s", VAR_2, FUNC_2(VAR_1));
}
