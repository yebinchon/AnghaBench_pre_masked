
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_map {int r_vaddr; int r_size; int r_bushandle; int r_bustag; } ;
struct resource {int dummy; } ;


 int FUNC_0 (struct resource*) ;
 int FUNC_1 (struct resource*) ;
 int FUNC_2 (struct resource*) ;
 int FUNC_3 (struct resource*) ;

void
FUNC_4(struct resource *VAR_0, struct resource_map *VAR_1)
{

 VAR_1->r_bustag = FUNC_1(VAR_0);
 VAR_1->r_bushandle = FUNC_0(VAR_0);
 VAR_1->r_size = FUNC_2(VAR_0);
 VAR_1->r_vaddr = FUNC_3(VAR_0);
}
