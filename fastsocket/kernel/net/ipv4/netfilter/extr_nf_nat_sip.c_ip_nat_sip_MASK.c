
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


union nf_inet_addr {scalar_t__ ip; } ;
struct sk_buff {int dummy; } ;
struct nf_conn {TYPE_10__* tuplehash; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;
typedef scalar_t__ __be16 ;
struct TYPE_17__ {scalar_t__ port; } ;
struct TYPE_18__ {TYPE_6__ udp; } ;
struct TYPE_13__ {scalar_t__ ip; } ;
struct TYPE_19__ {TYPE_7__ u; TYPE_2__ u3; } ;
struct TYPE_14__ {scalar_t__ port; } ;
struct TYPE_15__ {TYPE_3__ udp; } ;
struct TYPE_12__ {scalar_t__ ip; } ;
struct TYPE_16__ {TYPE_4__ u; TYPE_1__ u3; } ;
struct TYPE_20__ {TYPE_8__ src; TYPE_5__ dst; } ;
struct TYPE_11__ {TYPE_9__ tuple; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct nf_conn*,char const*,unsigned int,unsigned int,char*,unsigned int*,unsigned int*,union nf_inet_addr*) ;
 scalar_t__ FUNC_2 (struct nf_conn*,char const*,unsigned int*,unsigned int,int ,int*,unsigned int*,unsigned int*,union nf_inet_addr*,scalar_t__*) ;
 scalar_t__ FUNC_3 (struct nf_conn*,char const*,unsigned int,unsigned int,char*,unsigned int*,unsigned int*,unsigned int*) ;
 scalar_t__ FUNC_4 (struct nf_conn*,char const*,unsigned int,unsigned int*,unsigned int*,union nf_inet_addr*,scalar_t__*) ;
 scalar_t__ FUNC_5 (unsigned int) ;
 int FUNC_6 (struct sk_buff*,char const**,unsigned int*,unsigned int,unsigned int,char*,unsigned int) ;
 int FUNC_7 (struct sk_buff*,char const**,unsigned int*,unsigned int,unsigned int,union nf_inet_addr*,scalar_t__) ;
 int FUNC_8 (struct sk_buff*,char const**,unsigned int*,int ) ;
 struct nf_conn* FUNC_9 (struct sk_buff*,int*) ;
 int FUNC_10 (scalar_t__) ;
 unsigned int FUNC_11 (char*,char*,...) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (char const*,char*,int ) ;

__attribute__((used)) static unsigned int FUNC_14(struct sk_buff *VAR_6,
          const char **VAR_7, unsigned int *VAR_8)
{
 enum ip_conntrack_info VAR_9;
 struct nf_conn *VAR_10 = FUNC_9(VAR_6, &VAR_9);
 enum ip_conntrack_dir VAR_11 = FUNC_0(VAR_9);
 unsigned int VAR_12, VAR_13, VAR_14;
 union nf_inet_addr VAR_15;
 __be16 VAR_16;
 int VAR_17, VAR_18;


 if (FUNC_13(*VAR_7, "SIP/2.0", FUNC_12("SIP/2.0")) != 0) {
  if (FUNC_4(VAR_10, *VAR_7, *VAR_8,
      &VAR_13, &VAR_14,
      &VAR_15, &VAR_16) > 0 &&
      !FUNC_7(VAR_6, VAR_7, VAR_8, VAR_13, VAR_14,
         &VAR_15, VAR_16))
   return VAR_1;
  VAR_17 = 1;
 } else
  VAR_17 = 0;


 if (FUNC_2(VAR_10, *VAR_7, ((void*)0), *VAR_8,
        VAR_5, ((void*)0), &VAR_13, &VAR_14,
        &VAR_15, &VAR_16) > 0) {
  unsigned int VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
  char VAR_24[sizeof("nnn.nnn.nnn.nnn:nnnnn")];



  if (VAR_17) {
   if (VAR_15.ip != VAR_10->tuplehash[VAR_11].tuple.src.u3.ip ||
       VAR_16 != VAR_10->tuplehash[VAR_11].tuple.src.u.udp.port)
    goto next;
  } else {
   if (VAR_15.ip != VAR_10->tuplehash[VAR_11].tuple.dst.u3.ip ||
       VAR_16 != VAR_10->tuplehash[VAR_11].tuple.dst.u.udp.port)
    goto next;
  }

  if (!FUNC_7(VAR_6, VAR_7, VAR_8, VAR_13, VAR_14,
         &VAR_15, VAR_16))
   return VAR_1;

  VAR_19 = VAR_13 + VAR_14;



  if (FUNC_1(VAR_10, *VAR_7, VAR_19, *VAR_8,
            "maddr=", &VAR_20, &VAR_21,
            &VAR_15) > 0 &&
      VAR_15.ip == VAR_10->tuplehash[VAR_11].tuple.src.u3.ip &&
      VAR_15.ip != VAR_10->tuplehash[!VAR_11].tuple.dst.u3.ip) {
   VAR_22 = FUNC_11(VAR_24, "%pI4",
     &VAR_10->tuplehash[!VAR_11].tuple.dst.u3.ip);
   if (!FUNC_6(VAR_6, VAR_7, VAR_8, VAR_20, VAR_21,
        VAR_24, VAR_22))
    return VAR_1;
  }



  if (FUNC_1(VAR_10, *VAR_7, VAR_19, *VAR_8,
            "received=", &VAR_20, &VAR_21,
            &VAR_15) > 0 &&
      VAR_15.ip == VAR_10->tuplehash[VAR_11].tuple.dst.u3.ip &&
      VAR_15.ip != VAR_10->tuplehash[!VAR_11].tuple.src.u3.ip) {
   VAR_22 = FUNC_11(VAR_24, "%pI4",
     &VAR_10->tuplehash[!VAR_11].tuple.src.u3.ip);
   if (!FUNC_6(VAR_6, VAR_7, VAR_8, VAR_20, VAR_21,
        VAR_24, VAR_22))
    return VAR_1;
  }



  if (FUNC_3(VAR_10, *VAR_7, VAR_19, *VAR_8,
       "rport=", &VAR_20, &VAR_21,
       &VAR_23) > 0 &&
      FUNC_5(VAR_23) == VAR_10->tuplehash[VAR_11].tuple.dst.u.udp.port &&
      FUNC_5(VAR_23) != VAR_10->tuplehash[!VAR_11].tuple.src.u.udp.port) {
   __be16 VAR_25 = VAR_10->tuplehash[!VAR_11].tuple.src.u.udp.port;
   VAR_22 = FUNC_11(VAR_24, "%u", FUNC_10(VAR_25));
   if (!FUNC_6(VAR_6, VAR_7, VAR_8, VAR_20, VAR_21,
        VAR_24, VAR_22))
    return VAR_1;
  }
 }

next:

 VAR_12 = 0;
 VAR_18 = 0;
 while (FUNC_2(VAR_10, *VAR_7, &VAR_12, *VAR_8,
           VAR_2, &VAR_18,
           &VAR_13, &VAR_14,
           &VAR_15, &VAR_16) > 0) {
  if (!FUNC_7(VAR_6, VAR_7, VAR_8, VAR_13, VAR_14,
         &VAR_15, VAR_16))
   return VAR_1;
 }

 if (!FUNC_8(VAR_6, VAR_7, VAR_8, VAR_3) ||
     !FUNC_8(VAR_6, VAR_7, VAR_8, VAR_4))
  return VAR_1;
 return VAR_0;
}
