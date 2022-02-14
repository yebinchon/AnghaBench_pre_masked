
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* expansion; } ;
typedef TYPE_1__ macro ;
struct TYPE_6__ {char* start; int len; } ;
typedef TYPE_2__ arg ;


 char VAR_0 ;
 char* FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char*,int) ;

__attribute__((used)) static char *
FUNC_3 (arg *VAR_1, int VAR_2, macro *VAR_3)
{
  char *VAR_4 = 0, *VAR_5 = 0;
  char *VAR_6 = VAR_3->expansion;
  char *VAR_7 = VAR_6;
  int VAR_8 = 0;


  while (*VAR_6)
    {
      if (*VAR_6 == '`' &&
   (*VAR_6+1) &&
   ((*(VAR_6 + 1) - '1') <= VAR_0) &&
   ((*(VAR_6 + 1) - '1') <= VAR_2))
 {
   VAR_4 = FUNC_2 (VAR_4, VAR_7, VAR_6 - VAR_7);
   VAR_8 = (*(VAR_6 + 1) - '1');

   VAR_4 = FUNC_2 (VAR_4, VAR_1[VAR_8].start, VAR_1[VAR_8].len);
   ++VAR_6;
   VAR_7 = VAR_6+1;
 }
      ++VAR_6;
    }

  if (VAR_7 != VAR_6)
    VAR_4 = FUNC_2 (VAR_4, VAR_7, VAR_6 - VAR_7);

  if (VAR_4)
    {
      VAR_5 = FUNC_0 (VAR_4, 0);
      FUNC_1 (VAR_4);
      return VAR_5;
    }
  else
    return VAR_4;
}
