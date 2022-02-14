
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr_layer {int count; int bitmap; struct idr_layer** ary; } ;
struct idr {int layers; scalar_t__ id_free_cnt; struct idr_layer* top; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct idr_layer*) ;
 struct idr_layer* FUNC_1 (struct idr*) ;
 int VAR_3 ;
 int FUNC_2 (int ,struct idr_layer*) ;
 int FUNC_3 (struct idr_layer*,struct idr_layer*) ;
 int FUNC_4 (struct idr*,int,int) ;

void FUNC_5(struct idr *VAR_4, int VAR_5)
{
 struct idr_layer *VAR_6;
 struct idr_layer *VAR_7;


 VAR_5 &= VAR_2;

 FUNC_4(VAR_4, (VAR_4->layers - 1) * VAR_0, VAR_5);
 if (VAR_4->top && VAR_4->top->count == 1 && (VAR_4->layers > 1) &&
     VAR_4->top->ary[0]) {






  VAR_7 = VAR_4->top;
  VAR_6 = VAR_4->top->ary[0];
  FUNC_3(VAR_4->top, VAR_6);
  --VAR_4->layers;
  VAR_7->bitmap = VAR_7->count = 0;
  FUNC_0(VAR_7);
 }
 while (VAR_4->id_free_cnt >= VAR_1) {
  VAR_6 = FUNC_1(VAR_4);





  FUNC_2(VAR_3, VAR_6);
 }
 return;
}
