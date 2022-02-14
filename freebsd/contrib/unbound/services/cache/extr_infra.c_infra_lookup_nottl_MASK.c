
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct sockaddr_storage {int dummy; } ;
struct lruhash_entry {int dummy; } ;
struct TYPE_2__ {int hash; int * data; void* key; } ;
struct infra_key {size_t namelen; TYPE_1__ entry; int * zonename; int addr; int addrlen; } ;
struct infra_cache {int hosts; } ;
typedef int socklen_t ;


 int FUNC_0 (struct sockaddr_storage*,int ,int *) ;
 int FUNC_1 (int *,struct sockaddr_storage*,int ) ;
 struct lruhash_entry* FUNC_2 (int ,int ,struct infra_key*,int) ;

struct lruhash_entry*
FUNC_3(struct infra_cache* VAR_0, struct sockaddr_storage* VAR_1,
 socklen_t VAR_2, uint8_t* VAR_3, size_t VAR_4, int VAR_5)
{
 struct infra_key VAR_6;
 VAR_6.addrlen = VAR_2;
 FUNC_1(&VAR_6.addr, VAR_1, VAR_2);
 VAR_6.namelen = VAR_4;
 VAR_6.zonename = VAR_3;
 VAR_6.entry.hash = FUNC_0(VAR_1, VAR_2, VAR_3);
 VAR_6.entry.key = (void*)&VAR_6;
 VAR_6.entry.data = ((void*)0);
 return FUNC_2(VAR_0->hosts, VAR_6.entry.hash, &VAR_6, VAR_5);
}
