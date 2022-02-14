
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsocket {int state; int cq_lock; int ctrl_seqno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct rsocket*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct rsocket*,int *,int ,int ,int ,uintptr_t,uintptr_t) ;

__attribute__((used)) static void FUNC_5(struct rsocket *VAR_3)
{
 FUNC_0(&VAR_3->cq_lock);
 if (FUNC_2(VAR_3) && (VAR_3->state & VAR_2)) {
  VAR_3->ctrl_seqno++;
  FUNC_4(VAR_3, ((void*)0), 0, FUNC_3(VAR_1, VAR_0),
         0, (uintptr_t) ((void*)0), (uintptr_t) ((void*)0));
 }
 FUNC_1(&VAR_3->cq_lock);
}
