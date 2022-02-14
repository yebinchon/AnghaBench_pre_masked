
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct neigh_table {int lock; int id; int family; } ;
struct neigh_parms {int dummy; } ;
struct ndtmsg {scalar_t__ ndtm_pad2; scalar_t__ ndtm_pad1; int ndtm_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct neigh_parms*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (struct sk_buff*,struct nlmsghdr*) ;
 struct ndtmsg* FUNC_3 (struct nlmsghdr*) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_5 (struct sk_buff*,int ,int ,int,int,unsigned int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_2,
        struct neigh_table *VAR_3,
        struct neigh_parms *VAR_4,
        u32 VAR_5, u32 VAR_6, int VAR_7,
        unsigned int VAR_8)
{
 struct ndtmsg *VAR_9;
 struct nlmsghdr *VAR_10;

 VAR_10 = FUNC_5(VAR_2, VAR_5, VAR_6, VAR_7, sizeof(*VAR_9), VAR_8);
 if (VAR_10 == ((void*)0))
  return -VAR_0;

 VAR_9 = FUNC_3(VAR_10);

 FUNC_6(&VAR_3->lock);
 VAR_9->ndtm_family = VAR_3->family;
 VAR_9->ndtm_pad1 = 0;
 VAR_9->ndtm_pad2 = 0;

 if (FUNC_1(VAR_2, VAR_1, VAR_3->id) < 0 ||
     FUNC_0(VAR_2, VAR_4) < 0)
  goto errout;

 FUNC_7(&VAR_3->lock);
 return FUNC_4(VAR_2, VAR_10);
errout:
 FUNC_7(&VAR_3->lock);
 FUNC_2(VAR_2, VAR_10);
 return -VAR_0;
}
