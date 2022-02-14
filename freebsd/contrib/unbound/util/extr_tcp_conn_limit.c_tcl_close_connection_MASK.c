
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcl_addr {scalar_t__ count; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;

void
FUNC_3(struct tcl_addr* VAR_0)
{
 if(VAR_0) {
  FUNC_0(&VAR_0->lock);
  FUNC_2(VAR_0->count > 0);
  VAR_0->count--;
  FUNC_1(&VAR_0->lock);
 }
}
