
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (struct strbuf*,char) ;
 int FUNC_3 (struct strbuf*,char const*) ;
 int FUNC_4 (struct strbuf*) ;
 char const* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(void)
{
 struct strbuf VAR_2 = VAR_1;
 const char *VAR_3 = FUNC_0("MANPATH");





 FUNC_3(&VAR_2, FUNC_5(VAR_0));
 FUNC_2(&VAR_2, ':');
 if (VAR_3)
  FUNC_3(&VAR_2, VAR_3);

 FUNC_1("MANPATH", VAR_2.buf, 1);

 FUNC_4(&VAR_2);
}
