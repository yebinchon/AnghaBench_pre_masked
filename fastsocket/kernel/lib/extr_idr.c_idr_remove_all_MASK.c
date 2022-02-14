
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr_layer {struct idr_layer** ary; } ;
struct idr {int layers; struct idr_layer* top; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct idr_layer*) ;
 int FUNC_2 (struct idr_layer*,int *) ;

void FUNC_3(struct idr *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 struct idr_layer *VAR_7;
 struct idr_layer *VAR_8[VAR_2];
 struct idr_layer **VAR_9 = &VAR_8[0];

 VAR_4 = VAR_3->layers * VAR_0;
 VAR_7 = VAR_3->top;
 FUNC_2(VAR_3->top, ((void*)0));
 VAR_6 = 1 << VAR_4;

 VAR_5 = 0;
 while (VAR_5 < VAR_6) {
  while (VAR_4 > VAR_0 && VAR_7) {
   VAR_4 -= VAR_0;
   *VAR_9++ = VAR_7;
   VAR_7 = VAR_7->ary[(VAR_5 >> VAR_4) & VAR_1];
  }

  VAR_5 += 1 << VAR_4;
  while (VAR_4 < FUNC_0(VAR_5)) {
   if (VAR_7)
    FUNC_1(VAR_7);
   VAR_4 += VAR_0;
   VAR_7 = *--VAR_9;
  }
 }
 VAR_3->layers = 0;
}
