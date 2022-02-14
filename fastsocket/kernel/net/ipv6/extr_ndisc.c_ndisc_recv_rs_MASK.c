
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; int dev; } ;
struct rs_msg {int opt; } ;
struct neighbour {int dummy; } ;
struct ndisc_options {scalar_t__ nd_opts_src_lladdr; } ;
struct TYPE_3__ {int forwarding; } ;
struct inet6_dev {TYPE_1__ cnf; } ;
struct in6_addr {int dummy; } ;
struct TYPE_4__ {struct in6_addr saddr; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct neighbour* FUNC_2 (int *,struct in6_addr*,int ,int) ;
 struct inet6_dev* FUNC_3 (int ) ;
 int FUNC_4 (struct inet6_dev*) ;
 scalar_t__ FUNC_5 (struct in6_addr*) ;
 TYPE_2__* FUNC_6 (struct sk_buff*) ;
 int VAR_4 ;
 int * FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (int ,unsigned long,struct ndisc_options*) ;
 int FUNC_9 (struct neighbour*) ;
 int FUNC_10 (struct neighbour*,int *,int ,int) ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ FUNC_12 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_13(struct sk_buff *VAR_5)
{
 struct rs_msg *VAR_6 = (struct rs_msg *)FUNC_12(VAR_5);
 unsigned long VAR_7 = VAR_5->len - sizeof(*VAR_6);
 struct neighbour *VAR_8;
 struct inet6_dev *VAR_9;
 struct in6_addr *VAR_10 = &FUNC_6(VAR_5)->saddr;
 struct ndisc_options VAR_11;
 u8 *VAR_12 = ((void*)0);

 if (VAR_5->len < sizeof(*VAR_6))
  return;

 VAR_9 = FUNC_3(VAR_5->dev);
 if (!VAR_9) {
  if (FUNC_11())
   FUNC_0("ICMP6 RS: can't find in6 device\n");
  return;
 }


 if (!VAR_9->cnf.forwarding)
  goto out;





 if (FUNC_5(VAR_10))
  goto out;


 if (!FUNC_8(VAR_6->opt, VAR_7, &VAR_11)) {
  if (FUNC_11())
   FUNC_1("ICMP6 NS: invalid ND option, ignored\n");
  goto out;
 }

 if (VAR_11.nd_opts_src_lladdr) {
  VAR_12 = FUNC_7(VAR_11.nd_opts_src_lladdr,
          VAR_5->dev);
  if (!VAR_12)
   goto out;
 }

 VAR_8 = FUNC_2(&VAR_4, VAR_10, VAR_5->dev, 1);
 if (VAR_8) {
  FUNC_10(VAR_8, VAR_12, VAR_3,
        VAR_2|
        VAR_0|
        VAR_1);
  FUNC_9(VAR_8);
 }
out:
 FUNC_4(VAR_9);
}
