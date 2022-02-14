
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct eh_region {int type; scalar_t__ region_number; struct eh_region* next_peer; struct eh_region* inner; struct eh_region* outer; } ;
typedef enum eh_region_type { ____Placeholder_eh_region_type } eh_region_type ;
struct TYPE_4__ {TYPE_1__* eh; } ;
struct TYPE_3__ {scalar_t__ last_region_number; struct eh_region* region_tree; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct eh_region* FUNC_2 (int) ;

__attribute__((used)) static struct eh_region *
FUNC_3 (enum eh_region_type VAR_1, struct eh_region *VAR_2)
{
  struct eh_region *VAR_3;






  VAR_3 = FUNC_2 (sizeof (*VAR_3));
  VAR_3->type = VAR_1;
  VAR_3->outer = VAR_2;
  if (VAR_2)
    {
      VAR_3->next_peer = VAR_2->inner;
      VAR_2->inner = VAR_3;
    }
  else
    {
      VAR_3->next_peer = VAR_0->eh->region_tree;
      VAR_0->eh->region_tree = VAR_3;
    }

  VAR_3->region_number = ++VAR_0->eh->last_region_number;

  return VAR_3;
}
