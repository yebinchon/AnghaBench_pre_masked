
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr_layer {struct idr_layer** ary; } ;
struct idr {int lock; struct idr_layer* free; } ;


 int VAR_0 ;
 int FUNC_0 (struct idr_layer*,int ) ;
 int FUNC_1 (struct idr*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct idr *VAR_1)
{
 struct idr_layer *VAR_2, *VAR_3;

 FUNC_1(VAR_1);
 FUNC_3(&VAR_1->lock);
 for (VAR_2 = VAR_1->free; VAR_2 != ((void*)0); VAR_2 = VAR_3) {
  VAR_3 = VAR_2->ary[0];
  FUNC_0(VAR_2, VAR_0);
 }
 FUNC_4(&VAR_1->lock);
 FUNC_2(&VAR_1->lock);
}
