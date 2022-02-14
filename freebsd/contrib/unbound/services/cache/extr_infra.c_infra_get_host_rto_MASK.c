
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ time_t ;
struct sockaddr_storage {int dummy; } ;
struct rtt_info {int dummy; } ;
struct lruhash_entry {int lock; scalar_t__ data; } ;
struct infra_data {scalar_t__ ttl; scalar_t__ probedelay; scalar_t__ timeout_other; scalar_t__ timeout_AAAA; scalar_t__ timeout_A; int rtt; } ;
struct infra_cache {int dummy; } ;
typedef int socklen_t ;


 struct lruhash_entry* FUNC_0 (struct infra_cache*,struct sockaddr_storage*,int ,int *,size_t,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rtt_info*,int *,int) ;

long long FUNC_3(struct infra_cache* VAR_0,
        struct sockaddr_storage* VAR_1, socklen_t VAR_2, uint8_t* VAR_3,
 size_t VAR_4, struct rtt_info* VAR_5, int* VAR_6, time_t VAR_7,
 int* VAR_8, int* VAR_9, int* VAR_10)
{
 struct lruhash_entry* VAR_11 = FUNC_0(VAR_0, VAR_1, VAR_2,
  VAR_3, VAR_4, 0);
 struct infra_data* VAR_12;
 long long VAR_13 = -2;
 if(!VAR_11) return -1;
 VAR_12 = (struct infra_data*)VAR_11->data;
 if(VAR_12->ttl >= VAR_7) {
  VAR_13 = (long long)(VAR_12->ttl - VAR_7);
  FUNC_2(VAR_5, &VAR_12->rtt, sizeof(*VAR_5));
  if(VAR_7 < VAR_12->probedelay)
   *VAR_6 = (int)(VAR_12->probedelay - VAR_7);
  else *VAR_6 = 0;
 }
 *VAR_8 = (int)VAR_12->timeout_A;
 *VAR_9 = (int)VAR_12->timeout_AAAA;
 *VAR_10 = (int)VAR_12->timeout_other;
 FUNC_1(&VAR_11->lock);
 return VAR_13;
}
