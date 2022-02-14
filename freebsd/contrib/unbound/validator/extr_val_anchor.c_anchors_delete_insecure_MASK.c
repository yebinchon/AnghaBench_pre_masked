
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct val_anchors {int lock; int tree; } ;
struct TYPE_3__ {struct trust_anchor* key; } ;
struct trust_anchor {TYPE_1__ node; int lock; scalar_t__ numDNSKEY; scalar_t__ numDS; scalar_t__ autr; scalar_t__ keylist; int dclass; int namelen; int namelabs; int * name; } ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (struct val_anchors*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_6 (int ,struct trust_anchor*) ;

void
FUNC_7(struct val_anchors* VAR_0, uint16_t VAR_1,
        uint8_t* VAR_2)
{
 struct trust_anchor VAR_3;
 struct trust_anchor* VAR_4;
 VAR_3.node.key = &VAR_3;
 VAR_3.name = VAR_2;
 VAR_3.namelabs = FUNC_2(VAR_2, &VAR_3.namelen);
 VAR_3.dclass = VAR_1;
 FUNC_3(&VAR_0->lock);
 if(!(VAR_4=(struct trust_anchor*)FUNC_6(VAR_0->tree, &VAR_3))) {
  FUNC_4(&VAR_0->lock);

  return;
 }

 FUNC_3(&VAR_4->lock);

 if(VAR_4->keylist || VAR_4->autr || VAR_4->numDS || VAR_4->numDNSKEY) {
  FUNC_4(&VAR_0->lock);
  FUNC_4(&VAR_4->lock);

  return;
 }


 (void)FUNC_5(VAR_0->tree, &VAR_4->node);
 FUNC_1(VAR_0);
 FUNC_4(&VAR_0->lock);


 FUNC_4(&VAR_4->lock);
 FUNC_0(&VAR_4->node, ((void*)0));
}
