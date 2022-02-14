
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int8_t ;
struct sk_buff {scalar_t__ mac_header; scalar_t__ network_header; TYPE_4__* dev; TYPE_3__* nf_bridge; } ;
struct TYPE_5__ {int level; } ;
struct TYPE_6__ {TYPE_1__ log; } ;
struct nf_loginfo {TYPE_2__ u; } ;
struct net_device {char* name; } ;
struct TYPE_8__ {int hard_header_len; } ;
struct TYPE_7__ {struct net_device* physoutdev; struct net_device* physindev; } ;


 struct nf_loginfo VAR_0 ;
 int FUNC_0 (struct nf_loginfo const*,struct sk_buff const*,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;
 unsigned char* FUNC_2 (struct sk_buff const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(u_int8_t VAR_2,
        unsigned int VAR_3,
        const struct sk_buff *VAR_4,
        const struct net_device *VAR_5,
        const struct net_device *VAR_6,
        const struct nf_loginfo *VAR_7,
        const char *VAR_8)
{
 if (!VAR_7)
  VAR_7 = &VAR_0;

 FUNC_3(&VAR_1);
 FUNC_1("<%d>%sIN=%s OUT=%s ", VAR_7->u.log.level,
        VAR_8,
        VAR_5 ? VAR_5->name : "",
        VAR_6 ? VAR_6->name : "");
 if (VAR_5 && !VAR_6) {

  FUNC_1("MAC=");
  if (VAR_4->dev && VAR_4->dev->hard_header_len
      && VAR_4->mac_header != VAR_4->network_header) {
   int VAR_9;
   const unsigned char *VAR_10 = FUNC_2(VAR_4);
   for (VAR_9 = 0; VAR_9 < VAR_4->dev->hard_header_len; VAR_9++,VAR_10++)
    FUNC_1("%02x%c", *VAR_10,
           VAR_9==VAR_4->dev->hard_header_len - 1
           ? ' ':':');
  } else
   FUNC_1(" ");
 }

 FUNC_0(VAR_7, VAR_4, 0);
 FUNC_1("\n");
 FUNC_4(&VAR_1);
}
