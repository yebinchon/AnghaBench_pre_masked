
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct netmap_obj_pool {int objtotal; int* bitmap; int objfree; } ;


 int FUNC_0 (char*,int,...) ;

__attribute__((used)) static int
FUNC_1(struct netmap_obj_pool *VAR_0, uint32_t VAR_1)
{
 uint32_t *VAR_2, VAR_3;

 if (VAR_1 >= VAR_0->objtotal) {
  FUNC_0("invalid index %u, max %u", VAR_1, VAR_0->objtotal);
  return 1;
 }
 VAR_2 = &VAR_0->bitmap[VAR_1 / 32];
 VAR_3 = (1 << (VAR_1 % 32));
 if (*VAR_2 & VAR_3) {
  FUNC_0("ouch, double free on buffer %d", VAR_1);
  return 1;
 } else {
  *VAR_2 |= VAR_3;
  VAR_0->objfree++;
  return 0;
 }
}
