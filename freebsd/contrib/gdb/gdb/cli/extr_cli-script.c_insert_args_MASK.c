
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int count; TYPE_1__* a; } ;
struct TYPE_3__ {int len; char* arg; } ;


 int FUNC_0 (char*,unsigned int) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;
 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_5 (unsigned int) ;

__attribute__((used)) static char *
FUNC_6 (char *VAR_1)
{
  char *VAR_2, *VAR_3, *VAR_4;
  unsigned VAR_5, VAR_6;


  VAR_3 = VAR_1;
  VAR_5 = 0;
  while ((VAR_2 = FUNC_1 (VAR_1)))
    {
      VAR_5 += VAR_2 - VAR_1;
      VAR_6 = VAR_2[4] - '0';

      if (VAR_6 >= VAR_0->count)
 {
   FUNC_0 ("Missing argument %d in user function.\n", VAR_6);
   return ((void*)0);
 }
      VAR_5 += VAR_0->a[VAR_6].len;
      VAR_1 = VAR_2 + 5;
    }


  VAR_5 += FUNC_4 (VAR_1);


  VAR_4 = (char *) FUNC_5 (VAR_5 + 1);
  if (VAR_4 == ((void*)0))
    return ((void*)0);


  VAR_1 = VAR_3;


  VAR_3 = VAR_4;

  while ((VAR_2 = FUNC_1 (VAR_1)))
    {
      int VAR_7, VAR_8;

      FUNC_2 (VAR_4, VAR_1, VAR_2 - VAR_1);
      VAR_4 += VAR_2 - VAR_1;
      VAR_7 = VAR_2[4] - '0';

      VAR_8 = VAR_0->a[VAR_7].len;
      if (VAR_8)
 {
   FUNC_2 (VAR_4, VAR_0->a[VAR_7].arg, VAR_8);
   VAR_4 += VAR_8;
 }
      VAR_1 = VAR_2 + 5;
    }

  FUNC_3 (VAR_4, VAR_1);


  return VAR_3;
}
