
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct val_anchors {int dummy; } ;
struct trust_anchor {int lock; int autr; } ;


 struct trust_anchor* FUNC_0 (struct val_anchors*,int *,int ,size_t,int ) ;
 struct trust_anchor* FUNC_1 (struct val_anchors*,int *,size_t,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,size_t,size_t) ;

__attribute__((used)) static struct trust_anchor*
FUNC_7(struct val_anchors* VAR_0, uint8_t* VAR_1, size_t VAR_2,
 size_t VAR_3)
{
 struct trust_anchor* VAR_4;
 VAR_4 = FUNC_0(VAR_0, VAR_1, FUNC_2(VAR_1), VAR_3,
  FUNC_6(VAR_1, VAR_2, VAR_3));
 if(VAR_4) {
  if(!VAR_4->autr) {
   FUNC_5("anchor cannot be with and without autotrust");
   FUNC_4(&VAR_4->lock);
   return ((void*)0);
  }
  return VAR_4;
 }
 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_3, FUNC_6(VAR_1,
  VAR_2, VAR_3));
 if(!VAR_4)
  return ((void*)0);
 FUNC_3(&VAR_4->lock);
 return VAR_4;
}
