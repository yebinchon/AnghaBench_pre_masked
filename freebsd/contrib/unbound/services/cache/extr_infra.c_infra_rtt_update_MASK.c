
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int time_t ;
struct sockaddr_storage {int dummy; } ;
struct lruhash_entry {int lock; scalar_t__ data; int hash; } ;
struct TYPE_5__ {int rto; } ;
struct infra_data {scalar_t__ timeout_A; scalar_t__ timeout_AAAA; scalar_t__ timeout_other; TYPE_1__ rtt; scalar_t__ probedelay; int ttl; } ;
struct infra_cache {int hosts; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct infra_cache*,struct lruhash_entry*,int ) ;
 struct lruhash_entry* FUNC_1 (struct infra_cache*,struct sockaddr_storage*,int ,int *,size_t,int) ;
 int FUNC_2 (int *) ;
 struct lruhash_entry* FUNC_3 (struct infra_cache*,struct sockaddr_storage*,int ,int *,size_t,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (int ,int ,struct lruhash_entry*,scalar_t__,int *) ;

int
FUNC_9(struct infra_cache* VAR_4, struct sockaddr_storage* VAR_5,
 socklen_t VAR_6, uint8_t* VAR_7, size_t VAR_8, int VAR_9,
 int VAR_10, int VAR_11, time_t VAR_12)
{
 struct lruhash_entry* VAR_13 = FUNC_1(VAR_4, VAR_5, VAR_6,
  VAR_7, VAR_8, 1);
 struct infra_data* VAR_14;
 int VAR_15 = 0;
 int VAR_16 = 1;
 if(!VAR_13) {
  if(!(VAR_13 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_12)))
   return 0;
  VAR_15 = 1;
 } else if(((struct infra_data*)VAR_13->data)->ttl < VAR_12) {
  FUNC_0(VAR_4, VAR_13, VAR_12);
 }

 VAR_14 = (struct infra_data*)VAR_13->data;
 if(VAR_10 == -1) {
  FUNC_5(&VAR_14->rtt, VAR_11);
  if(VAR_9 == VAR_0) {
   if(VAR_14->timeout_A < VAR_2)
    VAR_14->timeout_A++;
  } else if(VAR_9 == VAR_1) {
   if(VAR_14->timeout_AAAA < VAR_2)
    VAR_14->timeout_AAAA++;
  } else {
   if(VAR_14->timeout_other < VAR_2)
    VAR_14->timeout_other++;
  }
 } else {



  if(FUNC_6(&VAR_14->rtt) >= VAR_3)
   FUNC_4(&VAR_14->rtt);
  FUNC_7(&VAR_14->rtt, VAR_10);
  VAR_14->probedelay = 0;
  if(VAR_9 == VAR_0)
   VAR_14->timeout_A = 0;
  else if(VAR_9 == VAR_1)
   VAR_14->timeout_AAAA = 0;
  else VAR_14->timeout_other = 0;
 }
 if(VAR_14->rtt.rto > 0)
  VAR_16 = VAR_14->rtt.rto;

 if(VAR_15)
  FUNC_8(VAR_4->hosts, VAR_13->hash, VAR_13, VAR_13->data, ((void*)0));
 else { FUNC_2(&VAR_13->lock); }
 return VAR_16;
}
