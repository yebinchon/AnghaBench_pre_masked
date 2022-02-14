
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr_layer {int count; struct idr_layer** ary; int bitmap; } ;
struct idr {scalar_t__ layers; struct idr_layer* top; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (struct idr_layer*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct idr_layer*,int *) ;
 scalar_t__ FUNC_5 (int,int *) ;

__attribute__((used)) static void FUNC_6(struct idr *VAR_3, int VAR_4, int VAR_5)
{
 struct idr_layer *VAR_6 = VAR_3->top;
 struct idr_layer **VAR_7[VAR_2];
 struct idr_layer ***VAR_8 = &VAR_7[0];
 struct idr_layer *VAR_9;
 int VAR_10;

 *VAR_8 = ((void*)0);
 *++VAR_8 = &VAR_3->top;

 while ((VAR_4 > 0) && VAR_6) {
  VAR_10 = (VAR_5 >> VAR_4) & VAR_1;
  FUNC_0(VAR_10, &VAR_6->bitmap);
  *++VAR_8 = &VAR_6->ary[VAR_10];
  VAR_6 = VAR_6->ary[VAR_10];
  VAR_4 -= VAR_0;
 }
 VAR_10 = VAR_5 & VAR_1;
 if (FUNC_3(VAR_6 != ((void*)0) && FUNC_5(VAR_10, &VAR_6->bitmap))){
  FUNC_0(VAR_10, &VAR_6->bitmap);
  FUNC_4(VAR_6->ary[VAR_10], ((void*)0));
  VAR_9 = ((void*)0);
  while(*VAR_8 && ! --((**VAR_8)->count)){
   if (VAR_9)
    FUNC_1(VAR_9);
   VAR_9 = **VAR_8;
   **VAR_8-- = ((void*)0);
  }
  if (!*VAR_8)
   VAR_3->layers = 0;
  if (VAR_9)
   FUNC_1(VAR_9);
 } else
  FUNC_2(VAR_5);
}
