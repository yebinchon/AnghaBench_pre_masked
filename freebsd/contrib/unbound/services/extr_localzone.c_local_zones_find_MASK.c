
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct local_zones {int ztree; } ;
struct TYPE_2__ {struct local_zone* key; } ;
struct local_zone {size_t namelen; int namelabs; int * name; int dclass; TYPE_1__ node; } ;


 scalar_t__ FUNC_0 (int *,struct local_zone*) ;

struct local_zone*
FUNC_1(struct local_zones* VAR_0,
        uint8_t* VAR_1, size_t VAR_2, int VAR_3, uint16_t VAR_4)
{
 struct local_zone VAR_5;
 VAR_5.node.key = &VAR_5;
 VAR_5.dclass = VAR_4;
 VAR_5.name = VAR_1;
 VAR_5.namelen = VAR_2;
 VAR_5.namelabs = VAR_3;

 return (struct local_zone*)FUNC_0(&VAR_0->ztree, &VAR_5);
}
