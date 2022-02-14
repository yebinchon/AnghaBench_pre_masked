
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int time_t ;
struct sockaddr_storage {int dummy; } ;
struct lruhash_entry {void* data; void* key; int hash; int lock; } ;
struct infra_key {size_t namelen; struct lruhash_entry entry; int addr; int addrlen; int zonename; } ;
struct infra_data {size_t namelen; struct lruhash_entry entry; int addr; int addrlen; int zonename; } ;
struct infra_cache {int dummy; } ;
typedef int socklen_t ;


 int FUNC_0 (struct infra_cache*,struct lruhash_entry*,int ) ;
 int FUNC_1 (struct infra_key*) ;
 int FUNC_2 (struct sockaddr_storage*,int ,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,struct sockaddr_storage*,int ) ;
 int FUNC_6 (int *,size_t) ;

__attribute__((used)) static struct lruhash_entry*
FUNC_7(struct infra_cache* VAR_0, struct sockaddr_storage* VAR_1,
 socklen_t VAR_2, uint8_t* VAR_3, size_t VAR_4, time_t VAR_5)
{
 struct infra_data* VAR_6;
 struct infra_key* VAR_7 = (struct infra_key*)FUNC_4(sizeof(*VAR_7));
 if(!VAR_7)
  return ((void*)0);
 VAR_6 = (struct infra_data*)FUNC_4(sizeof(struct infra_data));
 if(!VAR_6) {
  FUNC_1(VAR_7);
  return ((void*)0);
 }
 VAR_7->zonename = FUNC_6(VAR_3, VAR_4);
 if(!VAR_7->zonename) {
  FUNC_1(VAR_7);
  FUNC_1(VAR_6);
  return ((void*)0);
 }
 VAR_7->namelen = VAR_4;
 FUNC_3(&VAR_7->entry.lock);
 VAR_7->entry.hash = FUNC_2(VAR_1, VAR_2, VAR_3);
 VAR_7->entry.key = (void*)VAR_7;
 VAR_7->entry.data = (void*)VAR_6;
 VAR_7->addrlen = VAR_2;
 FUNC_5(&VAR_7->addr, VAR_1, VAR_2);
 FUNC_0(VAR_0, &VAR_7->entry, VAR_5);
 return &VAR_7->entry;
}
