
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
struct eh_region {scalar_t__ resume; } ;
struct TYPE_4__ {TYPE_1__* eh; } ;
struct TYPE_3__ {int region_array; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct eh_region* FUNC_2 (int ,int ,int) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int) ;

void
FUNC_7 (tree VAR_3)
{
  int VAR_4 = FUNC_0 (FUNC_1 (VAR_3, 0));
  struct eh_region *VAR_5 = FUNC_2 (VAR_2,
         VAR_1->eh->region_array, VAR_4);

  FUNC_5 (!VAR_5->resume);
  VAR_5->resume = FUNC_4 (FUNC_6 (VAR_0, VAR_4));
  FUNC_3 ();
}
