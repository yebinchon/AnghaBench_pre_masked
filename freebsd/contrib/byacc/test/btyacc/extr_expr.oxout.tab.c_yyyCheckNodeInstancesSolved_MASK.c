
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* noderef; } ;
struct TYPE_7__ {int prodNum; int whichSym; scalar_t__* refCountList; TYPE_2__ parent; int parentIsStack; } ;
typedef TYPE_3__ yyyGNT ;
struct TYPE_5__ {int prodNum; } ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 char* FUNC_2 (int,int,int) ;
 char* FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;

void FUNC_7(yyyGNT *VAR_1)
  {int VAR_2,VAR_3,VAR_4,VAR_5,VAR_6,VAR_7;
   int VAR_8 = 0;

   if (VAR_1->prodNum != 0)
     {VAR_7 = 0;
      VAR_5 = VAR_1->prodNum;
      VAR_6 = 0;
     }
   else
     {VAR_7 = 1;
      VAR_5 = VAR_1->parent.noderef->prodNum;
      VAR_6 = VAR_1->whichSym;
     }
   VAR_2 = FUNC_6(VAR_5,VAR_6);
   VAR_3 = FUNC_5(VAR_2);
   for (VAR_4=0; VAR_4<VAR_3; VAR_4++)
     if ((VAR_1->refCountList)[VAR_4] != 0) VAR_8 += 1;
   if (VAR_8)
     {FUNC_0(VAR_0,
      "\nFound node that has %d unsolved attribute instance(s).\n",
              VAR_8
             );
      FUNC_0(VAR_0,"Node is labeled \"%s\".\n",
             FUNC_3(VAR_5,VAR_6));
      if (VAR_7)
        {FUNC_1("Node is terminal.  Its parent production is:\n  ",VAR_0);
         FUNC_4(VAR_5);
        }
      else
        {FUNC_1("Node is nonterminal.  ",VAR_0);
         if (!(VAR_1->parentIsStack))
           {FUNC_0(VAR_0,
                    "Node is %dth child in its parent production:\n  ",
                   VAR_1->whichSym
                  );
            FUNC_4(VAR_1->parent.noderef->prodNum);
           }
         FUNC_1("Node is on left hand side of this production:\n  ",VAR_0);
         FUNC_4(VAR_1->prodNum);
        }
      FUNC_1("The following instances are unsolved:\n",VAR_0);
      for (VAR_4=0; VAR_4<VAR_3; VAR_4++)
        if ((VAR_1->refCountList)[VAR_4] != 0)
          FUNC_0(VAR_0,"     %-16s still has %1ld dependencies.\n",
                  FUNC_2(VAR_5,VAR_6,VAR_4),(VAR_1->refCountList)[VAR_4]);
     }
  }
