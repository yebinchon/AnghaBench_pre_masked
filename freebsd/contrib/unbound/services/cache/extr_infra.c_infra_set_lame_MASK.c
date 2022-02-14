
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int time_t ;
struct sockaddr_storage {int dummy; } ;
struct lruhash_entry {int lock; scalar_t__ data; int hash; } ;
struct infra_data {int isdnsseclame; int rec_lame; int lame_type_A; int lame_other; int ttl; } ;
struct infra_cache {int hosts; } ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct infra_cache*,struct lruhash_entry*,int ) ;
 struct lruhash_entry* FUNC_1 (struct infra_cache*,struct sockaddr_storage*,int ,int *,size_t,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 struct lruhash_entry* FUNC_4 (struct infra_cache*,struct sockaddr_storage*,int ,int *,size_t,int ) ;
 int FUNC_5 (int ,int ,struct lruhash_entry*,scalar_t__,int *) ;

int
FUNC_6(struct infra_cache* VAR_1, struct sockaddr_storage* VAR_2,
 socklen_t VAR_3, uint8_t* VAR_4, size_t VAR_5, time_t VAR_6,
 int VAR_7, int VAR_8, uint16_t VAR_9)
{
 struct infra_data* VAR_10;
 struct lruhash_entry* VAR_11;
 int VAR_12 = 0;
 VAR_11 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, 1);
 if(!VAR_11) {

  if(!(VAR_11 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6))) {
   FUNC_3("set_lame: malloc failure");
   return 0;
  }
  VAR_12 = 1;
 } else if( ((struct infra_data*)VAR_11->data)->ttl < VAR_6) {

  FUNC_0(VAR_1, VAR_11, VAR_6);
 }

 VAR_10 = (struct infra_data*)VAR_11->data;

 if(VAR_7)
  VAR_10->isdnsseclame = 1;
 if(VAR_8)
  VAR_10->rec_lame = 1;
 if(!VAR_7 && !VAR_8 && VAR_9 == VAR_0)
  VAR_10->lame_type_A = 1;
 if(!VAR_7 && !VAR_8 && VAR_9 != VAR_0)
  VAR_10->lame_other = 1;

 if(VAR_12)
  FUNC_5(VAR_1->hosts, VAR_11->hash, VAR_11, VAR_11->data, ((void*)0));
 else { FUNC_2(&VAR_11->lock); }
 return 1;
}
