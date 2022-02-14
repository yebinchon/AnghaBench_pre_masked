
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct auth_zones {int xtree; } ;
struct TYPE_2__ {struct auth_xfer* key; } ;
struct auth_xfer {size_t namelen; int namelabs; int * name; int dclass; TYPE_1__ node; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,struct auth_xfer*) ;

struct auth_xfer*
FUNC_2(struct auth_zones* VAR_0, uint8_t* VAR_1, size_t VAR_2,
 uint16_t VAR_3)
{
 struct auth_xfer VAR_4;
 VAR_4.node.key = &VAR_4;
 VAR_4.dclass = VAR_3;
 VAR_4.name = VAR_1;
 VAR_4.namelen = VAR_2;
 VAR_4.namelabs = FUNC_0(VAR_1);
 return (struct auth_xfer*)FUNC_1(&VAR_0->xtree, &VAR_4);
}
