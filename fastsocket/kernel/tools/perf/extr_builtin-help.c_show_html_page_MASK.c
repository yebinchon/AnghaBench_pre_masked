
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 char* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (struct strbuf*,char const*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0)
{
 const char *VAR_1 = FUNC_0(VAR_0);
 struct strbuf VAR_2;

 if (FUNC_1(&VAR_2, VAR_1) != 0)
  return -1;

 FUNC_2(VAR_2.buf);

 return 0;
}
