
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct function {TYPE_1__* eh; } ;
struct eh_region {int region_number; struct eh_region* outer; } ;
typedef int sbitmap ;
struct TYPE_2__ {scalar_t__ last_region_number; int region_tree; int region_array; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 struct eh_region* FUNC_2 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

int
FUNC_7 (struct function *VAR_1, int VAR_2, int VAR_3)
{
  struct eh_region *VAR_4, *VAR_5;
  sbitmap VAR_6;

  FUNC_3 (VAR_1->eh->last_region_number > 0);
  FUNC_3 (VAR_1->eh->region_tree);

  VAR_4 = FUNC_2 (VAR_0, VAR_1->eh->region_array, VAR_2);
  VAR_5 = FUNC_2 (VAR_0, VAR_1->eh->region_array, VAR_3);
  FUNC_3 (VAR_4 != ((void*)0));
  FUNC_3 (VAR_5 != ((void*)0));

  VAR_6 = FUNC_4 (VAR_1->eh->last_region_number + 1);
  FUNC_6 (VAR_6);

  do
    {
      FUNC_0 (VAR_6, VAR_5->region_number);
      VAR_5 = VAR_5->outer;
    }
  while (VAR_5);

  do
    {
      if (FUNC_1 (VAR_6, VAR_4->region_number))
 {
   FUNC_5 (VAR_6);
   return VAR_4->region_number;
 }
      VAR_4 = VAR_4->outer;
    }
  while (VAR_4);

  FUNC_5 (VAR_6);
  return -1;
}
