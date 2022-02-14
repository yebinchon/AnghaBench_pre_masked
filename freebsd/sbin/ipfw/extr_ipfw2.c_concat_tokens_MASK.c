
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _s_x {int * s; } ;


 int FUNC_0 (char*,size_t,char*,char*,int *) ;

size_t
FUNC_1(char *VAR_0, size_t VAR_1, struct _s_x *VAR_2, char *VAR_3)
{
 struct _s_x *VAR_4;
 int VAR_5;
 size_t VAR_6;

 for (VAR_6 = 0, VAR_4 = VAR_2 ; VAR_4->s != ((void*)0); VAR_4++) {
  VAR_5 = FUNC_0(VAR_0 + VAR_6, VAR_1 - VAR_6, "%s%s",
      (VAR_6 == 0) ? "" : VAR_3, VAR_4->s);
  VAR_6 += VAR_5;
  VAR_1 += VAR_5;
  if (VAR_6 > VAR_1)
   return (VAR_1);
 }

 return (VAR_6);
}
