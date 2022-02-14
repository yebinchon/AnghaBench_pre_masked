
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr_layer {struct idr_layer** ary; } ;
struct idr {int id_free_cnt; struct idr_layer* id_free; } ;



__attribute__((used)) static void FUNC_0(struct idr *VAR_0, struct idr_layer *VAR_1)
{
 VAR_1->ary[0] = VAR_0->id_free;
 VAR_0->id_free = VAR_1;
 VAR_0->id_free_cnt++;
}
