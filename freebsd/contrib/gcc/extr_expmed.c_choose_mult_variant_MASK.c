
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mult_cost {int cost; int latency; } ;
struct TYPE_4__ {int cost; int latency; } ;
struct algorithm {TYPE_1__ cost; } ;
typedef enum mult_variant { ____Placeholder_mult_variant } mult_variant ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HOST_WIDE_INT ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct algorithm*,int,struct mult_cost*,int) ;

__attribute__((used)) static bool
FUNC_4 (enum machine_mode VAR_6, HOST_WIDE_INT VAR_7,
       struct algorithm *VAR_8, enum mult_variant *VAR_9,
       int VAR_10)
{
  struct algorithm VAR_11;
  struct mult_cost VAR_12;
  int VAR_13;


  if (VAR_10 < 0)
    return 0;




  VAR_13 = 2 * FUNC_1 (VAR_6) * VAR_1[VAR_6];
  if (VAR_10 > VAR_13)
    VAR_10 = VAR_13;

  *VAR_9 = VAR_3;
  VAR_12.cost = VAR_10;
  VAR_12.latency = VAR_10;
  FUNC_3 (VAR_8, VAR_7, &VAR_12, VAR_6);



  if (VAR_0 >= FUNC_1 (VAR_6))
    {
      VAR_13 = VAR_4[VAR_6];
      if (FUNC_2 (&VAR_8->cost, VAR_10))
 {
   VAR_12.cost = VAR_8->cost.cost - VAR_13;
   VAR_12.latency = VAR_8->cost.latency - VAR_13;
 }
      else
 {
   VAR_12.cost = VAR_10 - VAR_13;
   VAR_12.latency = VAR_10 - VAR_13;
 }

      FUNC_3 (&VAR_11, -VAR_7, &VAR_12, VAR_6);
      VAR_11 += VAR_13;
      VAR_11 += VAR_13;
      if (FUNC_0 (&VAR_11, &VAR_8->cost))
 *VAR_8 = VAR_11, *VAR_9 = VAR_5;
    }


  VAR_13 = VAR_1[VAR_6];
  if (FUNC_2 (&VAR_8->cost, VAR_10))
    {
      VAR_12.cost = VAR_8->cost.cost - VAR_13;
      VAR_12.latency = VAR_8->cost.latency - VAR_13;
    }
  else
    {
      VAR_12.cost = VAR_10 - VAR_13;
      VAR_12.latency = VAR_10 - VAR_13;
    }

  FUNC_3 (&VAR_11, VAR_7 - 1, &VAR_12, VAR_6);
  VAR_11 += VAR_13;
  VAR_11 += VAR_13;
  if (FUNC_0 (&VAR_11, &VAR_8->cost))
    *VAR_8 = VAR_11, *VAR_9 = VAR_2;

  return FUNC_2 (&VAR_8->cost, VAR_10);
}
