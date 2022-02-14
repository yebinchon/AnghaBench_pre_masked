
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr_layer {struct idr_layer** ary; } ;
struct idr {struct idr_layer* free; } ;



__attribute__((used)) static struct idr_layer *
FUNC_0(struct idr *VAR_0)
{
 struct idr_layer *VAR_1;

 if ((VAR_1 = VAR_0->free) != ((void*)0)) {
  VAR_0->free = VAR_1->ary[0];
  VAR_1->ary[0] = ((void*)0);
 }
 return (VAR_1);
}
