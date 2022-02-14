
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tty {int * t_lsc; int t_outq; } ;
typedef TYPE_1__* ng_h4_info_p ;
struct TYPE_4__ {int dying; int node; int timo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct tty*,int) ;

__attribute__((used)) static int
FUNC_7(struct tty *VAR_2, int VAR_3)
{
 ng_h4_info_p VAR_4 = (ng_h4_info_p) VAR_2->t_lsc;

 FUNC_6(VAR_2, VAR_0 | VAR_1);
 FUNC_3(&VAR_2->t_outq);

 if (VAR_4 != ((void*)0)) {
  FUNC_0(VAR_4);

  if (FUNC_2(&VAR_4->timo))
   FUNC_5(&VAR_4->timo, VAR_4->node);

  VAR_2->t_lsc = ((void*)0);
  VAR_4->dying = 1;

  FUNC_1(VAR_4);

  FUNC_4(VAR_4->node);
 }

 return (0);
}
