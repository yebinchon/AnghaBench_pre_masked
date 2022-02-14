
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_req {int buf; int timer; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct link_req*) ;

void FUNC_4(struct link_req *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_1(&VAR_0->timer);
 FUNC_2(&VAR_0->timer);
 FUNC_0(VAR_0->buf);
 FUNC_3(VAR_0);
}
