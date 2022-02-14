
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tune; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;


 int FUNC_1 (int,int ,int) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static inline int
FUNC_2 (int VAR_5, int VAR_6)
{
  switch (VAR_4.tune)
    {
    case 129:
      if (VAR_6 == 1 && FUNC_1 (VAR_5, VAR_1, VAR_6))
 return 2;
      else if (VAR_6 == 2 && FUNC_1 (VAR_5, VAR_0, VAR_6))
 return 1;
      else
 return 0;
      break;
    case 128:
      if (FUNC_1 (VAR_5, VAR_3, VAR_6)
   || FUNC_1 (VAR_5, VAR_2, VAR_6))



 return 2;
      else
 return 0;
      break;
    default:
      FUNC_0 ();
      return 0;
    }
}
