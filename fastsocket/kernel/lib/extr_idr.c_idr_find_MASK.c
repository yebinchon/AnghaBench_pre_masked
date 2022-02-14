
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr_layer {int layer; int * ary; } ;
struct idr {int top; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct idr_layer* FUNC_1 (int ) ;

void *FUNC_2(struct idr *VAR_3, int VAR_4)
{
 int VAR_5;
 struct idr_layer *VAR_6;

 VAR_6 = FUNC_1(VAR_3->top);
 if (!VAR_6)
  return ((void*)0);
 VAR_5 = (VAR_6->layer+1) * VAR_0;


 VAR_4 &= VAR_2;

 if (VAR_4 >= (1 << VAR_5))
  return ((void*)0);
 FUNC_0(VAR_5 == 0);

 while (VAR_5 > 0 && VAR_6) {
  VAR_5 -= VAR_0;
  FUNC_0(VAR_5 != VAR_6->layer*VAR_0);
  VAR_6 = FUNC_1(VAR_6->ary[(VAR_4 >> VAR_5) & VAR_1]);
 }
 return((void *)VAR_6);
}
