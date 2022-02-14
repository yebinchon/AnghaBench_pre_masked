
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int8_t ;
struct sk_buff {scalar_t__ mac_header; scalar_t__ network_header; unsigned char const* head; TYPE_3__* dev; } ;
struct TYPE_4__ {int level; } ;
struct TYPE_5__ {TYPE_1__ log; } ;
struct nf_loginfo {TYPE_2__ u; } ;
struct net_device {char* name; } ;
struct iphdr {int daddr; int saddr; } ;
struct TYPE_6__ {unsigned int hard_header_len; scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct nf_loginfo VAR_2 ;
 int FUNC_0 (struct nf_loginfo const*,struct sk_buff const*,int ,int) ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 unsigned char* FUNC_2 (struct sk_buff const*) ;
 int FUNC_3 (struct sk_buff const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(u_int8_t VAR_4,
  unsigned int VAR_5,
  const struct sk_buff *VAR_6,
  const struct net_device *VAR_7,
  const struct net_device *VAR_8,
  const struct nf_loginfo *VAR_9,
  const char *VAR_10)
{
 if (!VAR_9)
  VAR_9 = &VAR_2;

 FUNC_4(&VAR_3);
 FUNC_1("<%d>%sIN=%s OUT=%s ", VAR_9->u.log.level,
  VAR_10,
  VAR_7 ? VAR_7->name : "",
  VAR_8 ? VAR_8->name : "");
 if (VAR_7 && !VAR_8) {
  unsigned int VAR_11;

  FUNC_1("MAC=");
  if (VAR_6->dev && (VAR_11 = VAR_6->dev->hard_header_len) &&
      VAR_6->mac_header != VAR_6->network_header) {
   const unsigned char *VAR_12 = FUNC_2(VAR_6);
   int VAR_13;

   if (VAR_6->dev->type == VAR_0 &&
       (VAR_12 -= VAR_1) < VAR_6->head)
    VAR_12 = ((void*)0);

   if (VAR_12 != ((void*)0)) {
    for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++)
     FUNC_1("%02x%s", VAR_12[VAR_13],
            VAR_13 == VAR_11 - 1 ? "" : ":");
   }
   FUNC_1(" ");

   if (VAR_6->dev->type == VAR_0) {
    const struct iphdr *VAR_14 =
     (struct iphdr *)FUNC_2(VAR_6);
    FUNC_1("TUNNEL=%pI4->%pI4 ",
           &VAR_14->saddr, &VAR_14->daddr);
   }
  } else
   FUNC_1(" ");
 }

 FUNC_0(VAR_9, VAR_6, FUNC_3(VAR_6), 1);
 FUNC_1("\n");
 FUNC_5(&VAR_3);
}
