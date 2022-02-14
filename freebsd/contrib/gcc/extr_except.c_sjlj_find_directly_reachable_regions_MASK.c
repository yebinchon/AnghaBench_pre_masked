
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tree ;
struct sjlj_lp_info {int directly_reachable; } ;
struct TYPE_6__ {int type; } ;
struct TYPE_7__ {TYPE_2__ throw; } ;
struct eh_region {scalar_t__ type; size_t region_number; struct eh_region* outer; TYPE_3__ u; } ;
typedef scalar_t__ rtx ;
typedef enum reachable_code { ____Placeholder_reachable_code } reachable_code ;
struct TYPE_8__ {TYPE_1__* eh; } ;
struct TYPE_5__ {int region_array; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct eh_region* FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;
 TYPE_4__* VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (struct eh_region*,int ,int *) ;

__attribute__((used)) static bool
FUNC_8 (struct sjlj_lp_info *VAR_9)
{
  rtx VAR_10;
  bool VAR_11 = 0;

  for (VAR_10 = FUNC_6 (); VAR_10 ; VAR_10 = FUNC_2 (VAR_10))
    {
      struct eh_region *VAR_12;
      enum reachable_code VAR_13;
      tree VAR_14;
      rtx VAR_15;

      if (! FUNC_0 (VAR_10))
 continue;

      VAR_15 = FUNC_5 (VAR_10, VAR_3, VAR_1);
      if (!VAR_15 || FUNC_1 (FUNC_4 (VAR_15, 0)) <= 0)
 continue;

      VAR_12 = FUNC_3 (VAR_8, VAR_7->eh->region_array, FUNC_1 (FUNC_4 (VAR_15, 0)));

      VAR_14 = VAR_2;
      if (VAR_12->type == VAR_0)
 {
   VAR_14 = VAR_12->u.throw.type;
   VAR_12 = VAR_12->outer;
 }



      VAR_13 = VAR_6;
      for (; VAR_12; VAR_12 = VAR_12->outer)
 {
   VAR_13 = FUNC_7 (VAR_12, VAR_14, ((void*)0));
   if (VAR_13 != VAR_6)
     break;
 }
      if (VAR_13 == VAR_5 || VAR_13 == VAR_4)
 {
   VAR_9[VAR_12->region_number].directly_reachable = 1;
   VAR_11 = 1;
 }
    }

  return VAR_11;
}
