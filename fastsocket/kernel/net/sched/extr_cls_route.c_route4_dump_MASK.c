
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcmsg {int tcm_handle; } ;
struct tcf_proto {int dummy; } ;
struct sk_buff {int len; } ;
struct TYPE_2__ {int classid; } ;
struct route4_filter {int handle; int id; int iif; int exts; TYPE_1__ res; } ;
struct nlattr {int dummy; } ;


 int FUNC_0 (struct sk_buff*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*,unsigned char*) ;
 int VAR_5 ;
 unsigned char* FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int *,int *) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int *,int *) ;

__attribute__((used)) static int FUNC_7(struct tcf_proto *VAR_6, unsigned long VAR_7,
         struct sk_buff *VAR_8, struct tcmsg *VAR_9)
{
 struct route4_filter *VAR_10 = (struct route4_filter*)VAR_7;
 unsigned char *VAR_11 = FUNC_4(VAR_8);
 struct nlattr *VAR_12;
 u32 VAR_13;

 if (VAR_10 == ((void*)0))
  return VAR_8->len;

 VAR_9->tcm_handle = VAR_10->handle;

 VAR_12 = FUNC_2(VAR_8, VAR_0);
 if (VAR_12 == ((void*)0))
  goto nla_put_failure;

 if (!(VAR_10->handle&0x8000)) {
  VAR_13 = VAR_10->id&0xFF;
  FUNC_0(VAR_8, VAR_4, VAR_13);
 }
 if (VAR_10->handle&0x80000000) {
  if ((VAR_10->handle>>16) != 0xFFFF)
   FUNC_0(VAR_8, VAR_3, VAR_10->iif);
 } else {
  VAR_13 = VAR_10->id>>16;
  FUNC_0(VAR_8, VAR_2, VAR_13);
 }
 if (VAR_10->res.classid)
  FUNC_0(VAR_8, VAR_1, VAR_10->res.classid);

 if (FUNC_5(VAR_8, &VAR_10->exts, &VAR_5) < 0)
  goto nla_put_failure;

 FUNC_1(VAR_8, VAR_12);

 if (FUNC_6(VAR_8, &VAR_10->exts, &VAR_5) < 0)
  goto nla_put_failure;

 return VAR_8->len;

nla_put_failure:
 FUNC_3(VAR_8, VAR_11);
 return -1;
}
