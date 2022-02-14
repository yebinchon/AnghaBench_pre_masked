
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct auth_zone {int data; } ;
struct TYPE_2__ {struct auth_data* key; } ;
struct auth_data {size_t namelen; struct auth_data* name; TYPE_1__ node; int namelabs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct auth_data*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 struct auth_data* FUNC_4 (int *,size_t) ;
 int FUNC_5 (struct auth_data*,int ,int) ;
 int FUNC_6 (int *,TYPE_1__*) ;

__attribute__((used)) static struct auth_data*
FUNC_7(struct auth_zone* VAR_0, uint8_t* VAR_1, size_t VAR_2)
{
 struct auth_data* VAR_3 = (struct auth_data*)FUNC_3(sizeof(*VAR_3));
 if(!VAR_3) return ((void*)0);
 FUNC_5(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->node.key = VAR_3;
 VAR_3->name = FUNC_4(VAR_1, VAR_2);
 if(!VAR_3->name) {
  FUNC_1(VAR_3);
  return ((void*)0);
 }
 VAR_3->namelen = VAR_2;
 VAR_3->namelabs = FUNC_0(VAR_1);
 if(!FUNC_6(&VAR_0->data, &VAR_3->node)) {
  FUNC_2("duplicate auth domain name");
  FUNC_1(VAR_3->name);
  FUNC_1(VAR_3);
  return ((void*)0);
 }
 return VAR_3;
}
