
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* ptr; size_t length; } ;
struct TYPE_4__ {TYPE_1__ sval; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 size_t VAR_3 ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static int
FUNC_1 ()
{
  char *VAR_5 = VAR_1;

  for (VAR_3 = 0, VAR_5++; *VAR_5 != '\0'; VAR_5++)
    {
      FUNC_0 (1);
      if (*VAR_5 == *VAR_1)
 {
   if (*(VAR_5 + 1) == *VAR_1)
     VAR_5++;
   else
     break;
 }
      VAR_2[VAR_3++] = *VAR_5;
    }
  if (*VAR_5 == '\0'
      || VAR_3 == 0)
    return 0;
  else
    {
      VAR_2[VAR_3] = '\0';
      VAR_4.sval.ptr = VAR_2;
      VAR_4.sval.length = VAR_3;
      VAR_1 = ++VAR_5;
      return VAR_0;
    }
}
