
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gtaskqueue {int tq_context; int (* tq_enqueue ) (int ) ;int tq_queue; int tq_flags; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct gtaskqueue*) ;
 int FUNC_2 (struct gtaskqueue*) ;
 int FUNC_3 (int ) ;

void
FUNC_4(struct gtaskqueue *VAR_1)
{

 FUNC_1(VAR_1);
 VAR_1->tq_flags &= ~VAR_0;
 if (!FUNC_0(&VAR_1->tq_queue))
  VAR_1->tq_enqueue(VAR_1->tq_context);
 FUNC_2(VAR_1);
}
