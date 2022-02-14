
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lapb_cb {int refcnt; int state; int window; int mode; int n2; int t2; int t1; int t2timer; int t1timer; int ack_queue; int write_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 struct lapb_cb* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct lapb_cb *FUNC_4(void)
{
 struct lapb_cb *VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_0);


 if (!VAR_7)
  goto out;

 FUNC_3(&VAR_7->write_queue);
 FUNC_3(&VAR_7->ack_queue);

 FUNC_1(&VAR_7->t1timer);
 FUNC_1(&VAR_7->t2timer);

 VAR_7->t1 = VAR_3;
 VAR_7->t2 = VAR_4;
 VAR_7->n2 = VAR_2;
 VAR_7->mode = VAR_1;
 VAR_7->window = VAR_5;
 VAR_7->state = VAR_6;
 FUNC_0(&VAR_7->refcnt, 1);
out:
 return VAR_7;
}
