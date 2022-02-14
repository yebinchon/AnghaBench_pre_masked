
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {char* len; } ;
struct nf_conn {TYPE_1__* tuplehash; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
struct TYPE_2__ {int tuple; } ;
typedef int Q931 ;


 size_t FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct sk_buff*,unsigned int,struct nf_conn*,int,unsigned char**,int*,int*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (struct sk_buff*,struct nf_conn*,int,unsigned char**,int,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_6, unsigned int VAR_7,
       struct nf_conn *VAR_8, enum ip_conntrack_info VAR_9)
{
 static Q931 VAR_10;
 unsigned char *VAR_11 = ((void*)0);
 int VAR_12;
 int VAR_13;
 int VAR_14;


 if (VAR_9 != VAR_1 &&
     VAR_9 != VAR_1 + VAR_2) {
  return VAR_3;
 }
 FUNC_5("nf_ct_q931: skblen = %u\n", VAR_6->len);

 FUNC_8(&VAR_5);


 while (FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9,
        &VAR_11, &VAR_12, &VAR_13)) {
  FUNC_5("nf_ct_q931: TPKT len=%d ", VAR_12);
  FUNC_4(&VAR_8->tuplehash[FUNC_0(VAR_9)].tuple);


  VAR_14 = FUNC_1(VAR_11, VAR_12, &VAR_10);
  if (VAR_14 < 0) {
   FUNC_5("nf_ct_q931: decoding error: %s\n",
     VAR_14 == VAR_0 ?
     "out of bound" : "out of range");

   break;
  }


  if (FUNC_7(VAR_6, VAR_8, VAR_9, &VAR_11, VAR_13, &VAR_10) < 0)
   goto drop;
 }

 FUNC_9(&VAR_5);
 return VAR_3;

      drop:
 FUNC_9(&VAR_5);
 if (FUNC_3())
  FUNC_6("nf_ct_q931: packet dropped\n");
 return VAR_4;
}
