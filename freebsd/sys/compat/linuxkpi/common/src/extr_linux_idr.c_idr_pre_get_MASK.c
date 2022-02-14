
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr_layer {struct idr_layer** ary; int bitmap; } ;
struct idr {int layers; struct idr_layer* free; int lock; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 struct idr_layer* FUNC_1 (int,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4(struct idr *VAR_3, gfp_t VAR_4)
{
 struct idr_layer *VAR_5, *VAR_6;
 struct idr_layer *VAR_7;
 int VAR_8;

 FUNC_2(&VAR_3->lock);
 for (;;) {
  VAR_8 = VAR_3->layers + 1;
  for (VAR_5 = VAR_3->free; VAR_5 != ((void*)0); VAR_5 = VAR_5->ary[0])
   VAR_8--;
  FUNC_3(&VAR_3->lock);
  if (VAR_8 <= 0)
   break;
  for (VAR_7 = ((void*)0); VAR_8; VAR_8--) {
   VAR_6 = FUNC_1(sizeof(*VAR_5), VAR_1, VAR_2 | VAR_4);
   if (VAR_6 == ((void*)0))
    break;
   FUNC_0(&VAR_6->bitmap, VAR_0);
   if (VAR_7 != ((void*)0)) {
    VAR_5->ary[0] = VAR_6;
    VAR_5 = VAR_6;
   } else
    VAR_7 = VAR_5 = VAR_6;
  }
  if (VAR_7 == ((void*)0))
   return (0);
  FUNC_2(&VAR_3->lock);
  VAR_5->ary[0] = VAR_3->free;
  VAR_3->free = VAR_7;
 }
 return (1);
}
