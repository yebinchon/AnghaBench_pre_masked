
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ng_queue {int q_flags; int queue; } ;
typedef TYPE_2__* node_p ;
typedef TYPE_3__* item_p ;
struct TYPE_9__ {int depth; TYPE_1__* apply; } ;
struct TYPE_8__ {struct ng_queue nd_input_queue; } ;
struct TYPE_7__ {int error; int context; int (* apply ) (int ,int ) ;int refs; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct ng_queue*) ;
 int FUNC_2 (struct ng_queue*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void
FUNC_9(node_p VAR_3)
{
 struct ng_queue *VAR_4 = &VAR_3->nd_input_queue;
 item_p VAR_5;

 FUNC_1(VAR_4);
 while ((VAR_5 = FUNC_4(&VAR_4->queue)) != ((void*)0)) {
  FUNC_5(&VAR_4->queue, VAR_2);
  if (FUNC_3(&VAR_4->queue))
   FUNC_6(&VAR_4->q_flags, VAR_1);
  FUNC_2(VAR_4);


  if (VAR_5->apply != ((void*)0)) {
   if (VAR_5->depth == 1)
    VAR_5->apply->error = VAR_0;
   if (FUNC_7(&VAR_5->apply->refs)) {
    (*VAR_5->apply->apply)(VAR_5->apply->context,
        VAR_5->apply->error);
   }
  }
  FUNC_0(VAR_5);
  FUNC_1(VAR_4);
 }
 FUNC_2(VAR_4);
}
