
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr_layer {int bitmap; void** ary; } ;
struct idr {int lock; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int VAR_1 ;
 struct idr_layer* FUNC_1 (struct idr*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void *
FUNC_4(struct idr *VAR_2, void *VAR_3, int VAR_4)
{
 struct idr_layer *VAR_5;
 void *VAR_6;
 int VAR_7;

 FUNC_2(&VAR_2->lock);
 VAR_5 = FUNC_1(VAR_2, VAR_4);
 VAR_7 = VAR_4 & VAR_1;


 if (VAR_5 == ((void*)0) || (VAR_5->bitmap & (1 << VAR_7))) {
  VAR_6 = FUNC_0(-VAR_0);
 } else {
  VAR_6 = VAR_5->ary[VAR_7];
  VAR_5->ary[VAR_7] = VAR_3;
 }
 FUNC_3(&VAR_2->lock);
 return (VAR_6);
}
