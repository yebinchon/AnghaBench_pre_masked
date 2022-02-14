
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
struct TYPE_4__ {TYPE_1__* machine; } ;
struct TYPE_3__ {unsigned int global_pointer; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int ,int ) ;
 int * VAR_8 ;
 TYPE_2__* VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__* VAR_13 ;

__attribute__((used)) static bool
FUNC_5 (unsigned int VAR_14)
{

  if (VAR_14 == VAR_0)
    return (VAR_4 && VAR_6
     && VAR_9->machine->global_pointer == VAR_14);


  if (VAR_13[VAR_14] && !VAR_8[VAR_14])
    return 1;


  if (VAR_14 == VAR_2 && VAR_11)
    return 1;



  if (VAR_14 == VAR_1 + 31 && VAR_13[VAR_14])
    return 1;

  if (VAR_5)
    {
      tree VAR_15;

      VAR_15 = FUNC_1 (VAR_10);




      if (VAR_14 == VAR_1 + 18 && VAR_13[VAR_14])
 return 1;




      if (VAR_14 == VAR_1 + 31
   && VAR_12
   && !FUNC_4 (VAR_15, VAR_10)
   && FUNC_2 (FUNC_0 (VAR_15)) == VAR_3
   && FUNC_3 (FUNC_0 (VAR_15)) <= VAR_7)
 return 1;
    }

  return 0;
}
