
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct val_anchors {int dummy; } ;
struct trust_anchor {int lock; } ;


 struct trust_anchor* FUNC_0 (struct val_anchors*,int *,size_t,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct val_anchors* VAR_0, uint8_t* VAR_1, size_t VAR_2, uint16_t VAR_3)
{
 struct trust_anchor* VAR_4;
 if((VAR_4=FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3))) {
  FUNC_1(&VAR_4->lock);
 }
 return !VAR_4;
}
