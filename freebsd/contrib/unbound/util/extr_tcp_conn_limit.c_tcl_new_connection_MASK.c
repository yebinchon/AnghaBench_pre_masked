
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcl_addr {scalar_t__ count; scalar_t__ limit; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int
FUNC_2(struct tcl_addr* VAR_0)
{
 if(VAR_0) {
  int VAR_1 = 1;
  FUNC_0(&VAR_0->lock);
  if(VAR_0->count >= VAR_0->limit)
   VAR_1 = 0;
  else
   VAR_0->count++;
  FUNC_1(&VAR_0->lock);
  return VAR_1;
 }
 return 1;
}
