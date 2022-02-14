
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*,int ) ;
 int VAR_1 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (struct strbuf*,char const*) ;
 int FUNC_5 (struct strbuf*) ;

void FUNC_6(void)
{
 const char *VAR_2 = FUNC_1("PATH");
 struct strbuf VAR_3 = VAR_0;

 FUNC_0(&VAR_3, FUNC_2());
 FUNC_0(&VAR_3, VAR_1);

 if (VAR_2)
  FUNC_4(&VAR_3, VAR_2);
 else
  FUNC_4(&VAR_3, "/usr/local/bin:/usr/bin:/bin");

 FUNC_3("PATH", VAR_3.buf, 1);

 FUNC_5(&VAR_3);
}
