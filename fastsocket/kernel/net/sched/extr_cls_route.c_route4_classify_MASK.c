
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct tcf_result {size_t classid; scalar_t__ class; } ;
struct tcf_proto {TYPE_3__* q; scalar_t__ root; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int iif; } ;
struct rtable {TYPE_1__ fl; } ;
struct route4_head {struct route4_bucket** table; TYPE_2__* fastmap; } ;
struct route4_filter {size_t id; int iif; struct route4_filter* next; struct tcf_result res; } ;
struct route4_bucket {struct route4_filter** ht; } ;
struct dst_entry {size_t tclassid; } ;
struct TYPE_6__ {size_t handle; } ;
struct TYPE_5__ {size_t id; int iif; struct route4_filter* filter; } ;


 int FUNC_0 () ;
 struct route4_filter* VAR_0 ;
 scalar_t__ FUNC_1 (size_t) ;
 size_t FUNC_2 (size_t,int) ;
 size_t FUNC_3 (size_t) ;
 size_t FUNC_4 (int) ;
 size_t FUNC_5 (size_t) ;
 size_t FUNC_6 () ;
 int FUNC_7 (struct route4_head*,size_t,int,struct route4_filter*) ;
 struct dst_entry* FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_1, struct tcf_proto *VAR_2,
      struct tcf_result *VAR_3)
{
 struct route4_head *VAR_4 = (struct route4_head*)VAR_2->root;
 struct dst_entry *VAR_5;
 struct route4_bucket *VAR_6;
 struct route4_filter *VAR_7;
 u32 VAR_8, VAR_9;
 int VAR_10, VAR_11 = 0;

 if ((VAR_5 = FUNC_8(VAR_1)) == ((void*)0))
  goto failure;

 VAR_8 = VAR_5->tclassid;
 if (VAR_4 == ((void*)0))
  goto old_method;

 VAR_10 = ((struct rtable*)VAR_5)->fl.iif;

 VAR_9 = FUNC_2(VAR_8, VAR_10);
 if (VAR_8 == VAR_4->fastmap[VAR_9].id &&
     VAR_10 == VAR_4->fastmap[VAR_9].iif &&
     (VAR_7 = VAR_4->fastmap[VAR_9].filter) != ((void*)0)) {
  if (VAR_7 == VAR_0)
   goto failure;

  *VAR_3 = VAR_7->res;
  return 0;
 }

 VAR_9 = FUNC_5(VAR_8);

restart:
 if ((VAR_6 = VAR_4->table[VAR_9]) != ((void*)0)) {
  for (VAR_7 = VAR_6->ht[FUNC_3(VAR_8)]; VAR_7; VAR_7 = VAR_7->next)
   if (VAR_7->id == VAR_8)
    FUNC_0();

  for (VAR_7 = VAR_6->ht[FUNC_4(VAR_10)]; VAR_7; VAR_7 = VAR_7->next)
   if (VAR_7->iif == VAR_10)
    FUNC_0();

  for (VAR_7 = VAR_6->ht[FUNC_6()]; VAR_7; VAR_7 = VAR_7->next)
   FUNC_0();

 }
 if (VAR_9 < 256) {
  VAR_9 = 256;
  VAR_8 &= ~0xFFFF;
  goto restart;
 }

 if (!VAR_11)
  FUNC_7(VAR_4, VAR_8, VAR_10, VAR_0);
failure:
 return -1;

old_method:
 if (VAR_8 && (FUNC_1(VAR_8) == 0 ||
     !(FUNC_1(VAR_8^VAR_2->q->handle)))) {
  VAR_3->classid = VAR_8;
  VAR_3->class = 0;
  return 0;
 }
 return -1;
}
