
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct iter_forwards {int dummy; } ;
struct TYPE_2__ {struct iter_forward_zone* key; } ;
struct iter_forward_zone {int namelabs; int namelen; int * name; int dclass; TYPE_1__ node; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct iter_forwards*,int ,int *,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_2(struct iter_forwards* VAR_0, uint16_t VAR_1, uint8_t* VAR_2)
{
 struct iter_forward_zone VAR_3;
 VAR_3.node.key = &VAR_3;
 VAR_3.dclass = VAR_1;
 VAR_3.name = VAR_2;
 VAR_3.namelabs = FUNC_0(VAR_3.name, &VAR_3.namelen);
 return FUNC_1(VAR_0, VAR_3.dclass, VAR_3.name,
  VAR_3.namelen, VAR_3.namelabs, ((void*)0));
}
