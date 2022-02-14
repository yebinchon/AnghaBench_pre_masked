
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef scalar_t__ time_t ;
struct sockaddr_storage {int dummy; } ;
struct lruhash_entry {int lock; scalar_t__ data; } ;
struct TYPE_3__ {int rto; } ;
struct infra_data {scalar_t__ probedelay; scalar_t__ timeout_A; scalar_t__ timeout_AAAA; scalar_t__ timeout_other; scalar_t__ ttl; scalar_t__ rec_lame; scalar_t__ isdnsseclame; scalar_t__ lame_other; scalar_t__ lame_type_A; TYPE_1__ rtt; } ;
struct infra_cache {int dummy; } ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct lruhash_entry* FUNC_0 (struct infra_cache*,struct sockaddr_storage*,int ,int *,size_t,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

int
FUNC_4(struct infra_cache* VAR_5,
        struct sockaddr_storage* VAR_6, socklen_t VAR_7,
        uint8_t* VAR_8, size_t VAR_9, uint16_t VAR_10,
 int* VAR_11, int* VAR_12, int* VAR_13, int* VAR_14, time_t VAR_15)
{
 struct infra_data* VAR_16;
 struct lruhash_entry* VAR_17 = FUNC_0(VAR_5, VAR_6, VAR_7,
  VAR_8, VAR_9, 0);
 if(!VAR_17)
  return 0;
 VAR_16 = (struct infra_data*)VAR_17->data;
 *VAR_14 = FUNC_3(&VAR_16->rtt);
 if(VAR_16->rtt.rto >= VAR_2 && VAR_15 < VAR_16->probedelay
  && FUNC_2(&VAR_16->rtt)*4 <= VAR_16->rtt.rto) {


  if(VAR_10 == VAR_0) {
   if(VAR_16->timeout_A >= VAR_3)
    *VAR_14 = VAR_4;
   else *VAR_14 = VAR_4-1000;
  } else if(VAR_10 == VAR_1) {
   if(VAR_16->timeout_AAAA >= VAR_3)
    *VAR_14 = VAR_4;
   else *VAR_14 = VAR_4-1000;
  } else {
   if(VAR_16->timeout_other >= VAR_3)
    *VAR_14 = VAR_4;
   else *VAR_14 = VAR_4-1000;
  }
 }
 if(VAR_15 > VAR_16->ttl) {




  if(VAR_16->rtt.rto >= VAR_4) {
   FUNC_1(&VAR_17->lock);
   *VAR_14 = VAR_4-1000;
   *VAR_11 = 0;
   *VAR_12 = 0;
   *VAR_13 = 0;
   return 1;
  }
  FUNC_1(&VAR_17->lock);
  return 0;
 }

 if(VAR_16->lame_type_A && VAR_10 == VAR_0) {
  FUNC_1(&VAR_17->lock);
  *VAR_11 = 1;
  *VAR_12 = 0;
  *VAR_13 = 0;
  return 1;
 } else if(VAR_16->lame_other && VAR_10 != VAR_0) {
  FUNC_1(&VAR_17->lock);
  *VAR_11 = 1;
  *VAR_12 = 0;
  *VAR_13 = 0;
  return 1;
 } else if(VAR_16->isdnsseclame) {
  FUNC_1(&VAR_17->lock);
  *VAR_11 = 0;
  *VAR_12 = 1;
  *VAR_13 = 0;
  return 1;
 } else if(VAR_16->rec_lame) {
  FUNC_1(&VAR_17->lock);
  *VAR_11 = 0;
  *VAR_12 = 0;
  *VAR_13 = 1;
  return 1;
 }

 FUNC_1(&VAR_17->lock);
 *VAR_11 = 0;
 *VAR_12 = 0;
 *VAR_13 = 0;
 return 1;
}
