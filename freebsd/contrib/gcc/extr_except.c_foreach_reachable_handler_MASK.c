
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tree ;
struct reachable_info {void (* callback ) (struct eh_region*,void*) ;void* callback_data; } ;
struct TYPE_8__ {struct eh_region* prev_try; } ;
struct TYPE_7__ {int type; } ;
struct TYPE_9__ {TYPE_3__ cleanup; TYPE_2__ throw; } ;
struct eh_region {scalar_t__ type; struct eh_region* outer; TYPE_4__ u; } ;
typedef int info ;
struct TYPE_10__ {TYPE_1__* eh; } ;
struct TYPE_6__ {int region_array; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct eh_region* FUNC_0 (int ,int ,int) ;
 TYPE_5__* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct reachable_info*,int ,int) ;
 scalar_t__ FUNC_2 (struct eh_region*,int ,struct reachable_info*) ;

void
FUNC_3 (int VAR_6, bool VAR_7,
      void (*VAR_8) (struct eh_region *, void *),
      void *VAR_9)
{
  struct reachable_info VAR_10;
  struct eh_region *VAR_11;
  tree VAR_12;

  FUNC_1 (&VAR_10, 0, sizeof (VAR_10));
  VAR_10.callback = VAR_8;
  VAR_10.callback_data = VAR_9;

  VAR_11 = FUNC_0 (VAR_5, VAR_4->eh->region_array, VAR_6);

  VAR_12 = VAR_2;
  if (VAR_7)
    {


      if (VAR_11 == ((void*)0))
 return;
      VAR_11 = VAR_11->outer;
    }
  else if (VAR_11->type == VAR_1)
    {
      VAR_12 = VAR_11->u.throw.type;
      VAR_11 = VAR_11->outer;
    }

  while (VAR_11)
    {
      if (FUNC_2 (VAR_11, VAR_12, &VAR_10) >= VAR_3)
 break;




      if (VAR_11->type == VAR_0)
 VAR_11 = VAR_11->u.cleanup.prev_try;
      else
 VAR_11 = VAR_11->outer;
    }
}
