
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_6__ {scalar_t__ address; } ;
struct TYPE_5__ {scalar_t__ refcount; int fix_size; struct TYPE_5__* next; int value; scalar_t__ offset; scalar_t__ max_address; scalar_t__ min_address; } ;
typedef TYPE_1__ Mnode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (scalar_t__,char*,unsigned int,unsigned long,unsigned long) ;
 int FUNC_6 (char,scalar_t__) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 TYPE_3__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static void
FUNC_17 (rtx VAR_6)
{
  Mnode * VAR_7;
  Mnode * VAR_8;
  int VAR_9 = 0;

  if (VAR_0)
    for (VAR_7 = VAR_3; VAR_7 != ((void*)0); VAR_7 = VAR_7->next)
      if (VAR_7->refcount > 0 && VAR_7->fix_size == 8)
 {
   VAR_9 = 1;
   break;
 }

  if (VAR_1)
    FUNC_5 (VAR_1,
      ";; Emitting minipool after insn %u; address %ld; align %lu (bytes)\n",
      FUNC_0 (VAR_6), (unsigned long) VAR_2->address, VAR_9 ? 8 : 4);

  VAR_6 = FUNC_4 (FUNC_16 (), VAR_6);
  VAR_6 = FUNC_3 (VAR_9 ? FUNC_10 () : FUNC_9 (), VAR_6);
  VAR_6 = FUNC_4 (VAR_4, VAR_6);

  for (VAR_7 = VAR_3; VAR_7 != ((void*)0); VAR_7 = VAR_8)
    {
      if (VAR_7->refcount > 0)
 {
   if (VAR_1)
     {
       FUNC_5 (VAR_1,
         ";;  Offset %u, min %ld, max %ld ",
         (unsigned) VAR_7->offset, (unsigned long) VAR_7->min_address,
         (unsigned long) VAR_7->max_address);
       FUNC_1 (VAR_1, VAR_7->value);
       FUNC_6 ('\n', VAR_1);
     }

   switch (VAR_7->fix_size)
     {
     default:
       FUNC_8 ();
     }
 }

      VAR_8 = VAR_7->next;
      FUNC_7 (VAR_7);
    }

  VAR_3 = VAR_5 = ((void*)0);
  VAR_6 = FUNC_3 (FUNC_15 (), VAR_6);
  VAR_6 = FUNC_2 (VAR_6);
}
