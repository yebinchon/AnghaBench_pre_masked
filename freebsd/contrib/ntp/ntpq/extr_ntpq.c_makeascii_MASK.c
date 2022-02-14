
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
typedef int FILE ;


 int FUNC_0 (int,int *) ;

void
FUNC_1(
 size_t VAR_0,
 const char *VAR_1,
 FILE *VAR_2
 )
{
 const u_char *VAR_3;
 const u_char *VAR_4;
 int VAR_5;

 VAR_3 = (const u_char *)VAR_1;

 for (VAR_4 = VAR_3; VAR_4 < VAR_3 + VAR_0; VAR_4++) {
  VAR_5 = (int)*VAR_4;
  if (VAR_5 & 0x80) {
   FUNC_0('M', VAR_2);
   FUNC_0('-', VAR_2);
   VAR_5 &= 0x7f;
  }

  if (VAR_5 < ' ') {
   FUNC_0('^', VAR_2);
   FUNC_0(VAR_5 + '@', VAR_2);
  } else if (0x7f == VAR_5) {
   FUNC_0('^', VAR_2);
   FUNC_0('?', VAR_2);
  } else
   FUNC_0(VAR_5, VAR_2);
 }
}
