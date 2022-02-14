
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcmsg {int tcm_handle; } ;
struct tcf_proto {int dummy; } ;
struct tc_rsvp_pinfo {scalar_t__ pad; int tunnelhdr; int tunnelid; int protocol; int spi; int dpi; } ;
struct sk_buff {int len; } ;
struct rsvp_session {int tunnelid; int protocol; int dpi; struct tc_rsvp_pinfo dst; } ;
struct TYPE_2__ {scalar_t__ classid; } ;
struct rsvp_filter {int handle; int exts; struct tc_rsvp_pinfo* src; TYPE_1__ res; int tunnelhdr; int spi; struct rsvp_session* sess; } ;
struct nlattr {int dummy; } ;
typedef int pinfo ;


 int FUNC_0 (struct sk_buff*,int ,int,struct tc_rsvp_pinfo*) ;
 int FUNC_1 (struct sk_buff*,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*,unsigned char*) ;
 int VAR_5 ;
 unsigned char* FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int *,int *) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int *,int *) ;

__attribute__((used)) static int FUNC_8(struct tcf_proto *VAR_6, unsigned long VAR_7,
       struct sk_buff *VAR_8, struct tcmsg *VAR_9)
{
 struct rsvp_filter *VAR_10 = (struct rsvp_filter*)VAR_7;
 struct rsvp_session *VAR_11;
 unsigned char *VAR_12 = FUNC_5(VAR_8);
 struct nlattr *VAR_13;
 struct tc_rsvp_pinfo VAR_14;

 if (VAR_10 == ((void*)0))
  return VAR_8->len;
 VAR_11 = VAR_10->sess;

 VAR_9->tcm_handle = VAR_10->handle;

 VAR_13 = FUNC_3(VAR_8, VAR_0);
 if (VAR_13 == ((void*)0))
  goto nla_put_failure;

 FUNC_0(VAR_8, VAR_2, sizeof(VAR_11->dst), &VAR_11->dst);
 VAR_14.dpi = VAR_11->dpi;
 VAR_14.spi = VAR_10->spi;
 VAR_14.protocol = VAR_11->protocol;
 VAR_14.tunnelid = VAR_11->tunnelid;
 VAR_14.tunnelhdr = VAR_10->tunnelhdr;
 VAR_14.pad = 0;
 FUNC_0(VAR_8, VAR_3, sizeof(VAR_14), &VAR_14);
 if (VAR_10->res.classid)
  FUNC_1(VAR_8, VAR_1, VAR_10->res.classid);
 if (((VAR_10->handle>>8)&0xFF) != 16)
  FUNC_0(VAR_8, VAR_4, sizeof(VAR_10->src), VAR_10->src);

 if (FUNC_6(VAR_8, &VAR_10->exts, &VAR_5) < 0)
  goto nla_put_failure;

 FUNC_2(VAR_8, VAR_13);

 if (FUNC_7(VAR_8, &VAR_10->exts, &VAR_5) < 0)
  goto nla_put_failure;
 return VAR_8->len;

nla_put_failure:
 FUNC_4(VAR_8, VAR_12);
 return -1;
}
