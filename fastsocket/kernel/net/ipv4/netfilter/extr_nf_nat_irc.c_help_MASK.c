
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int u_int32_t ;
typedef scalar_t__ u_int16_t ;
struct sk_buff {int dummy; } ;
struct TYPE_16__ {int port; } ;
struct TYPE_17__ {TYPE_3__ tcp; } ;
struct TYPE_18__ {TYPE_4__ u; } ;
struct TYPE_19__ {TYPE_5__ dst; } ;
struct TYPE_14__ {int port; } ;
struct TYPE_15__ {TYPE_1__ tcp; } ;
struct nf_conntrack_expect {size_t dir; TYPE_11__* master; TYPE_6__ tuple; TYPE_2__ saved_proto; int expectfn; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
struct TYPE_20__ {int ip; } ;
struct TYPE_21__ {TYPE_7__ u3; } ;
struct TYPE_22__ {TYPE_8__ dst; } ;
struct TYPE_13__ {TYPE_10__* tuplehash; } ;
struct TYPE_12__ {TYPE_9__ tuple; } ;


 size_t VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct nf_conntrack_expect*) ;
 int FUNC_2 (struct nf_conntrack_expect*) ;
 int VAR_3 ;
 unsigned int FUNC_3 (struct sk_buff*,TYPE_11__*,int,unsigned int,unsigned int,char*,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*,char*,int*,scalar_t__) ;
 int FUNC_7 (char*,char*,int,scalar_t__) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static unsigned int FUNC_9(struct sk_buff *VAR_4,
    enum ip_conntrack_info VAR_5,
    unsigned int VAR_6,
    unsigned int VAR_7,
    struct nf_conntrack_expect *VAR_8)
{
 char VAR_9[sizeof("4294967296 65635")];
 u_int32_t VAR_10;
 u_int16_t VAR_11;
 unsigned int VAR_12;


 VAR_8->saved_proto.tcp.port = VAR_8->tuple.dst.u.tcp.port;
 VAR_8->dir = VAR_0;
 VAR_8->expectfn = VAR_3;


 for (VAR_11 = FUNC_5(VAR_8->saved_proto.tcp.port); VAR_11 != 0; VAR_11++) {
  VAR_8->tuple.dst.u.tcp.port = FUNC_0(VAR_11);
  if (FUNC_1(VAR_8) == 0)
   break;
 }

 if (VAR_11 == 0)
  return VAR_2;

 VAR_10 = FUNC_4(VAR_8->master->tuplehash[VAR_0].tuple.dst.u3.ip);
 FUNC_7(VAR_9, "%u %u", VAR_10, VAR_11);
 FUNC_6("nf_nat_irc: inserting '%s' == %pI4, port %u\n",
   VAR_9, &VAR_10, VAR_11);

 VAR_12 = FUNC_3(VAR_4, VAR_8->master, VAR_5,
           VAR_6, VAR_7, VAR_9,
           FUNC_8(VAR_9));
 if (VAR_12 != VAR_1)
  FUNC_2(VAR_8);
 return VAR_12;
}
