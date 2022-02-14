
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr_layer {int dummy; } ;
struct idr {scalar_t__ id_free_cnt; } ;


 struct idr_layer* FUNC_0 (struct idr*) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct idr_layer*) ;

void FUNC_2(struct idr *VAR_1)
{
 while (VAR_1->id_free_cnt) {
  struct idr_layer *VAR_2 = FUNC_0(VAR_1);
  FUNC_1(VAR_0, VAR_2);
 }
}
