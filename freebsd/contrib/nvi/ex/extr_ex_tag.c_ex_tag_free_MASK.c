
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * tag_last; int tagfq; int tq; } ;
typedef int TAGQ ;
typedef int TAGF ;
typedef int SCR ;
typedef TYPE_1__ EX_PRIVATE ;


 TYPE_1__* FUNC_0 (int *) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;

int
FUNC_5(SCR *VAR_0)
{
 EX_PRIVATE *VAR_1;
 TAGF *VAR_2;
 TAGQ *VAR_3;


 VAR_1 = FUNC_0(VAR_0);
 while ((VAR_3 = FUNC_1(VAR_1->tq)) != ((void*)0))
  FUNC_4(VAR_0, VAR_3);
 while ((VAR_2 = FUNC_1(VAR_1->tagfq)) != ((void*)0))
  FUNC_3(VAR_0, VAR_2);
 if (VAR_1->tag_last != ((void*)0))
  FUNC_2(VAR_1->tag_last);
 return (0);
}
