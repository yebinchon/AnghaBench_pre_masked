
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct auth_zones {int ztree; } ;
struct TYPE_2__ {struct auth_zone* key; } ;
struct auth_zone {size_t namelen; int lock; TYPE_1__ node; int name; int data; int namelabs; int dclass; } ;
typedef int rbnode_type ;


 int VAR_0 ;
 int FUNC_0 (struct auth_zone*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct auth_zone*) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *,size_t) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,TYPE_1__*) ;

struct auth_zone*
FUNC_12(struct auth_zones* VAR_1, uint8_t* VAR_2, size_t VAR_3,
 uint16_t VAR_4)
{
 struct auth_zone* VAR_5 = (struct auth_zone*)FUNC_1(1, sizeof(*VAR_5));
 if(!VAR_5) {
  return ((void*)0);
 }
 VAR_5->node.key = VAR_5;
 VAR_5->dclass = VAR_4;
 VAR_5->namelen = VAR_3;
 VAR_5->namelabs = FUNC_2(VAR_2);
 VAR_5->name = FUNC_9(VAR_2, VAR_3);
 if(!VAR_5->name) {
  FUNC_3(VAR_5);
  return ((void*)0);
 }
 FUNC_10(&VAR_5->data, &VAR_0);
 FUNC_5(&VAR_5->lock);
 FUNC_4(&VAR_5->lock, &VAR_5->name, sizeof(*VAR_5)-sizeof(rbnode_type));
 FUNC_7(&VAR_5->lock);

 if(!FUNC_11(&VAR_1->ztree, &VAR_5->node)) {
  FUNC_6(&VAR_5->lock);
  FUNC_0(VAR_5);
  FUNC_8("duplicate auth zone");
  return ((void*)0);
 }
 return VAR_5;
}
