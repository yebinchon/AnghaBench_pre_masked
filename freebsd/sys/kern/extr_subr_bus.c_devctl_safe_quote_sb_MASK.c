
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;


 int FUNC_0 (struct sbuf*,char) ;

void
FUNC_1(struct sbuf *VAR_0, const char *VAR_1)
{

 while (*VAR_1 != '\0') {
  if (*VAR_1 == '"' || *VAR_1 == '\\')
   FUNC_0(VAR_0, '\\');
  FUNC_0(VAR_0, *VAR_1++);
 }
}
