
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr_layer {int bitmap; struct idr_layer** ary; } ;
struct idr {int layers; struct idr_layer* top; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct idr*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int,struct idr*,struct idr_layer*) ;

__attribute__((used)) static void *
FUNC_3(struct idr *VAR_2, int VAR_3)
{
 struct idr_layer *VAR_4;
 void *VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_3 &= VAR_1;
 VAR_4 = VAR_2->top;
 VAR_6 = VAR_2->layers - 1;
 if (VAR_4 == ((void*)0) || VAR_3 > FUNC_0(VAR_2))
  return (((void*)0));




 while (VAR_6 && VAR_4) {
  VAR_7 = FUNC_1(VAR_3, VAR_6);
  VAR_4->bitmap |= 1 << VAR_7;
  VAR_4 = VAR_4->ary[VAR_7];
  VAR_6--;
 }
 VAR_7 = VAR_3 & VAR_0;





 if (VAR_4 == ((void*)0) || (VAR_4->bitmap & (1 << VAR_7)) != 0)
  FUNC_2("idr_remove: Item %d not allocated (%p, %p)\n",
      VAR_3, VAR_2, VAR_4);
 VAR_5 = VAR_4->ary[VAR_7];
 VAR_4->ary[VAR_7] = ((void*)0);
 VAR_4->bitmap |= 1 << VAR_7;

 return (VAR_5);
}
