
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr_layer {unsigned long bitmap; int layer; struct idr_layer** ary; int count; } ;
struct idr {int layers; struct idr_layer* top; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (unsigned long*,int,int) ;
 struct idr_layer* FUNC_2 (struct idr*) ;
 int FUNC_3 (struct idr_layer*,struct idr_layer*) ;

__attribute__((used)) static int FUNC_4(struct idr *VAR_6, int *VAR_7, struct idr_layer **VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 struct idr_layer *VAR_12, *VAR_13;
 int VAR_14, VAR_15, VAR_16;
 unsigned long VAR_17;

 VAR_15 = *VAR_7;
 restart:
 VAR_12 = VAR_6->top;
 VAR_14 = VAR_6->layers;
 VAR_8[VAR_14--] = ((void*)0);
 while (1) {



  VAR_9 = (VAR_15 >> (VAR_0*VAR_14)) & VAR_1;
  VAR_17 = ~VAR_12->bitmap;
  VAR_10 = FUNC_1(&VAR_17, VAR_4, VAR_9);
  if (VAR_10 == VAR_4) {

   VAR_14++;
   VAR_16 = VAR_15;
   VAR_15 = (VAR_15 | ((1 << (VAR_0 * VAR_14)) - 1)) + 1;


   if (VAR_15 >= 1 << (VAR_6->layers * VAR_0)) {
    *VAR_7 = VAR_15;
    return VAR_2;
   }
   VAR_12 = VAR_8[VAR_14];
   FUNC_0(!VAR_12);




   VAR_11 = VAR_0 * (VAR_14 + 1);
   if (VAR_16 >> VAR_11 == VAR_15 >> VAR_11)
    continue;
   else
    goto restart;
  }
  if (VAR_10 != VAR_9) {
   VAR_11 = VAR_0*VAR_14;
   VAR_15 = ((VAR_15 >> VAR_11) ^ VAR_9 ^ VAR_10) << VAR_11;
  }
  if ((VAR_15 >= VAR_5) || (VAR_15 < 0))
   return VAR_3;
  if (VAR_14 == 0)
   break;



  if (!VAR_12->ary[VAR_10]) {
   VAR_13 = FUNC_2(VAR_6);
   if (!VAR_13)
    return -1;
   VAR_13->layer = VAR_14-1;
   FUNC_3(VAR_12->ary[VAR_10], VAR_13);
   VAR_12->count++;
  }
  VAR_8[VAR_14--] = VAR_12;
  VAR_12 = VAR_12->ary[VAR_10];
 }

 VAR_8[VAR_14] = VAR_12;
 return VAR_15;
}
