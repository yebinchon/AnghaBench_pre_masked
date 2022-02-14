
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct strbuf VAR_2 ;
 int FUNC_1 (char*,char const*) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const**,int ) ;
 int FUNC_4 (struct strbuf*,char*,char const*) ;
 int FUNC_5 (struct strbuf*) ;

__attribute__((used)) static void FUNC_6(const char **VAR_4)
{
 struct strbuf VAR_5 = VAR_2;
 const char *VAR_6;
 int VAR_7;

 FUNC_4(&VAR_5, "perf-%s", VAR_4[0]);







 VAR_6 = VAR_4[0];
 VAR_4[0] = VAR_5.buf;





 VAR_7 = FUNC_3(VAR_4, 0);
 if (VAR_7 != -VAR_1) {
  if (FUNC_0(VAR_7))
   FUNC_1("unable to run '%s'", VAR_4[0]);
  FUNC_2(-VAR_7);
 }
 VAR_3 = VAR_0;

 VAR_4[0] = VAR_6;

 FUNC_5(&VAR_5);
}
