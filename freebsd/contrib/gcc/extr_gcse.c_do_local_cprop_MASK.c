
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct elt_loc_list {scalar_t__ loc; int setting_insn; scalar_t__ in_libcall; struct elt_loc_list* next; } ;
typedef scalar_t__ rtx ;
struct TYPE_3__ {struct elt_loc_list* locs; } ;
typedef TYPE_1__ cselib_val ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (scalar_t__,scalar_t__,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__,scalar_t__,int) ;
 TYPE_1__* FUNC_12 (scalar_t__,int ,int ) ;
 int * VAR_4 ;
 scalar_t__ FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int *,char*,...) ;
 int FUNC_15 (int) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_17 (int *,scalar_t__) ;
 scalar_t__ FUNC_18 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static bool
FUNC_19 (rtx VAR_7, rtx VAR_8, bool VAR_9, rtx *VAR_10)
{
  rtx VAR_11 = ((void*)0), VAR_12 = ((void*)0);



  if (FUNC_7 (VAR_7)
      && (FUNC_6 (VAR_7) >= VAR_0
          || (FUNC_1 (FUNC_5 (VAR_8)) != VAR_3
       && FUNC_10 (FUNC_5 (VAR_8)) < 0)))
    {
      cselib_val *VAR_13 = FUNC_12 (VAR_7, FUNC_2 (VAR_7), 0);
      struct elt_loc_list *VAR_14;

      if (!VAR_13)
 return 0;
      for (VAR_14 = VAR_13->locs; VAR_14; VAR_14 = VAR_14->next)
 {
   rtx VAR_15 = VAR_14->loc;
   rtx VAR_16;


   if (VAR_14->in_libcall && ! FUNC_0 (VAR_15))
     continue;

   if (FUNC_16 (VAR_15))
     VAR_12 = VAR_15;
   if (FUNC_7 (VAR_15) && FUNC_6 (VAR_15) >= VAR_0





       && (!(VAR_16 = FUNC_13 (VAR_14->setting_insn, VAR_2, VAR_1))
    || ! FUNC_4 (FUNC_8 (VAR_16, 0))))
     VAR_11 = VAR_15;
 }
      if (VAR_12 && FUNC_11 (VAR_8, VAR_7, VAR_12, VAR_9))
 {





   bool VAR_17;

   VAR_17 = FUNC_9 (VAR_7, VAR_12, VAR_8, VAR_10);
   FUNC_15 (VAR_17);

   if (VAR_4 != ((void*)0))
     {
       FUNC_14 (VAR_4, "LOCAL CONST-PROP: Replacing reg %d in ",
         FUNC_6 (VAR_7));
       FUNC_14 (VAR_4, "insn %d with constant ",
         FUNC_3 (VAR_8));
       FUNC_17 (VAR_4, VAR_12);
       FUNC_14 (VAR_4, "\n");
     }
   VAR_5++;
   return 1;
 }
      else if (VAR_11 && VAR_11 != VAR_7 && FUNC_18 (VAR_7, VAR_11, VAR_8))
 {
   FUNC_9 (VAR_7, VAR_11, VAR_8, VAR_10);
   if (VAR_4 != ((void*)0))
     {
       FUNC_14 (VAR_4,
         "LOCAL COPY-PROP: Replacing reg %d in insn %d",
         FUNC_6 (VAR_7), FUNC_3 (VAR_8));
       FUNC_14 (VAR_4, " with reg %d\n", FUNC_6 (VAR_11));
     }
   VAR_6++;
   return 1;
 }
    }
  return 0;
}
