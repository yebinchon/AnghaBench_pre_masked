
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint8_t ;
typedef scalar_t__ time_t ;
struct sockaddr_storage {int dummy; } ;
struct lruhash_entry {int lock; scalar_t__ data; int hash; } ;
struct TYPE_3__ {int rto; } ;
struct infra_data {scalar_t__ ttl; int edns_version; scalar_t__ probedelay; TYPE_1__ rtt; void* edns_lame_known; void* timeout_other; void* timeout_AAAA; void* timeout_A; } ;
struct infra_cache {int hosts; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct infra_cache*,struct lruhash_entry*,scalar_t__) ;
 struct lruhash_entry* FUNC_1 (struct infra_cache*,struct sockaddr_storage*,int ,void**,size_t,int) ;
 int FUNC_2 (int *) ;
 struct lruhash_entry* FUNC_3 (struct infra_cache*,struct sockaddr_storage*,int ,void**,size_t,scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int ,struct lruhash_entry*,struct infra_data*,int *) ;

int
FUNC_7(struct infra_cache* VAR_2, struct sockaddr_storage* VAR_3,
        socklen_t VAR_4, uint8_t* VAR_5, size_t VAR_6, time_t VAR_7,
 int* VAR_8, uint8_t* VAR_9, int* VAR_10)
{
 struct lruhash_entry* VAR_11 = FUNC_1(VAR_2, VAR_3, VAR_4,
  VAR_5, VAR_6, 0);
 struct infra_data* VAR_12;
 int VAR_13 = 0;
 if(VAR_11 && ((struct infra_data*)VAR_11->data)->ttl < VAR_7) {

  int VAR_14 = ((struct infra_data*)VAR_11->data)->rtt.rto;
  uint8_t VAR_15 = ((struct infra_data*)VAR_11->data)->timeout_A;
  uint8_t VAR_16 = ((struct infra_data*)VAR_11->data)->timeout_AAAA;
  uint8_t VAR_17 = ((struct infra_data*)VAR_11->data)->timeout_other;
  FUNC_2(&VAR_11->lock);
  VAR_11 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, 1);
  if(VAR_11) {



   FUNC_0(VAR_2, VAR_11, VAR_7);
   VAR_13 = 1;

   if(VAR_14 >= VAR_1) {
    ((struct infra_data*)VAR_11->data)->rtt.rto
     = VAR_1;
    ((struct infra_data*)VAR_11->data)->timeout_A = VAR_15;
    ((struct infra_data*)VAR_11->data)->timeout_AAAA = VAR_16;
    ((struct infra_data*)VAR_11->data)->timeout_other = VAR_17;
   }
  }
 }
 if(!VAR_11) {

  if(!(VAR_11 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7)))
   return 0;
  VAR_12 = (struct infra_data*)VAR_11->data;
  *VAR_8 = VAR_12->edns_version;
  *VAR_9 = VAR_12->edns_lame_known;
  *VAR_10 = FUNC_5(&VAR_12->rtt);
  FUNC_6(VAR_2->hosts, VAR_11->hash, VAR_11, VAR_12, ((void*)0));
  return 1;
 }

 VAR_12 = (struct infra_data*)VAR_11->data;
 *VAR_8 = VAR_12->edns_version;
 *VAR_9 = VAR_12->edns_lame_known;
 *VAR_10 = FUNC_5(&VAR_12->rtt);
 if(*VAR_10 >= VAR_0 && FUNC_4(&VAR_12->rtt)*4 <= *VAR_10) {

  if(!VAR_13) {
   FUNC_2(&VAR_11->lock);
   VAR_11 = FUNC_1(VAR_2, VAR_3,VAR_4,VAR_5,VAR_6, 1);
   if(!VAR_11) {

    return 1;
   }
   VAR_12 = (struct infra_data*)VAR_11->data;
  }



  VAR_12->probedelay = VAR_7 + ((*VAR_10)+1999)/1000;
 }
 FUNC_2(&VAR_11->lock);
 return 1;
}
