
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct strbuf*,char const*) ;
 int FUNC_2 (struct strbuf*,char) ;
 int FUNC_3 (struct strbuf*,int) ;

void FUNC_4(struct strbuf *VAR_0, const char** VAR_1, size_t VAR_2)
{
 int VAR_3;


 FUNC_3(VAR_0, 255);
 for (VAR_3 = 0; VAR_1[VAR_3]; ++VAR_3) {
  FUNC_2(VAR_0, ' ');
  FUNC_1(VAR_0, VAR_1[VAR_3]);
  if (VAR_2 && VAR_0->len > VAR_2)
   FUNC_0("Too many or long arguments");
 }
}
