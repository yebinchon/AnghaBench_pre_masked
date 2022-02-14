
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr_layer {scalar_t__ bitmap; struct idr_layer** ary; } ;
struct idr {int layers; struct idr_layer* top; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (struct idr*,int) ;
 void* FUNC_2 (struct idr*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char*,struct idr*,...) ;

__attribute__((used)) static int
FUNC_6(struct idr *VAR_5, void *VAR_6, int *VAR_7)
{
 struct idr_layer *VAR_8[VAR_3];
 struct idr_layer *VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;

 FUNC_4(&VAR_5->lock, VAR_4);

 VAR_10 = -VAR_0;



 if (VAR_5->top == ((void*)0) || VAR_5->top->bitmap == 0) {
  if (VAR_5->layers == VAR_3 + 1) {
   VAR_10 = -VAR_1;
   goto out;
  }
  VAR_9 = FUNC_2(VAR_5);
  if (VAR_9 == ((void*)0))
   goto out;
  VAR_9->ary[0] = VAR_5->top;
  if (VAR_5->top)
   VAR_9->bitmap &= ~1;
  VAR_5->top = VAR_9;
  VAR_5->layers++;
 }
 VAR_9 = VAR_5->top;
 VAR_13 = 0;



 for (VAR_11 = VAR_5->layers - 1;; VAR_11--) {
  VAR_8[VAR_11] = VAR_9;
  VAR_12 = FUNC_0(VAR_9->bitmap);
  if (VAR_12 == 0)
   FUNC_5("idr_get_new: Invalid leaf state (%p, %p)\n",
       VAR_5, VAR_9);
  VAR_12--;
  VAR_13 |= VAR_12 << (VAR_11 * VAR_2);
  if (VAR_11 == 0)
   break;
  if (VAR_9->ary[VAR_12] == ((void*)0)) {
   VAR_9->ary[VAR_12] = FUNC_2(VAR_5);
   if (VAR_9->ary[VAR_12] == ((void*)0))
    goto out;
  }
  VAR_9 = VAR_9->ary[VAR_12];
 }



 VAR_9->bitmap &= ~(1 << VAR_12);
 VAR_9->ary[VAR_12] = VAR_6;
 *VAR_7 = VAR_13;



 while (VAR_9->bitmap == 0 && ++VAR_11 < VAR_5->layers) {
  VAR_9 = VAR_8[VAR_11];
  VAR_9->bitmap &= ~(1 << FUNC_3(VAR_13, VAR_11));
 }
 VAR_10 = 0;
out:






 return (VAR_10);
}
