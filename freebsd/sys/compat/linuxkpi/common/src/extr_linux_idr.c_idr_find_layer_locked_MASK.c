
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr_layer {struct idr_layer** ary; } ;
struct idr {int layers; struct idr_layer* top; } ;


 int VAR_0 ;
 int FUNC_0 (struct idr*) ;
 size_t FUNC_1 (int,int) ;

__attribute__((used)) static inline struct idr_layer *
FUNC_2(struct idr *VAR_1, int VAR_2)
{
 struct idr_layer *VAR_3;
 int VAR_4;

 VAR_2 &= VAR_0;
 VAR_3 = VAR_1->top;
 VAR_4 = VAR_1->layers - 1;
 if (VAR_3 == ((void*)0) || VAR_2 > FUNC_0(VAR_1))
  return (((void*)0));
 while (VAR_4 && VAR_3) {
  VAR_3 = VAR_3->ary[FUNC_1(VAR_2, VAR_4)];
  VAR_4--;
 }
 return (VAR_3);
}
