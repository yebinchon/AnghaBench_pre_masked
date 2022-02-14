
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct df_ref {int flags; } ;
struct TYPE_4__ {unsigned int bitmap_size; } ;
struct TYPE_3__ {unsigned int bitmap_size; } ;
struct df {TYPE_2__ use_info; TYPE_1__ def_info; } ;
struct dataflow {int flags; struct df* df; } ;
typedef int FILE ;


 struct df_ref* FUNC_0 (struct df*,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (struct df*,scalar_t__) ;
 int FUNC_2 (struct df_ref*) ;
 int FUNC_3 (struct df_ref*) ;
 scalar_t__ FUNC_4 (struct df_ref*) ;
 int FUNC_5 (struct df_ref*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (struct df_ref*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct df_ref* FUNC_7 (struct df*,unsigned int) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *,char*,...) ;

__attribute__((used)) static void
FUNC_10 (struct dataflow *VAR_5, FILE *VAR_6)
{
  struct df *VAR_7 = VAR_5->df;
  unsigned int VAR_8;

  if (VAR_5->flags & VAR_0)
    {
      FUNC_9 (VAR_6, "Def-use chains:\n");
      for (VAR_8 = 0; VAR_8 < VAR_7->def_info.bitmap_size; VAR_8++)
 {
   struct df_ref *VAR_9 = FUNC_0 (VAR_7, VAR_8);
   if (VAR_9)
     {
       FUNC_9 (VAR_6, "d%d bb %d luid %d insn %d reg %d ",
         VAR_8, FUNC_2 (VAR_9),
         FUNC_4 (VAR_9) ?
         FUNC_1 (VAR_7, FUNC_4 (VAR_9)):
         -1,
         FUNC_4 (VAR_9) ? FUNC_5 (VAR_9) : -1,
         FUNC_6 (VAR_9));
       if (VAR_9->flags & VAR_2)
  FUNC_9 (VAR_6, "read/write ");
       FUNC_8 (FUNC_3 (VAR_9), VAR_6);
       FUNC_9 (VAR_6, "\n");
     }
 }
    }

  if (VAR_5->flags & VAR_4)
    {
      FUNC_9 (VAR_6, "Use-def chains:\n");
      for (VAR_8 = 0; VAR_8 < VAR_7->use_info.bitmap_size; VAR_8++)
 {
   struct df_ref *VAR_10 = FUNC_7 (VAR_7, VAR_8);
   if (VAR_10)
     {
       FUNC_9 (VAR_6, "u%d bb %d luid %d insn %d reg %d ",
         VAR_8, FUNC_2 (VAR_10),
         FUNC_4 (VAR_10) ?
         FUNC_1 (VAR_7, FUNC_4 (VAR_10))
         : -1,
         FUNC_4 (FUNC_7 (VAR_7, VAR_8)) ?
         FUNC_5 (FUNC_7 (VAR_7,VAR_8))
         : -1,
         FUNC_6 (VAR_10));
       if (VAR_10->flags & VAR_2)
  FUNC_9 (VAR_6, "read/write ");
       if (VAR_10->flags & VAR_3)
  FUNC_9 (VAR_6, "stripped ");
       if (VAR_10->flags & VAR_1)
  FUNC_9 (VAR_6, "note ");
       FUNC_8 (FUNC_3 (VAR_10), VAR_6);
       FUNC_9 (VAR_6, "\n");
     }
 }
    }
}
