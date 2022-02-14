
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_5__ {struct eh_region* last_catch; struct eh_region* catch; } ;
struct TYPE_4__ {struct eh_region* next_catch; struct eh_region* prev_catch; scalar_t__ type_list; } ;
struct TYPE_6__ {TYPE_2__ try; TYPE_1__ catch; } ;
struct eh_region {TYPE_3__ u; int outer; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 struct eh_region* FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,int ) ;

struct eh_region *
FUNC_6 (struct eh_region *VAR_3, tree VAR_4)
{
  struct eh_region *VAR_5, *VAR_6;
  tree VAR_7, VAR_8;



  VAR_7 = VAR_4;
  if (VAR_4)
    {
      if (FUNC_1 (VAR_4) != VAR_2)
 VAR_7 = FUNC_5 (VAR_1, VAR_4, VAR_1);

      VAR_8 = VAR_7;
      for (; VAR_8; VAR_8 = FUNC_0 (VAR_8))
 FUNC_3 (FUNC_2 (VAR_8));
    }

  VAR_5 = FUNC_4 (VAR_0, VAR_3->outer);
  VAR_5->u.catch.type_list = VAR_7;
  VAR_6 = VAR_3->u.try.last_catch;
  VAR_5->u.catch.prev_catch = VAR_6;
  if (VAR_6)
    VAR_6->u.catch.next_catch = VAR_5;
  else
    VAR_3->u.try.catch = VAR_5;
  VAR_3->u.try.last_catch = VAR_5;

  return VAR_5;
}
