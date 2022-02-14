
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct csrreg {scalar_t__ key; } ;
struct crom_context {scalar_t__ depth; } ;


 struct csrreg* FUNC_0 (struct crom_context*) ;
 int FUNC_1 (struct crom_context*) ;

struct csrreg *
FUNC_2(struct crom_context *VAR_0, uint8_t VAR_1)
{
 struct csrreg *VAR_2;

 while (VAR_0->depth >= 0) {
  VAR_2 = FUNC_0(VAR_0);
  if (VAR_2->key == VAR_1)
   return VAR_2;
  FUNC_1(VAR_0);
 }
 return ((void*)0);
}
