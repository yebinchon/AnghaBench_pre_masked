
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {struct auth_zone* key; } ;
struct auth_zone {size_t namelen; int data; int namelabs; int * name; TYPE_1__ node; } ;
struct auth_data {int dummy; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,struct auth_zone*) ;

__attribute__((used)) static struct auth_data*
FUNC_2(struct auth_zone* VAR_0, uint8_t* VAR_1, size_t VAR_2)
{
 struct auth_zone VAR_3;
 VAR_3.node.key = &VAR_3;
 VAR_3.name = VAR_1;
 VAR_3.namelen = VAR_2;
 VAR_3.namelabs = FUNC_0(VAR_1);
 return (struct auth_data*)FUNC_1(&VAR_0->data, &VAR_3);
}
