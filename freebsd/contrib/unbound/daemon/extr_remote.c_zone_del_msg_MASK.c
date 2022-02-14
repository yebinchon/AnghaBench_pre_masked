
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reply_info {scalar_t__ ttl; scalar_t__ prefetch_ttl; scalar_t__ serve_expired_ttl; } ;
struct TYPE_2__ {int qname; } ;
struct msgreply_entry {TYPE_1__ key; } ;
struct lruhash_entry {scalar_t__ data; scalar_t__ key; } ;
struct del_info {scalar_t__ expired; int num_msgs; int name; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct lruhash_entry* VAR_0, void* VAR_1)
{

 struct del_info* VAR_2 = (struct del_info*)VAR_1;
 struct msgreply_entry* VAR_3 = (struct msgreply_entry*)VAR_0->key;
 if(FUNC_0(VAR_3->key.qname, VAR_2->name)) {
  struct reply_info* VAR_4 = (struct reply_info*)VAR_0->data;
  if(VAR_4->ttl > VAR_2->expired) {
   VAR_4->ttl = VAR_2->expired;
   VAR_4->prefetch_ttl = VAR_2->expired;
   VAR_4->serve_expired_ttl = VAR_2->expired;
   VAR_2->num_msgs++;
  }
 }
}
