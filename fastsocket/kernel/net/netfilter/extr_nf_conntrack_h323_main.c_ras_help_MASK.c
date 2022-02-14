
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {char* len; } ;
struct nf_conn {TYPE_1__* tuplehash; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
struct TYPE_2__ {int tuple; } ;
typedef int RasMessage ;


 size_t FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char* FUNC_2 (struct sk_buff*,unsigned int,int*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (struct sk_buff*,struct nf_conn*,int,unsigned char**,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_4, unsigned int VAR_5,
      struct nf_conn *VAR_6, enum ip_conntrack_info VAR_7)
{
 static RasMessage VAR_8;
 unsigned char *VAR_9;
 int VAR_10 = 0;
 int VAR_11;

 FUNC_5("nf_ct_ras: skblen = %u\n", VAR_4->len);

 FUNC_8(&VAR_3);


 VAR_9 = FUNC_2(VAR_4, VAR_5, &VAR_10);
 if (VAR_9 == ((void*)0))
  goto accept;
 FUNC_5("nf_ct_ras: RAS message len=%d ", VAR_10);
 FUNC_4(&VAR_6->tuplehash[FUNC_0(VAR_7)].tuple);


 VAR_11 = FUNC_1(VAR_9, VAR_10, &VAR_8);
 if (VAR_11 < 0) {
  FUNC_5("nf_ct_ras: decoding error: %s\n",
    VAR_11 == VAR_0 ?
    "out of bound" : "out of range");
  goto accept;
 }


 if (FUNC_7(VAR_4, VAR_6, VAR_7, &VAR_9, &VAR_8) < 0)
  goto drop;

      accept:
 FUNC_9(&VAR_3);
 return VAR_1;

      drop:
 FUNC_9(&VAR_3);
 if (FUNC_3())
  FUNC_6("nf_ct_ras: packet dropped\n");
 return VAR_2;
}
