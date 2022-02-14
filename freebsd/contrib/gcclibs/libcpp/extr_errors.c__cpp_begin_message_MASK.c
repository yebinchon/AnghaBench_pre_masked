
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int source_location ;
struct TYPE_6__ {int errors; } ;
typedef TYPE_1__ cpp_reader ;



 int FUNC_0 (int) ;



 scalar_t__ FUNC_1 (int) ;

 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (TYPE_1__*,int ,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int
FUNC_7 (cpp_reader *VAR_6, int VAR_7,
      source_location VAR_8, unsigned int VAR_9)
{
  int VAR_10 = FUNC_0 (VAR_7);

  switch (VAR_10)
    {
    case 129:
    case 130:
      if (FUNC_4 (VAR_6)
   && ! FUNC_2 (VAR_6, VAR_4))
 return 0;


    case 128:
      if (FUNC_2 (VAR_6, VAR_5)
   || (VAR_10 == 130 && FUNC_2 (VAR_6, VAR_2)))
 {
   if (FUNC_2 (VAR_6, VAR_0))
     return 0;
   VAR_10 = 132;
   VAR_6->errors++;
 }
      else if (FUNC_2 (VAR_6, VAR_1))
 return 0;
      break;

    case 132:
      if (FUNC_2 (VAR_6, VAR_0))
 return 0;

    case 131:
      VAR_6->errors++;
      break;
    }

  FUNC_6 (VAR_6, VAR_8, VAR_9);
  if (FUNC_1 (VAR_10))
    FUNC_5 (FUNC_3("warning: "), VAR_3);
  else if (VAR_10 == 131)
    FUNC_5 (FUNC_3("internal error: "), VAR_3);
  else
    FUNC_5 (FUNC_3("error: "), VAR_3);

  return 1;
}
