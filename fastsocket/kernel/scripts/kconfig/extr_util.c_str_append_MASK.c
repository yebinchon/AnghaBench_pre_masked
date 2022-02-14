
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gstr {char const* s; size_t len; } ;


 char const* FUNC_0 (char const*,size_t) ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*) ;

void FUNC_3(struct gstr *VAR_0, const char *VAR_1)
{
 size_t VAR_2;
 if (VAR_1) {
  VAR_2 = FUNC_2(VAR_0->s) + FUNC_2(VAR_1) + 1;
  if (VAR_2 > VAR_0->len) {
   VAR_0->s = FUNC_0(VAR_0->s, VAR_2);
   VAR_0->len = VAR_2;
  }
  FUNC_1(VAR_0->s, VAR_1);
 }
}
