
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct val_anchors {int dummy; } ;
struct trust_anchor {int lock; scalar_t__ numDNSKEY; scalar_t__ numDS; } ;


 struct trust_anchor* FUNC_0 (struct val_anchors*,int *,int,size_t,scalar_t__) ;
 size_t FUNC_1 (struct trust_anchor*,scalar_t__*,scalar_t__) ;
 scalar_t__* FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct val_anchors* VAR_0, uint8_t* VAR_1, int VAR_2,
 size_t VAR_3, uint16_t VAR_4, uint16_t VAR_5)
{
 uint16_t* VAR_6;
 uint16_t* VAR_7;
 size_t VAR_8, VAR_9;
 struct trust_anchor* VAR_10 = FUNC_0(VAR_0,
  VAR_1, VAR_2, VAR_3, VAR_4);
 if(!VAR_10)
  return 0;
 if(!VAR_10->numDS && !VAR_10->numDNSKEY) {
  FUNC_4(&VAR_10->lock);
  return 0;
 }

 VAR_6 = FUNC_2(VAR_10->numDS + VAR_10->numDNSKEY, sizeof(*VAR_6));
 if(!VAR_6) {
  FUNC_4(&VAR_10->lock);
  return 0;
 }

 VAR_8 = FUNC_1(VAR_10, VAR_6,
  VAR_10->numDS+VAR_10->numDNSKEY);
 FUNC_4(&VAR_10->lock);
 if(!VAR_8) {
  FUNC_3(VAR_6);
  return 0;
 }
 VAR_7 = VAR_6;
 for(VAR_9=0; VAR_9<VAR_8; VAR_9++) {
  if(*VAR_7 == VAR_5) {
   FUNC_3(VAR_6);
   return 1;
  }
  VAR_7++;
 }
 FUNC_3(VAR_6);
 return 0;
}
