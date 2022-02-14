
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_map {scalar_t__ r_size; int r_vaddr; int r_bushandle; int r_bustag; } ;
struct resource {int dummy; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (struct resource*) ;
 int FUNC_2 (struct resource*,int ) ;
 int FUNC_3 (struct resource*,int ) ;
 int FUNC_4 (struct resource*,int ) ;

void
FUNC_5(struct resource *VAR_0, struct resource_map *VAR_1)
{

 FUNC_0(FUNC_1(VAR_0) == VAR_1->r_size,
     ("rman_set_mapping: size mismatch"));
 FUNC_3(VAR_0, VAR_1->r_bustag);
 FUNC_2(VAR_0, VAR_1->r_bushandle);
 FUNC_4(VAR_0, VAR_1->r_vaddr);
}
