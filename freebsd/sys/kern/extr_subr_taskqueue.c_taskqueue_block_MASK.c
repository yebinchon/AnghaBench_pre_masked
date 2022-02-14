
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct taskqueue {int tq_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct taskqueue*) ;
 int FUNC_1 (struct taskqueue*) ;

void
FUNC_2(struct taskqueue *VAR_1)
{

 FUNC_0(VAR_1);
 VAR_1->tq_flags |= VAR_0;
 FUNC_1(VAR_1);
}
