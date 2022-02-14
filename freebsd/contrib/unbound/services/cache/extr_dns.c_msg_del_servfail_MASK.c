
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct reply_info {int flags; } ;
struct query_info {int qclass; int qtype; int qname_len; int qname; } ;
struct TYPE_2__ {int lock; scalar_t__ data; } ;
struct msgreply_entry {TYPE_1__ entry; } ;
struct module_env {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 struct msgreply_entry* FUNC_2 (struct module_env*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct module_env*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct module_env* VAR_1, struct query_info* VAR_2,
 uint32_t VAR_3)
{
 struct msgreply_entry* VAR_4;



 VAR_4 = FUNC_2(VAR_1, VAR_2->qname, VAR_2->qname_len,
  VAR_2->qtype, VAR_2->qclass, VAR_3, 0, 0);
 if(!VAR_4) return;



 if(FUNC_0(((struct reply_info*)VAR_4->entry.data)->flags)
  != VAR_0) {
  FUNC_1(&VAR_4->entry.lock);
  return;
 }
 FUNC_1(&VAR_4->entry.lock);
 FUNC_3(VAR_1, VAR_2->qname, VAR_2->qname_len, VAR_2->qtype,
  VAR_2->qclass, VAR_3);
}
