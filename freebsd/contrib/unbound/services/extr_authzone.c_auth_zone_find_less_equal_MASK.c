
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct auth_zones {int ztree; } ;
struct TYPE_2__ {struct auth_zone* key; } ;
struct auth_zone {size_t namelen; int namelabs; int * name; int dclass; TYPE_1__ node; } ;
typedef int rbnode_type ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct auth_zone*,int **) ;

__attribute__((used)) static int
FUNC_2(struct auth_zones* VAR_0, uint8_t* VAR_1, size_t VAR_2,
 uint16_t VAR_3, struct auth_zone** VAR_4)
{
 struct auth_zone VAR_5;
 VAR_5.node.key = &VAR_5;
 VAR_5.dclass = VAR_3;
 VAR_5.name = VAR_1;
 VAR_5.namelen = VAR_2;
 VAR_5.namelabs = FUNC_0(VAR_1);
 return FUNC_1(&VAR_0->ztree, &VAR_5, (rbnode_type**)VAR_4);
}
