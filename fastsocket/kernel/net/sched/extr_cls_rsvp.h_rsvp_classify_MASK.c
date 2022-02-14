
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct tcf_result {scalar_t__ classid; } ;
struct tcf_proto {scalar_t__ root; } ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int mask; int offset; int key; } ;
struct rsvp_session {scalar_t__* dst; scalar_t__ protocol; scalar_t__ tunnelid; struct rsvp_filter** ht; TYPE_1__ dpi; struct rsvp_session* next; } ;
struct rsvp_head {struct rsvp_session** ht; } ;
struct TYPE_4__ {int mask; int offset; int key; } ;
struct rsvp_filter {scalar_t__* src; scalar_t__ tunnelhdr; struct tcf_result res; struct rsvp_filter* next; TYPE_2__ spi; } ;
struct ipv6hdr {int dummy; } ;
struct iphdr {scalar_t__ saddr; scalar_t__ daddr; scalar_t__ nexthdr; scalar_t__ protocol; int ihl; int frag_off; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 unsigned int FUNC_1 (scalar_t__*,scalar_t__,scalar_t__) ;
 unsigned int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (int) ;
 struct iphdr* FUNC_4 (struct sk_buff*) ;
 struct ipv6hdr* FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_3, struct tcf_proto *VAR_4,
    struct tcf_result *VAR_5)
{
 struct rsvp_session **VAR_6 = ((struct rsvp_head*)VAR_4->root)->ht;
 struct rsvp_session *VAR_7;
 struct rsvp_filter *VAR_8;
 unsigned VAR_9, VAR_10;
 __be32 *VAR_11, *VAR_12;
 u8 VAR_13;
 u8 VAR_14 = 0;
 u8 *VAR_15;



 struct iphdr *VAR_16 = FUNC_4(VAR_3);


restart:







 VAR_12 = &VAR_16->saddr;
 VAR_11 = &VAR_16->daddr;
 VAR_13 = VAR_16->protocol;
 VAR_15 = ((u8*)VAR_16) + (VAR_16->ihl<<2);
 if (VAR_16->frag_off & FUNC_3(VAR_0|VAR_1))
  return -1;


 VAR_9 = FUNC_1(VAR_11, VAR_13, VAR_14);
 VAR_10 = FUNC_2(VAR_12);

 for (VAR_7 = VAR_6[VAR_9]; VAR_7; VAR_7 = VAR_7->next) {
  if (VAR_11[VAR_2-1] == VAR_7->dst[VAR_2-1] &&
      VAR_13 == VAR_7->protocol &&
      !(VAR_7->dpi.mask & (*(u32*)(VAR_15+VAR_7->dpi.offset)^VAR_7->dpi.key))





      && VAR_14 == VAR_7->tunnelid) {

   for (VAR_8 = VAR_7->ht[VAR_10]; VAR_8; VAR_8 = VAR_8->next) {
    if (VAR_12[VAR_2-1] == VAR_8->src[VAR_2-1] &&
        !(VAR_8->spi.mask & (*(u32*)(VAR_15+VAR_8->spi.offset)^VAR_8->spi.key))





        ) {
     *VAR_5 = VAR_8->res;
     FUNC_0();

matched:
     if (VAR_8->tunnelhdr == 0)
      return 0;

     VAR_14 = VAR_8->res.classid;
     VAR_16 = (void*)(VAR_15 + VAR_8->tunnelhdr - sizeof(*VAR_16));
     goto restart;
    }
   }


   for (VAR_8 = VAR_7->ht[16]; VAR_8; VAR_8 = VAR_8->next) {
    *VAR_5 = VAR_8->res;
    FUNC_0();
    goto matched;
   }
   return -1;
  }
 }
 return -1;
}
