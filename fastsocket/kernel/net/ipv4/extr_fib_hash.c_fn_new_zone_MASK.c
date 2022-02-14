
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fn_zone {int fz_divisor; int fz_hashmask; int fz_order; struct fn_zone* fz_next; int fz_mask; int fz_hash; } ;
struct fn_hash {struct fn_zone** fn_zones; struct fn_zone* fn_zone_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct fn_zone*) ;
 struct fn_zone* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct fn_zone *
FUNC_6(struct fn_hash *VAR_3, int VAR_4)
{
 int VAR_5;
 struct fn_zone *VAR_6 = FUNC_3(sizeof(struct fn_zone), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 if (VAR_4) {
  VAR_6->fz_divisor = 16;
 } else {
  VAR_6->fz_divisor = 1;
 }
 VAR_6->fz_hashmask = (VAR_6->fz_divisor - 1);
 VAR_6->fz_hash = FUNC_0(VAR_6->fz_divisor);
 if (!VAR_6->fz_hash) {
  FUNC_2(VAR_6);
  return ((void*)0);
 }
 VAR_6->fz_order = VAR_4;
 VAR_6->fz_mask = FUNC_1(VAR_4);


 for (VAR_5=VAR_4+1; VAR_5<=32; VAR_5++)
  if (VAR_3->fn_zones[VAR_5])
   break;
 FUNC_4(&VAR_2);
 if (VAR_5>32) {

  VAR_6->fz_next = VAR_3->fn_zone_list;
  VAR_3->fn_zone_list = VAR_6;
 } else {
  VAR_6->fz_next = VAR_3->fn_zones[VAR_5]->fz_next;
  VAR_3->fn_zones[VAR_5]->fz_next = VAR_6;
 }
 VAR_3->fn_zones[VAR_4] = VAR_6;
 VAR_1++;
 FUNC_5(&VAR_2);
 return VAR_6;
}
