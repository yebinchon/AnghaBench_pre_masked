
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct val_anchors {int dummy; } ;
struct trust_anchor {int lock; TYPE_1__* autr; } ;
struct autr_ta {int dummy; } ;
struct TYPE_2__ {scalar_t__ file; } ;


 struct autr_ta* FUNC_0 (struct val_anchors*,char*,struct trust_anchor**,int *,size_t,int **,size_t*,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,struct autr_ta*) ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static struct trust_anchor*
FUNC_6(struct val_anchors* VAR_0, char* VAR_1, const char* VAR_2,
 uint8_t* VAR_3, size_t VAR_4, uint8_t** VAR_5, size_t* VAR_6,
 int* VAR_7)
{
 struct autr_ta* VAR_8 = ((void*)0);
 struct trust_anchor* VAR_9 = ((void*)0);

 VAR_8 = FUNC_0(VAR_0, VAR_1, &VAR_9, VAR_3, VAR_4,
  VAR_5, VAR_6, VAR_7);
 if(!VAR_8)
  return ((void*)0);
 FUNC_1(&VAR_9->lock);
 if(!FUNC_4(VAR_1, VAR_8)) {
  FUNC_2(&VAR_9->lock);
  return ((void*)0);
 }
 if(!VAR_9->autr->file) {
  VAR_9->autr->file = FUNC_5(VAR_2);
  if(!VAR_9->autr->file) {
   FUNC_2(&VAR_9->lock);
   FUNC_3("malloc failure");
   return ((void*)0);
  }
 }
 FUNC_2(&VAR_9->lock);
        return VAR_9;
}
