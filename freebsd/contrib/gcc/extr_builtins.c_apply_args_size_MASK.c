
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_6__ {int decl; } ;
struct TYPE_4__ {scalar_t__ (* struct_value_rtx ) (int ,int ) ;} ;
struct TYPE_5__ {TYPE_1__ calls; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 TYPE_3__* VAR_6 ;
 int FUNC_5 (int) ;
 int* VAR_7 ;
 scalar_t__ FUNC_6 (int ,int ) ;
 TYPE_2__ VAR_8 ;

__attribute__((used)) static int
FUNC_7 (void)
{
  static int VAR_9 = -1;
  int VAR_10;
  unsigned int VAR_11;
  enum machine_mode VAR_12;


  if (VAR_9 < 0)
    {

      VAR_9 = FUNC_3 (VAR_2);



      if (VAR_8.calls.struct_value_rtx (VAR_6 ? FUNC_4 (VAR_6->decl) : 0, 0))
 VAR_9 += FUNC_3 (VAR_2);

      for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++)
 if (FUNC_1 (VAR_11))
   {
     VAR_12 = VAR_7[VAR_11];

     FUNC_5 (VAR_12 != VAR_3);

     VAR_10 = FUNC_2 (VAR_12) / VAR_0;
     if (VAR_9 % VAR_10 != 0)
       VAR_9 = FUNC_0 (VAR_9, VAR_10) * VAR_10;
     VAR_5[VAR_11] = VAR_9;
     VAR_9 += FUNC_3 (VAR_12);
     VAR_4[VAR_11] = VAR_12;
   }
 else
   {
     VAR_4[VAR_11] = VAR_3;
     VAR_5[VAR_11] = 0;
   }
    }
  return VAR_9;
}
