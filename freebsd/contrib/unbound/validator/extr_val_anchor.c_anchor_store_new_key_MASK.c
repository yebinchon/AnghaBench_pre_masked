
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct val_anchors {int dummy; } ;
struct trust_anchor {int lock; struct ta_key* keylist; int numDNSKEY; int numDS; } ;
struct ta_key {struct ta_key* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct trust_anchor* FUNC_0 (struct val_anchors*,int *,int,size_t,int ) ;
 scalar_t__ FUNC_1 (struct trust_anchor*,int *,size_t,int ) ;
 struct trust_anchor* FUNC_2 (struct val_anchors*,int *,int,size_t,int ,int) ;
 struct ta_key* FUNC_3 (int *,size_t,int ) ;
 int FUNC_4 (int *,size_t*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static struct trust_anchor*
FUNC_8(struct val_anchors* VAR_2, uint8_t* VAR_3, uint16_t VAR_4,
 uint16_t VAR_5, uint8_t* VAR_6, size_t VAR_7)
{
 struct ta_key* VAR_8;
 struct trust_anchor* VAR_9;
 int VAR_10;
 size_t VAR_11;
 VAR_10 = FUNC_4(VAR_3, &VAR_11);
 if(VAR_4 != VAR_1 && VAR_4 != VAR_0) {
  FUNC_7("Bad type for trust anchor");
  return 0;
 }

 VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_10, VAR_11, VAR_5);
 if(!VAR_9) {
  VAR_9 = FUNC_2(VAR_2, VAR_3, VAR_10, VAR_11, VAR_5, 1);
  if(!VAR_9)
   return ((void*)0);
  FUNC_5(&VAR_9->lock);
 }
 if(!VAR_6) {
  FUNC_6(&VAR_9->lock);
  return VAR_9;
 }

 if(FUNC_1(VAR_9, VAR_6, VAR_7, VAR_4)) {
  FUNC_6(&VAR_9->lock);
  return VAR_9;
 }
 VAR_8 = FUNC_3(VAR_6, VAR_7, VAR_4);
 if(!VAR_8) {
  FUNC_6(&VAR_9->lock);
  return ((void*)0);
 }

 if(VAR_4 == VAR_1)
  VAR_9->numDS++;
 else VAR_9->numDNSKEY++;
 VAR_8->next = VAR_9->keylist;
 VAR_9->keylist = VAR_8;
 FUNC_6(&VAR_9->lock);
 return VAR_9;
}
