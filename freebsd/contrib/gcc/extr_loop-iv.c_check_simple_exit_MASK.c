
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct niter_desc {int simple_p; TYPE_1__* in_edge; TYPE_1__* out_edge; } ;
struct loop {int latch; } ;
typedef int rtx ;
typedef TYPE_1__* edge ;
typedef TYPE_2__* basic_block ;
struct TYPE_9__ {struct loop* loop_father; } ;
struct TYPE_8__ {int flags; TYPE_2__* src; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,TYPE_2__*) ;
 int FUNC_4 (int ,int *,int,int) ;
 int FUNC_5 (struct loop*,int ,int ,struct niter_desc*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7 (struct loop *VAR_2, edge VAR_3, struct niter_desc *VAR_4)
{
  basic_block VAR_5;
  rtx VAR_6, VAR_7;
  edge VAR_8;

  VAR_5 = VAR_3->src;
  VAR_4->simple_p = 0;


  if (VAR_5->loop_father != VAR_2)
    return;


  if (!FUNC_3 (VAR_0, VAR_2->latch, VAR_5))
    return;


  if (!FUNC_2 (FUNC_0 (VAR_5)))
    return;

  VAR_8 = FUNC_1 (VAR_5, 0);
  if (VAR_8 == VAR_3)
    VAR_8 = FUNC_1 (VAR_5, 1);

  VAR_4->out_edge = VAR_3;
  VAR_4->in_edge = VAR_8;


  if (!(VAR_6 = FUNC_4 (FUNC_0 (VAR_8->src), &VAR_7, 0, 0)))
    return;

  if (VAR_8->flags & VAR_1)
    {
      VAR_6 = FUNC_6 (VAR_6);
      if (!VAR_6)
 return;
    }



  FUNC_5 (VAR_2, VAR_7, VAR_6, VAR_4);
}
