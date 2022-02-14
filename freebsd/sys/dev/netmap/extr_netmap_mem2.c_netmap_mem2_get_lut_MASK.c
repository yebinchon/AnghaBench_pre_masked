
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netmap_mem_d {TYPE_1__* pools; } ;
struct netmap_lut {int objsize; int objtotal; int lut; int plut; } ;
struct TYPE_2__ {int _objsize; int objtotal; int lut; } ;


 size_t VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct netmap_mem_d *VAR_1, struct netmap_lut *VAR_2)
{
 VAR_2->lut = VAR_1->pools[VAR_0].lut;



 VAR_2->objtotal = VAR_1->pools[VAR_0].objtotal;
 VAR_2->objsize = VAR_1->pools[VAR_0]._objsize;

 return 0;
}
