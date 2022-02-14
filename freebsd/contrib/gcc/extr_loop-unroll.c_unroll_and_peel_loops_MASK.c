
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct loops {struct loop* tree_root; } ;
struct TYPE_2__ {int decision; } ;
struct loop {TYPE_1__ lpt_decision; struct loop* outer; struct loop* inner; struct loop* next; } ;


 int VAR_0 ;






 int FUNC_0 (struct loops*,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct loops*,struct loop*) ;
 int FUNC_4 (struct loops*,int) ;
 int FUNC_5 (struct loops*,struct loop*) ;
 int FUNC_6 (struct loops*,struct loop*) ;
 int FUNC_7 (struct loops*,struct loop*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct loops*) ;

void
FUNC_10 (struct loops *VAR_1, int VAR_2)
{
  struct loop *VAR_3, *VAR_4;
  bool VAR_5;



  FUNC_4 (VAR_1, VAR_2);


  FUNC_0 (VAR_1, VAR_2);

  VAR_3 = VAR_1->tree_root;
  while (VAR_3->inner)
    VAR_3 = VAR_3->inner;


  while (VAR_3 != VAR_1->tree_root)
    {
      if (VAR_3->next)
 {
   VAR_4 = VAR_3->next;
   while (VAR_4->inner)
     VAR_4 = VAR_4->inner;
 }
      else
 VAR_4 = VAR_3->outer;

      VAR_5 = 1;

      switch (VAR_3->lpt_decision.decision)
 {
 case 132:

   FUNC_1 ();
 case 131:
   FUNC_3 (VAR_1, VAR_3);
   break;
 case 130:
   FUNC_5 (VAR_1, VAR_3);
   break;
 case 129:
   FUNC_6 (VAR_1, VAR_3);
   break;
 case 128:
   FUNC_7 (VAR_1, VAR_3);
   break;
 case 133:
   VAR_5 = 0;
   break;
 default:
   FUNC_1 ();
 }
      if (VAR_5)
 {




 }
      VAR_3 = VAR_4;
    }

  FUNC_2 ();
}
