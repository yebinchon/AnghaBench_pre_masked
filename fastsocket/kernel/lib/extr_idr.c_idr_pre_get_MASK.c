
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr_layer {int dummy; } ;
struct idr {scalar_t__ id_free_cnt; } ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct idr_layer* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct idr*,struct idr_layer*) ;

int FUNC_2(struct idr *VAR_2, gfp_t VAR_3)
{
 while (VAR_2->id_free_cnt < VAR_0) {
  struct idr_layer *VAR_4;
  VAR_4 = FUNC_0(VAR_1, VAR_3);
  if (VAR_4 == ((void*)0))
   return (0);
  FUNC_1(VAR_2, VAR_4);
 }
 return 1;
}
