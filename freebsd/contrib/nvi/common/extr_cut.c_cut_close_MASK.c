
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int textq; } ;
struct TYPE_6__ {TYPE_2__ dcb_store; int cutq; } ;
typedef TYPE_1__ GS ;
typedef TYPE_2__ CB ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;

void
FUNC_5(GS *VAR_1)
{
 CB *VAR_2;


 while ((VAR_2 = FUNC_0(VAR_1->cutq)) != ((void*)0)) {
  if (!FUNC_2(VAR_2->textq))
   FUNC_4(VAR_2->textq);
  FUNC_1(VAR_1->cutq, VAR_0);
  FUNC_3(VAR_2);
 }


 VAR_2 = &VAR_1->dcb_store;
 if (!FUNC_2(VAR_2->textq))
  FUNC_4(VAR_2->textq);
}
