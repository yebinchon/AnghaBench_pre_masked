
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct sk_buff {int * nfct; } ;
struct nf_conntrack_l4proto {int (* error ) (struct net*,struct sk_buff*,unsigned int,int*,int ,unsigned int) ;int (* packet ) (struct nf_conn*,struct sk_buff*,unsigned int,int,int ,unsigned int) ;} ;
struct nf_conntrack_l3proto {int (* get_l4proto ) (struct sk_buff*,int ,unsigned int*,int *) ;} ;
struct nf_conn {int status; } ;
struct net {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct nf_conn*) ;
 unsigned int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net*,int ) ;
 unsigned int VAR_3 ;
 struct nf_conntrack_l3proto* FUNC_3 (int ) ;
 struct nf_conntrack_l4proto* FUNC_4 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ,struct nf_conn*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 struct nf_conn* FUNC_8 (struct net*,struct sk_buff*,unsigned int,int ,int ,struct nf_conntrack_l3proto*,struct nf_conntrack_l4proto*,int*,int*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,int ,unsigned int*,int *) ;
 int FUNC_11 (struct net*,struct sk_buff*,unsigned int,int*,int ,unsigned int) ;
 int FUNC_12 (struct nf_conn*,struct sk_buff*,unsigned int,int,int ,unsigned int) ;
 int FUNC_13 (int ,int *) ;

unsigned int
FUNC_14(struct net *VAR_8, u_int8_t VAR_9, unsigned int VAR_10,
  struct sk_buff *VAR_11)
{
 struct nf_conn *VAR_12;
 enum ip_conntrack_info VAR_13;
 struct nf_conntrack_l3proto *VAR_14;
 struct nf_conntrack_l4proto *VAR_15;
 unsigned int VAR_16;
 u_int8_t VAR_17;
 int VAR_18 = 0;
 int VAR_19;


 if (VAR_11->nfct) {
  FUNC_2(VAR_8, VAR_6);
  return VAR_2;
 }


 VAR_14 = FUNC_3(VAR_9);
 VAR_19 = VAR_14->get_l4proto(VAR_11, FUNC_9(VAR_11),
       &VAR_16, &VAR_17);
 if (VAR_19 <= 0) {
  FUNC_7("not prepared to track yet or error occured\n");
  FUNC_2(VAR_8, VAR_5);
  FUNC_2(VAR_8, VAR_7);
  return -VAR_19;
 }

 VAR_15 = FUNC_4(VAR_9, VAR_17);




 if (VAR_15->error != ((void*)0)) {
  VAR_19 = VAR_15->error(VAR_8, VAR_11, VAR_16, &VAR_13, VAR_9, VAR_10);
  if (VAR_19 <= 0) {
   FUNC_2(VAR_8, VAR_5);
   FUNC_2(VAR_8, VAR_7);
   return -VAR_19;
  }

  if (VAR_11->nfct)
   return VAR_19;
 }

 VAR_12 = FUNC_8(VAR_8, VAR_11, VAR_16, VAR_9, VAR_17,
          VAR_14, VAR_15, &VAR_18, &VAR_13);
 if (!VAR_12) {

  FUNC_2(VAR_8, VAR_7);
  return VAR_2;
 }

 if (FUNC_0(VAR_12)) {

  FUNC_2(VAR_8, VAR_4);
  return VAR_3;
 }

 FUNC_1(VAR_11->nfct);

 VAR_19 = VAR_15->packet(VAR_12, VAR_11, VAR_16, VAR_13, VAR_9, VAR_10);
 if (VAR_19 <= 0) {


  FUNC_7("nf_conntrack_in: Can't track with proto module\n");
  FUNC_6(VAR_11->nfct);
  VAR_11->nfct = ((void*)0);
  FUNC_2(VAR_8, VAR_7);
  if (VAR_19 == -VAR_3)
   FUNC_2(VAR_8, VAR_4);
  return -VAR_19;
 }

 if (VAR_18 && !FUNC_13(VAR_1, &VAR_12->status))
  FUNC_5(VAR_0, VAR_12);

 return VAR_19;
}
