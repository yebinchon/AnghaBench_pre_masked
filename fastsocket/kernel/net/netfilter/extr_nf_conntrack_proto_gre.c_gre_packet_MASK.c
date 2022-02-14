
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int timeout; int stream_timeout; } ;
struct TYPE_4__ {TYPE_1__ gre; } ;
struct nf_conn {int status; TYPE_2__ proto; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct nf_conn*) ;
 int FUNC_1 (struct nf_conn*,int,struct sk_buff const*,int ) ;
 int FUNC_2 (int ,int*) ;

__attribute__((used)) static int FUNC_3(struct nf_conn *VAR_4,
        const struct sk_buff *VAR_5,
        unsigned int VAR_6,
        enum ip_conntrack_info VAR_7,
        u_int8_t VAR_8,
        unsigned int VAR_9)
{


 if (VAR_4->status & VAR_2) {
  FUNC_1(VAR_4, VAR_7, VAR_5,
       VAR_4->proto.gre.stream_timeout);

  FUNC_2(VAR_1, &VAR_4->status);
  FUNC_0(VAR_0, VAR_4);
 } else
  FUNC_1(VAR_4, VAR_7, VAR_5,
       VAR_4->proto.gre.timeout);

 return VAR_3;
}
