
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reply_info {scalar_t__ an_numrrsets; int ttl; int flags; } ;
struct lruhash_entry {scalar_t__ data; } ;
struct del_info {int num_msgs; int expired; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct lruhash_entry* VAR_0, void* VAR_1)
{

 struct del_info* VAR_2 = (struct del_info*)VAR_1;
 struct reply_info* VAR_3 = (struct reply_info*)VAR_0->data;


 if(FUNC_0(VAR_3->flags) != 0 || VAR_3->an_numrrsets == 0) {
  VAR_3->ttl = VAR_2->expired;
  VAR_2->num_msgs++;
 }
}
