
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
typedef scalar_t__ time_t ;
struct reply_info {int prefetch_ttl; } ;
struct query_info {int qclass; int qtype; int qname_len; int qname; } ;
struct TYPE_2__ {int lock; scalar_t__ data; } ;
struct msgreply_entry {TYPE_1__ entry; } ;
struct module_env {int * now; } ;


 int FUNC_0 (int *) ;
 struct msgreply_entry* FUNC_1 (struct module_env*,int ,int ,int ,int ,int ,int ,int) ;

int
FUNC_2(struct module_env* VAR_0, struct query_info* VAR_1,
        time_t VAR_2, uint16_t VAR_3)
{
 struct msgreply_entry* VAR_4;
 VAR_4 = FUNC_1(VAR_0, VAR_1->qname, VAR_1->qname_len,
  VAR_1->qtype, VAR_1->qclass, VAR_3, *VAR_0->now, 1);
 if(VAR_4) {
  struct reply_info* VAR_5 = (struct reply_info*)VAR_4->entry.data;
  if(VAR_5) {
   VAR_5->prefetch_ttl += VAR_2;
   FUNC_0(&VAR_4->entry.lock);
   return 1;
  }
  FUNC_0(&VAR_4->entry.lock);
 }
 return 0;
}
