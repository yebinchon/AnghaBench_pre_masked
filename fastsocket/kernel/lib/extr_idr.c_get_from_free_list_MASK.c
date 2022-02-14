
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr_layer {struct idr_layer** ary; } ;
struct idr {int lock; int id_free_cnt; struct idr_layer* id_free; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static struct idr_layer *FUNC_2(struct idr *VAR_0)
{
 struct idr_layer *VAR_1;
 unsigned long VAR_2;

 FUNC_0(&VAR_0->lock, VAR_2);
 if ((VAR_1 = VAR_0->id_free)) {
  VAR_0->id_free = VAR_1->ary[0];
  VAR_0->id_free_cnt--;
  VAR_1->ary[0] = ((void*)0);
 }
 FUNC_1(&VAR_0->lock, VAR_2);
 return(VAR_1);
}
