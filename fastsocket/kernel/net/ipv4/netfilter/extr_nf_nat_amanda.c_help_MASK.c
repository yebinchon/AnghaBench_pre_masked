
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_int16_t ;
struct sk_buff {int dummy; } ;
struct TYPE_9__ {int port; } ;
struct TYPE_10__ {TYPE_3__ tcp; } ;
struct TYPE_11__ {TYPE_4__ u; } ;
struct TYPE_12__ {TYPE_5__ dst; } ;
struct TYPE_7__ {int port; } ;
struct TYPE_8__ {TYPE_1__ tcp; } ;
struct nf_conntrack_expect {int master; TYPE_6__ tuple; TYPE_2__ saved_proto; int expectfn; int dir; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct nf_conntrack_expect*) ;
 int FUNC_2 (struct nf_conntrack_expect*) ;
 int VAR_3 ;
 unsigned int FUNC_3 (struct sk_buff*,int ,int,unsigned int,unsigned int,char*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,char*,scalar_t__) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static unsigned int FUNC_7(struct sk_buff *VAR_4,
    enum ip_conntrack_info VAR_5,
    unsigned int VAR_6,
    unsigned int VAR_7,
    struct nf_conntrack_expect *VAR_8)
{
 char VAR_9[sizeof("65535")];
 u_int16_t VAR_10;
 unsigned int VAR_11;


 VAR_8->saved_proto.tcp.port = VAR_8->tuple.dst.u.tcp.port;
 VAR_8->dir = VAR_0;



 VAR_8->expectfn = VAR_3;


 for (VAR_10 = FUNC_4(VAR_8->saved_proto.tcp.port); VAR_10 != 0; VAR_10++) {
  VAR_8->tuple.dst.u.tcp.port = FUNC_0(VAR_10);
  if (FUNC_1(VAR_8) == 0)
   break;
 }

 if (VAR_10 == 0)
  return VAR_2;

 FUNC_5(VAR_9, "%u", VAR_10);
 VAR_11 = FUNC_3(VAR_4, VAR_8->master, VAR_5,
           VAR_6, VAR_7,
           VAR_9, FUNC_6(VAR_9));
 if (VAR_11 != VAR_1)
  FUNC_2(VAR_8);
 return VAR_11;
}
