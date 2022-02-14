
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr_layer {int layer; scalar_t__ count; scalar_t__ bitmap; struct idr_layer** ary; } ;
struct idr {int layers; struct idr_layer* top; int lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct idr*,struct idr_layer*) ;
 int FUNC_1 (int ,scalar_t__*) ;
 struct idr_layer* FUNC_2 (struct idr*) ;
 int FUNC_3 (struct idr_layer*,struct idr_layer*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct idr*,int*,struct idr_layer**) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct idr *VAR_4, int VAR_5,
         struct idr_layer **VAR_6)
{
 struct idr_layer *VAR_7, *VAR_8;
 int VAR_9, VAR_10, VAR_11;
 unsigned long VAR_12;

 VAR_11 = VAR_5;
build_up:
 VAR_7 = VAR_4->top;
 VAR_9 = VAR_4->layers;
 if (FUNC_7(!VAR_7)) {
  if (!(VAR_7 = FUNC_2(VAR_4)))
   return -1;
  VAR_7->layer = 0;
  VAR_9 = 1;
 }




 while ((VAR_9 < (VAR_3 - 1)) && (VAR_11 >= (1 << (VAR_9*VAR_0)))) {
  VAR_9++;
  if (!VAR_7->count) {




   VAR_7->layer++;
   continue;
  }
  if (!(VAR_8 = FUNC_2(VAR_4))) {




   FUNC_4(&VAR_4->lock, VAR_12);
   for (VAR_8 = VAR_7; VAR_7 && VAR_7 != VAR_4->top; VAR_8 = VAR_7) {
    VAR_7 = VAR_7->ary[0];
    VAR_8->ary[0] = ((void*)0);
    VAR_8->bitmap = VAR_8->count = 0;
    FUNC_0(VAR_4, VAR_8);
   }
   FUNC_5(&VAR_4->lock, VAR_12);
   return -1;
  }
  VAR_8->ary[0] = VAR_7;
  VAR_8->count = 1;
  VAR_8->layer = VAR_9-1;
  if (VAR_7->bitmap == VAR_1)
   FUNC_1(0, &VAR_8->bitmap);
  VAR_7 = VAR_8;
 }
 FUNC_3(VAR_4->top, VAR_7);
 VAR_4->layers = VAR_9;
 VAR_10 = FUNC_6(VAR_4, &VAR_11, VAR_6);
 if (VAR_10 == VAR_2)
  goto build_up;
 return(VAR_10);
}
