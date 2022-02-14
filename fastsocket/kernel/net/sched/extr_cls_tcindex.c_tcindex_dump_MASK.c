
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcmsg {int tcm_handle; } ;
struct TYPE_2__ {int classid; scalar_t__ class; } ;
struct tcindex_filter_result {int exts; TYPE_1__ res; } ;
struct tcindex_filter {int key; struct tcindex_filter_result result; struct tcindex_filter* next; } ;
struct tcindex_data {int hash; int shift; int fall_through; struct tcindex_filter** h; struct tcindex_filter_result* perfect; int mask; } ;
struct tcf_proto {int dummy; } ;
struct sk_buff {int len; } ;
struct nlattr {int dummy; } ;


 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (struct sk_buff*,int ,int) ;
 struct tcindex_data* FUNC_2 (struct tcf_proto*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (struct sk_buff*,unsigned char*) ;
 int FUNC_6 (char*,...) ;
 unsigned char* FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int *,int *) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int *,int *) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_10(struct tcf_proto *VAR_7, unsigned long VAR_8,
    struct sk_buff *VAR_9, struct tcmsg *VAR_10)
{
 struct tcindex_data *VAR_11 = FUNC_2(VAR_7);
 struct tcindex_filter_result *VAR_12 = (struct tcindex_filter_result *) VAR_8;
 unsigned char *VAR_13 = FUNC_7(VAR_9);
 struct nlattr *VAR_14;

 FUNC_6("tcindex_dump(tp %p,fh 0x%lx,skb %p,t %p),p %p,r %p,b %p\n",
   VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
 FUNC_6("p->perfect %p p->h %p\n", VAR_11->perfect, VAR_11->h);

 VAR_14 = FUNC_4(VAR_9, VAR_0);
 if (VAR_14 == ((void*)0))
  goto nla_put_failure;

 if (!VAR_8) {
  VAR_10->tcm_handle = ~0;
  FUNC_1(VAR_9, VAR_3, VAR_11->hash);
  FUNC_0(VAR_9, VAR_4, VAR_11->mask);
  FUNC_1(VAR_9, VAR_5, VAR_11->shift);
  FUNC_1(VAR_9, VAR_2, VAR_11->fall_through);
  FUNC_3(VAR_9, VAR_14);
 } else {
  if (VAR_11->perfect) {
   VAR_10->tcm_handle = VAR_12-VAR_11->perfect;
  } else {
   struct tcindex_filter *VAR_15;
   int VAR_16;

   VAR_10->tcm_handle = 0;
   for (VAR_16 = 0; !VAR_10->tcm_handle && VAR_16 < VAR_11->hash; VAR_16++) {
    for (VAR_15 = VAR_11->h[VAR_16]; !VAR_10->tcm_handle && VAR_15;
         VAR_15 = VAR_15->next) {
     if (&VAR_15->result == VAR_12)
      VAR_10->tcm_handle = VAR_15->key;
    }
   }
  }
  FUNC_6("handle = %d\n", VAR_10->tcm_handle);
  if (VAR_12->res.class)
   FUNC_1(VAR_9, VAR_1, VAR_12->res.classid);

  if (FUNC_8(VAR_9, &VAR_12->exts, &VAR_6) < 0)
   goto nla_put_failure;
  FUNC_3(VAR_9, VAR_14);

  if (FUNC_9(VAR_9, &VAR_12->exts, &VAR_6) < 0)
   goto nla_put_failure;
 }

 return VAR_9->len;

nla_put_failure:
 FUNC_5(VAR_9, VAR_13);
 return -1;
}
