
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 char* FUNC_0 (char*,char) ;

void
FUNC_1(char *VAR_2)
{
  char *VAR_3, *VAR_4;

  if (!(VAR_1.flags & VAR_0))
    return;

  VAR_4 = VAR_3 = FUNC_0(VAR_2, '/');
  if (VAR_3) {
    char *VAR_5 = VAR_3;
    do {

      if (VAR_3 == VAR_4 && VAR_3[0] == '/' && VAR_3[1] == '/') {

 *VAR_5++ = *VAR_3++;
 *VAR_5++ = *VAR_3++;
      } else {

 *VAR_5++ = *VAR_3++;
      }



      while (*VAR_3 == '/')
 VAR_3++;



      while (*VAR_3 && *VAR_3 != '/') {

 if (VAR_3[0] == '\\' && VAR_3[1] == '/')
   VAR_3++;
 *VAR_5++ = *VAR_3++;
      }



    } while (*VAR_3);
    *VAR_5 = '\0';
  }
}
