
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int time_t ;
struct sockaddr_storage {int dummy; } ;
struct lruhash_entry {int lock; scalar_t__ data; int hash; } ;
struct infra_data {int edns_version; int edns_lame_known; int ttl; } ;
struct infra_cache {int hosts; } ;
typedef int socklen_t ;


 int FUNC_0 (struct infra_cache*,struct lruhash_entry*,int ) ;
 struct lruhash_entry* FUNC_1 (struct infra_cache*,struct sockaddr_storage*,int ,int *,size_t,int) ;
 int FUNC_2 (int *) ;
 struct lruhash_entry* FUNC_3 (struct infra_cache*,struct sockaddr_storage*,int ,int *,size_t,int ) ;
 int FUNC_4 (int ,int ,struct lruhash_entry*,scalar_t__,int *) ;

int
FUNC_5(struct infra_cache* VAR_0, struct sockaddr_storage* VAR_1,
 socklen_t VAR_2, uint8_t* VAR_3, size_t VAR_4, int VAR_5,
 time_t VAR_6)
{
 struct lruhash_entry* VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_2,
  VAR_3, VAR_4, 1);
 struct infra_data* VAR_8;
 int VAR_9 = 0;
 if(!VAR_7) {
  if(!(VAR_7 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_6)))
   return 0;
  VAR_9 = 1;
 } else if(((struct infra_data*)VAR_7->data)->ttl < VAR_6) {
  FUNC_0(VAR_0, VAR_7, VAR_6);
 }

 VAR_8 = (struct infra_data*)VAR_7->data;

 if(!(VAR_5 == -1 && (VAR_8->edns_version != -1 &&
  VAR_8->edns_lame_known))) {
  VAR_8->edns_version = VAR_5;
  VAR_8->edns_lame_known = 1;
 }

 if(VAR_9)
  FUNC_4(VAR_0->hosts, VAR_7->hash, VAR_7, VAR_7->data, ((void*)0));
 else { FUNC_2(&VAR_7->lock); }
 return 1;
}
