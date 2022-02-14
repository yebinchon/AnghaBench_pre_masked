
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct elt_loc_list {struct elt_loc_list* next; int loc; } ;
struct elt_list {struct elt_list* next; TYPE_1__* elt; } ;
typedef int rtx ;
struct TYPE_5__ {scalar_t__ locs; struct TYPE_5__* next_containing_mem; struct elt_list* addr_list; } ;
typedef TYPE_1__ cselib_val ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_6 (int ,int ,int ) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_7 (int ) ;
 int VAR_5 ;
 int FUNC_8 (struct elt_list**) ;
 int FUNC_9 (struct elt_loc_list**) ;

__attribute__((used)) static void
FUNC_10 (rtx VAR_6)
{
  cselib_val **VAR_7, *VAR_8, *VAR_9;
  int VAR_10 = 0;
  rtx VAR_11;

  VAR_11 = FUNC_4 (FUNC_7 (FUNC_3 (VAR_6, 0)));
  VAR_6 = FUNC_4 (VAR_6);

  VAR_7 = &VAR_4;
  for (VAR_8 = *VAR_7; VAR_8 != &VAR_3; VAR_8 = VAR_9)
    {
      bool VAR_12 = 0;
      struct elt_loc_list **VAR_13 = &VAR_8->locs;
      int VAR_14 = VAR_8->locs != 0;

      while (*VAR_13)
 {
   rtx VAR_15 = (*VAR_13)->loc;
   cselib_val *VAR_16;
   struct elt_list **VAR_17;



   if (!FUNC_1 (VAR_15))
     {
       VAR_13 = &(*VAR_13)->next;
       continue;
     }
   if (VAR_10 < FUNC_2 (VAR_0)
       && ! FUNC_5 (VAR_6, FUNC_0 (VAR_6), VAR_11,
             VAR_15, VAR_2))
     {
       VAR_12 = 1;
       VAR_10++;
       VAR_13 = &(*VAR_13)->next;
       continue;
     }




   VAR_16 = FUNC_6 (FUNC_3 (VAR_15, 0), VAR_1, 0);
   VAR_17 = &VAR_16->addr_list;
   for (;;)
     {
       if ((*VAR_17)->elt == VAR_8)
  {
    FUNC_8 (VAR_17);
    break;
  }

       VAR_17 = &(*VAR_17)->next;
     }

   FUNC_9 (VAR_13);
 }

      if (VAR_14 && VAR_8->locs == 0)
 VAR_5++;

      VAR_9 = VAR_8->next_containing_mem;
      if (VAR_12)
 {
   *VAR_7 = VAR_8;
   VAR_7 = &(*VAR_7)->next_containing_mem;
 }
      else
 VAR_8->next_containing_mem = ((void*)0);
    }
  *VAR_7 = &VAR_3;
}
