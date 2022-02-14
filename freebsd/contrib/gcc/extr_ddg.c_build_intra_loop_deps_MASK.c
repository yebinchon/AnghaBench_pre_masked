
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct deps {int dummy; } ;
typedef scalar_t__ rtx ;
typedef TYPE_1__* ddg_ptr ;
typedef TYPE_2__* ddg_node_ptr ;
struct TYPE_13__ {int successors; int insn; } ;
struct TYPE_12__ {int num_nodes; TYPE_2__* nodes; int bb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (struct deps*) ;
 int FUNC_10 (int ,int ,scalar_t__*,scalar_t__*) ;
 TYPE_2__* FUNC_11 (TYPE_1__*,scalar_t__) ;
 int FUNC_12 (struct deps*) ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (struct deps*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_16 (ddg_ptr VAR_0)
{
  int VAR_1;

  struct deps VAR_2;
  rtx VAR_3, VAR_4, VAR_5;


  FUNC_13 ();
  FUNC_12 (&VAR_2);


  FUNC_10 (VAR_0->bb, VAR_0->bb, &VAR_3, &VAR_4);
  FUNC_15 (&VAR_2, VAR_3, VAR_4);



  for (VAR_1 = 0; VAR_1 < VAR_0->num_nodes; VAR_1++)
    {
      ddg_node_ptr VAR_6 = &VAR_0->nodes[VAR_1];

      if (! FUNC_1 (VAR_6->insn))
 continue;

      for (VAR_5 = FUNC_2 (VAR_6->insn); VAR_5; VAR_5 = FUNC_4 (VAR_5, 1))
 {
   ddg_node_ptr VAR_7 = FUNC_11 (VAR_0, FUNC_4 (VAR_5, 0));

   if (!VAR_7)
     continue;

         FUNC_5 (VAR_6->insn, VAR_5);
   FUNC_7 (VAR_0, VAR_7, VAR_6,
     FUNC_0 (VAR_7->insn));
 }



      if (FUNC_14 (VAR_6->insn))
 {
   int VAR_8;

   for (VAR_8 = 0; VAR_8 <= VAR_1; VAR_8++)
     {
       ddg_node_ptr VAR_9 = &VAR_0->nodes[VAR_8];
       if (FUNC_14 (VAR_9->insn))


          if (! FUNC_3 (VAR_6->successors, VAR_8))
      FUNC_6 (VAR_0, VAR_6, VAR_9);
            }
        }
    }


  FUNC_8 ();
  FUNC_9 (&VAR_2);
}
