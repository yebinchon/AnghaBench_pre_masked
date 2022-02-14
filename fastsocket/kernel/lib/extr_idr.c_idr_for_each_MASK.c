
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr_layer {int * ary; } ;
struct idr {int layers; int top; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct idr_layer* FUNC_1 (int ) ;

int FUNC_2(struct idr *VAR_3,
   int (*VAR_4)(int VAR_5, void *VAR_6, void *VAR_7), void *VAR_8)
{
 int VAR_9, VAR_10, VAR_11, VAR_12 = 0;
 struct idr_layer *VAR_13;
 struct idr_layer *VAR_14[VAR_2];
 struct idr_layer **VAR_15 = &VAR_14[0];

 VAR_9 = VAR_3->layers * VAR_0;
 VAR_13 = FUNC_1(VAR_3->top);
 VAR_11 = 1 << VAR_9;

 VAR_10 = 0;
 while (VAR_10 < VAR_11) {
  while (VAR_9 > 0 && VAR_13) {
   VAR_9 -= VAR_0;
   *VAR_15++ = VAR_13;
   VAR_13 = FUNC_1(VAR_13->ary[(VAR_10 >> VAR_9) & VAR_1]);
  }

  if (VAR_13) {
   VAR_12 = VAR_4(VAR_10, (void *)VAR_13, VAR_8);
   if (VAR_12)
    break;
  }

  VAR_10 += 1 << VAR_9;
  while (VAR_9 < FUNC_0(VAR_10)) {
   VAR_9 += VAR_0;
   VAR_13 = *--VAR_15;
  }
 }

 return VAR_12;
}
