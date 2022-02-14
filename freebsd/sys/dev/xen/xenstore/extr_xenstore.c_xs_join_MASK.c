
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;


 int FUNC_0 (struct sbuf*,char const*) ;
 int FUNC_1 (struct sbuf*) ;
 struct sbuf* FUNC_2 () ;
 int FUNC_3 (struct sbuf*,char) ;

struct sbuf *
FUNC_4(const char *VAR_0, const char *VAR_1)
{
 struct sbuf *VAR_2;

 VAR_2 = FUNC_2();
 FUNC_0(VAR_2, VAR_0);
 if (VAR_1[0] != '\0') {
  FUNC_3(VAR_2, '/');
  FUNC_0(VAR_2, VAR_1);
 }
 FUNC_1(VAR_2);

 return (VAR_2);
}
