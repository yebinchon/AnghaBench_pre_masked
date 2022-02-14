
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr_layer {int bitmap; struct idr_layer** ary; } ;
struct idr {int layers; struct idr_layer* top; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int*,int,int) ;
 void* FUNC_1 (struct idr*,int) ;
 void* FUNC_2 (struct idr*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char*,struct idr*,...) ;

__attribute__((used)) static int
FUNC_6(struct idr *VAR_7, void *VAR_8, int VAR_9, int *VAR_10)
{
 struct idr_layer *VAR_11[VAR_5];
 struct idr_layer *VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15, VAR_16;
 int VAR_17;

 FUNC_4(&VAR_7->lock, VAR_6);

 VAR_13 = -VAR_0;




restart:
 VAR_15 = VAR_9;
 VAR_14 = 0;
 while (VAR_15 & ~VAR_3) {
  VAR_14++;
  VAR_15 >>= VAR_2;
 }
 if (VAR_14 == VAR_5 + 1) {
  VAR_13 = -VAR_1;
  goto out;
 }



 while (VAR_7->layers <= VAR_14 ||
     VAR_7->top->bitmap < (1 << FUNC_3(VAR_9, VAR_7->layers - 1))) {
  if (VAR_7->layers == VAR_5 + 1) {
   VAR_13 = -VAR_1;
   goto out;
  }
  VAR_12 = FUNC_2(VAR_7);
  if (VAR_12 == ((void*)0))
   goto out;
  VAR_12->ary[0] = VAR_7->top;
  if (VAR_7->top && VAR_7->top->bitmap == 0)
   VAR_12->bitmap &= ~1;
  VAR_7->top = VAR_12;
  VAR_7->layers++;
 }
 VAR_12 = VAR_7->top;
 VAR_17 = 0;



 for (VAR_14 = VAR_7->layers - 1;; VAR_14--) {
  VAR_11[VAR_14] = VAR_12;
  VAR_16 = FUNC_3(VAR_9, VAR_14);

  VAR_15 = FUNC_0(&VAR_12->bitmap, VAR_4, VAR_16);
  if (VAR_15 == VAR_4 && VAR_16 == 0)
   FUNC_5("idr_get_new: Invalid leaf state (%p, %p)\n",
       VAR_7, VAR_12);
  if (VAR_15 == VAR_4) {
   VAR_9 = VAR_17 + (1 << ((VAR_14 + 1) * VAR_2));
   goto restart;
  }
  if (VAR_15 > VAR_16)
   VAR_9 = 0;
  VAR_17 |= VAR_15 << (VAR_14 * VAR_2);
  if (VAR_14 == 0)
   break;
  if (VAR_12->ary[VAR_15] == ((void*)0)) {
   VAR_12->ary[VAR_15] = FUNC_2(VAR_7);
   if (VAR_12->ary[VAR_15] == ((void*)0))
    goto out;
  }
  VAR_12 = VAR_12->ary[VAR_15];
 }



 VAR_12->bitmap &= ~(1 << VAR_15);
 VAR_12->ary[VAR_15] = VAR_8;
 *VAR_10 = VAR_17;



 while (VAR_12->bitmap == 0 && ++VAR_14 < VAR_7->layers) {
  VAR_12 = VAR_11[VAR_14];
  VAR_12->bitmap &= ~(1 << FUNC_3(VAR_17, VAR_14));
 }
 VAR_13 = 0;
out:






 return (VAR_13);
}
