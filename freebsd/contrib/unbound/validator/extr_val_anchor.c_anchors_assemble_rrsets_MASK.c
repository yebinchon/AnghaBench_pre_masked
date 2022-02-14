
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct val_anchors {int lock; struct trust_anchor* dlv_anchor; int tree; } ;
struct trust_anchor {size_t numDS; size_t numDNSKEY; int lock; int node; int name; int dclass; scalar_t__ autr; } ;
typedef int rbnode_type ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (struct trust_anchor*) ;
 int FUNC_1 (int *,int *) ;
 size_t FUNC_2 (struct trust_anchor*) ;
 size_t FUNC_3 (struct trust_anchor*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,char*,int ,int ,int ) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(struct val_anchors* VAR_3)
{
 struct trust_anchor* VAR_4;
 struct trust_anchor* VAR_5;
 size_t VAR_6, VAR_7;
 FUNC_5(&VAR_3->lock);
 VAR_4=(struct trust_anchor*)FUNC_11(VAR_3->tree);
 while((rbnode_type*)VAR_4 != VAR_2) {
  VAR_5 = (struct trust_anchor*)FUNC_12(&VAR_4->node);
  FUNC_5(&VAR_4->lock);
  if(VAR_4->autr || (VAR_4->numDS == 0 && VAR_4->numDNSKEY == 0)) {
   FUNC_6(&VAR_4->lock);
   VAR_4 = VAR_5;
   continue;
  }
  if(!FUNC_0(VAR_4)) {
   FUNC_7("out of memory");
   FUNC_6(&VAR_4->lock);
   FUNC_6(&VAR_3->lock);
   return 0;
  }
  VAR_6 = FUNC_3(VAR_4);
  VAR_7 = FUNC_2(VAR_4);
  if(VAR_6) {
   FUNC_8(0, "warning: unsupported "
    "algorithm for trust anchor",
    VAR_4->name, VAR_1, VAR_4->dclass);
  }
  if(VAR_7) {
   FUNC_8(0, "warning: unsupported "
    "algorithm for trust anchor",
    VAR_4->name, VAR_0, VAR_4->dclass);
  }
  if(VAR_6 == VAR_4->numDS && VAR_7 == VAR_4->numDNSKEY) {
   char VAR_8[257];
   FUNC_4(VAR_4->name, VAR_8);
   FUNC_9("trust anchor %s has no supported algorithms,"
    " the anchor is ignored (check if you need to"
    " upgrade unbound and "



    "openssl"

    ")", VAR_8);
   (void)FUNC_10(VAR_3->tree, &VAR_4->node);
   FUNC_6(&VAR_4->lock);
   if(VAR_3->dlv_anchor == VAR_4)
    VAR_3->dlv_anchor = ((void*)0);
   FUNC_1(&VAR_4->node, ((void*)0));
   VAR_4 = VAR_5;
   continue;
  }
  FUNC_6(&VAR_4->lock);
  VAR_4 = VAR_5;
 }
 FUNC_6(&VAR_3->lock);
 return 1;
}
