
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct frame_unwind_cache {int dummy; } ;
struct frame_info {int prologue_cache; int next; TYPE_1__* unwind; int type; int level; } ;
typedef enum lval_type { ____Placeholder_lval_type } lval_type ;
struct TYPE_2__ {int (* prev_register ) (int ,int *,int,int*,int*,int *,int*,void*) ;int type; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct frame_info*,int) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int *,int,int*,int*,int *,int*,void*) ;

void
FUNC_7 (struct frame_info *VAR_3, int VAR_4,
         int *VAR_5, enum lval_type *VAR_6,
         CORE_ADDR *VAR_7, int *VAR_8, void *VAR_9)
{
  struct frame_unwind_cache *VAR_10;

  if (VAR_1)
    {
      FUNC_0 (VAR_2, "{ frame_register_unwind (frame=%d,regnum=%d(%s),...) ",

     VAR_3->level, VAR_4,
     FUNC_1 (VAR_3, VAR_4));
    }



  FUNC_3 (VAR_5 != ((void*)0));
  FUNC_3 (VAR_6 != ((void*)0));
  FUNC_3 (VAR_7 != ((void*)0));
  FUNC_3 (VAR_8 != ((void*)0));






  FUNC_3 (VAR_3 != ((void*)0));


  if (VAR_3->unwind == ((void*)0))
    {
      VAR_3->unwind = FUNC_2 (VAR_3->next);





      VAR_3->type = VAR_3->unwind->type;
    }




  VAR_3->unwind->prev_register (VAR_3->next, &VAR_3->prologue_cache, VAR_4,
    VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);

  if (VAR_1)
    {
      FUNC_0 (VAR_2, "->");
      FUNC_0 (VAR_2, " *optimizedp=%d", (*VAR_5));
      FUNC_0 (VAR_2, " *lvalp=%d", (int) (*VAR_6));
      FUNC_0 (VAR_2, " *addrp=0x%s", FUNC_4 ((*VAR_7)));
      FUNC_0 (VAR_2, " *bufferp=");
      if (VAR_9 == ((void*)0))
 FUNC_0 (VAR_2, "<NULL>");
      else
 {
   int VAR_11;
   const unsigned char *VAR_12 = VAR_9;
   FUNC_0 (VAR_2, "[");
   for (VAR_11 = 0; VAR_11 < FUNC_5 (VAR_0, VAR_4); VAR_11++)
     FUNC_0 (VAR_2, "%02x", VAR_12[VAR_11]);
   FUNC_0 (VAR_2, "]");
 }
      FUNC_0 (VAR_2, " }\n");
    }
}
