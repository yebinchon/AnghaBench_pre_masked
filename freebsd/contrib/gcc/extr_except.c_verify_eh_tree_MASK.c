
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct function {TYPE_1__* eh; } ;
struct eh_region {int region_number; struct eh_region* next_peer; struct eh_region* outer; struct eh_region* inner; scalar_t__ may_contain_throw; } ;
struct TYPE_6__ {TYPE_2__* eh; } ;
struct TYPE_5__ {int region_array; } ;
struct TYPE_4__ {int last_region_number; struct eh_region* region_tree; } ;


 struct eh_region* FUNC_0 (int ,int ,int) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (int ,struct function*) ;
 int VAR_1 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;

void
FUNC_4 (struct function *VAR_3)
{
  struct eh_region *VAR_4, *VAR_5 = ((void*)0);
  bool VAR_6 = 0;
  int VAR_7 = 0;
  int VAR_8 = 0;
  int VAR_9;
  int VAR_10 = 0;

  VAR_4 = VAR_3->eh->region_tree;
  if (! VAR_4)
    return;
  for (VAR_9 = VAR_3->eh->last_region_number; VAR_9 > 0; --VAR_9)
    if ((VAR_4 = FUNC_0 (VAR_1, VAR_0->eh->region_array, VAR_9)))
      {
 VAR_8++;
 if (VAR_4->region_number != VAR_9)
   {
     FUNC_2 ("region_array is corrupted for region %i", VAR_4->region_number);
     VAR_6 = 1;
   }
      }

  while (1)
    {
      if (FUNC_0 (VAR_1, VAR_0->eh->region_array, VAR_4->region_number) != VAR_4)
 {
   FUNC_2 ("region_array is corrupted for region %i", VAR_4->region_number);
   VAR_6 = 1;
 }
      if (VAR_4->outer != VAR_5)
 {
   FUNC_2 ("outer block of region %i is wrong", VAR_4->region_number);
   VAR_6 = 1;
 }
      if (VAR_4->may_contain_throw && VAR_5 && !VAR_5->may_contain_throw)
 {
   FUNC_2 ("region %i may contain throw and is contained in region that may not",
   VAR_4->region_number);
   VAR_6 = 1;
 }
      if (VAR_10 < 0)
 {
   FUNC_2 ("negative nesting depth of region %i", VAR_4->region_number);
   VAR_6 = 1;
 }
      VAR_7 ++;

      if (VAR_4->inner)
 VAR_5 = VAR_4, VAR_4 = VAR_4->inner, VAR_10++;

      else if (VAR_4->next_peer)
 VAR_4 = VAR_4->next_peer;

      else
 {
   do {
     VAR_4 = VAR_4->outer;
     VAR_10--;
     if (VAR_4 == ((void*)0))
       {
  if (VAR_10 != -1)
    {
      FUNC_2 ("tree list ends on depth %i", VAR_10 + 1);
      VAR_6 = 1;
    }
  if (VAR_8 != VAR_7)
    {
      FUNC_2 ("array does not match the region tree");
      VAR_6 = 1;
    }
  if (VAR_6)
    {
      FUNC_1 (VAR_2, VAR_3);
      FUNC_3 ("verify_eh_tree failed");
    }
         return;
       }
     VAR_5 = VAR_4->outer;
   } while (VAR_4->next_peer == ((void*)0));
   VAR_4 = VAR_4->next_peer;
 }
    }
}
