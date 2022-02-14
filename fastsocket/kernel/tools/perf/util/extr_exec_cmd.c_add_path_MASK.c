
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 char const* FUNC_1 (char const*) ;
 int FUNC_2 (struct strbuf*,int ) ;
 int FUNC_3 (struct strbuf*,char const*) ;

__attribute__((used)) static void FUNC_4(struct strbuf *VAR_1, const char *VAR_2)
{
 if (VAR_2 && *VAR_2) {
  if (FUNC_0(VAR_2))
   FUNC_3(VAR_1, VAR_2);
  else
   FUNC_3(VAR_1, FUNC_1(VAR_2));

  FUNC_2(VAR_1, VAR_0);
 }
}
