
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct regional {int dummy; } ;
struct TYPE_2__ {struct local_zone* key; } ;
struct local_zone {int type; size_t namelen; int namelabs; int parent; int lock; int data; int region; int * name; int dclass; TYPE_1__ node; } ;
typedef int rbnode_type ;
typedef enum localzone_type { ____Placeholder_localzone_type } localzone_type ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct local_zone*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int) ;

__attribute__((used)) static struct local_zone*
FUNC_6(uint8_t* VAR_1, size_t VAR_2, int VAR_3,
 enum localzone_type VAR_4, uint16_t VAR_5)
{
 struct local_zone* VAR_6 = (struct local_zone*)FUNC_0(1, sizeof(*VAR_6));
 if(!VAR_6) {
  return ((void*)0);
 }
 VAR_6->node.key = VAR_6;
 VAR_6->dclass = VAR_5;
 VAR_6->type = VAR_4;
 VAR_6->name = VAR_1;
 VAR_6->namelen = VAR_2;
 VAR_6->namelabs = VAR_3;
 FUNC_3(&VAR_6->lock);
 VAR_6->region = FUNC_5(sizeof(struct regional));
 if(!VAR_6->region) {
  FUNC_1(VAR_6);
  return ((void*)0);
 }
 FUNC_4(&VAR_6->data, &VAR_0);
 FUNC_2(&VAR_6->lock, &VAR_6->parent, sizeof(*VAR_6)-sizeof(rbnode_type));

 return VAR_6;
}
