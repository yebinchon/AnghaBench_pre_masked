
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int extra_cost; struct TYPE_5__* prev_sri; } ;
typedef TYPE_1__ secondary_reload_info ;
typedef int rtx ;
typedef enum reg_class { ____Placeholder_reg_class } reg_class ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_6__ {int (* secondary_reload ) (int,int ,int,int,TYPE_1__*) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,int,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ VAR_1 ;
 int*** VAR_2 ;
 int FUNC_8 (int,int ,int,int,TYPE_1__*) ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static int
FUNC_9 (rtx VAR_4, enum machine_mode VAR_5, enum reg_class VAR_6, int VAR_7,
    secondary_reload_info *VAR_8)
{
  enum reg_class VAR_9 = VAR_0;
  secondary_reload_info VAR_10;




  if (FUNC_1 (VAR_4) == VAR_1)
    return 0;


  VAR_6 = FUNC_4 (VAR_4, VAR_6);





  VAR_10.prev_sri = VAR_8;
  VAR_10.extra_cost = 0;
  VAR_9 = VAR_3.secondary_reload (VAR_7, VAR_4, VAR_6, VAR_5, &VAR_10);

  if (VAR_9 != VAR_0)
    return (VAR_2[VAR_5][(int) VAR_9][(int) VAR_6]
     + VAR_10.extra_cost
     + FUNC_9 (VAR_4, VAR_5, VAR_9, VAR_7, &VAR_10));





  if (FUNC_3 (VAR_4) || VAR_6 == VAR_0)
    return VAR_10.extra_cost + FUNC_2 (VAR_5, VAR_6, VAR_7);

  else if (FUNC_7 (VAR_4))
    return (VAR_10.extra_cost
     + VAR_2[VAR_5][(int) FUNC_6 (FUNC_5 (VAR_4))][(int) VAR_6]);

  else

    return VAR_10.extra_cost + FUNC_0 (1);
}
