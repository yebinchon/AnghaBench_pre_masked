
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr_layer {struct idr_layer** ary; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct idr_layer*,int ) ;

__attribute__((used)) static void
FUNC_1(struct idr_layer *VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_2 == ((void*)0))
  return;
 if (VAR_3 == 0) {
  FUNC_0(VAR_2, VAR_1);
  return;
 }
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_2->ary[VAR_4])
   FUNC_1(VAR_2->ary[VAR_4], VAR_3 - 1);
}
