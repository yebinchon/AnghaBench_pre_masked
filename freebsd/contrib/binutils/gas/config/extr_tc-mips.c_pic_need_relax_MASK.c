
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int symbolS ;
typedef int bfd_boolean ;
typedef int asection ;
struct TYPE_2__ {int * X_add_symbol; } ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static bfd_boolean
FUNC_8 (symbolS *VAR_4, asection *VAR_5)
{
  asection *VAR_6;


  while (FUNC_5 (VAR_4))
    {
      symbolS *VAR_7;


      VAR_7 = FUNC_6 (VAR_4)->X_add_symbol;
      if (VAR_7 == VAR_4)
 break;
      VAR_4 = VAR_7;
    }

  if (FUNC_7 (VAR_4))
    return VAR_1;

  VAR_6 = FUNC_0 (VAR_4);


  return (VAR_6 != &VAR_3
   && VAR_6 != &VAR_2
   && !FUNC_3 (VAR_6)
   && !FUNC_4 (VAR_4, VAR_5)




   );
}
