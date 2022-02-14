
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct val_anchors {int lock; int tree; } ;
struct TYPE_2__ {struct trust_anchor* key; } ;
struct trust_anchor {int namelen; int namelabs; int dclass; int * name; TYPE_1__ node; } ;


 int FUNC_0 (struct val_anchors*,int *,int ,int ,int ,int ) ;
 int FUNC_1 (struct val_anchors*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int ,struct trust_anchor*) ;

int
FUNC_7(struct val_anchors* VAR_0, uint16_t VAR_1, uint8_t* VAR_2)
{
 struct trust_anchor VAR_3;
 VAR_3.node.key = &VAR_3;
 VAR_3.name = VAR_2;
 VAR_3.namelabs = FUNC_2(VAR_2, &VAR_3.namelen);
 VAR_3.dclass = VAR_1;
 FUNC_3(&VAR_0->lock);
 if(FUNC_6(VAR_0->tree, &VAR_3)) {
  FUNC_4(&VAR_0->lock);

  return 1;
 }
 if(!FUNC_0(VAR_0, VAR_2, VAR_3.namelabs, VAR_3.namelen, VAR_1, 0)) {
  FUNC_5("out of memory");
  FUNC_4(&VAR_0->lock);
  return 0;
 }

 FUNC_1(VAR_0);
 FUNC_4(&VAR_0->lock);
 return 1;
}
