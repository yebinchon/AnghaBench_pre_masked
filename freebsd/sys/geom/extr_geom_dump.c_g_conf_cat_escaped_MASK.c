
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
struct sbuf {int dummy; } ;


 int FUNC_0 (struct sbuf*,char*,char const) ;
 int FUNC_1 (struct sbuf*,char const) ;

void
FUNC_2(struct sbuf *VAR_0, const char *VAR_1)
{
 const u_char *VAR_2;

 for (VAR_2 = VAR_1; *VAR_2 != '\0'; VAR_2++) {
  if (*VAR_2 == '&' || *VAR_2 == '<' || *VAR_2 == '>' ||
      *VAR_2 == '\'' || *VAR_2 == '"' || *VAR_2 > 0x7e)
   FUNC_0(VAR_0, "&#x%X;", *VAR_2);
  else if (*VAR_2 == '\t' || *VAR_2 == '\n' || *VAR_2 == '\r' || *VAR_2 > 0x1f)
   FUNC_1(VAR_0, *VAR_2);
  else
   FUNC_1(VAR_0, '?');
 }
}
