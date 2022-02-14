
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yyySolvedSAlistCell {int dummy; } ;
struct yyyRSitem {int dummy; } ;


 scalar_t__ FUNC_0 (size_t,size_t) ;
 struct yyyRSitem* VAR_0 ;
 struct yyyRSitem* VAR_1 ;
 struct yyyRSitem* VAR_2 ;
 int VAR_3 ;
 struct yyySolvedSAlistCell* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*) ;

void FUNC_2(void)
  {
   static int VAR_6 = 0;
   if (VAR_6) return;

   if ((VAR_1 = (struct yyyRSitem *)
         FUNC_0((size_t)(VAR_3+1), (size_t)sizeof(struct yyyRSitem))
       )
       ==
       ((struct yyyRSitem *) ((void*)0))
      )
      FUNC_1("malloc error in ox ready set space allocation\n");
   VAR_1++;
   VAR_0 = VAR_1 + VAR_3;


   if ((VAR_4 = (struct yyySolvedSAlistCell *)
          FUNC_0((size_t)(VAR_5+1), (size_t)sizeof(struct yyySolvedSAlistCell))
       )
       ==
       ((struct yyySolvedSAlistCell *) ((void*)0))
      )
      FUNC_1("malloc error in stack solved list space allocation\n");
   VAR_6 = 1;

   VAR_2 = VAR_1 - 1;
  }
