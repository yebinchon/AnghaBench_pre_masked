
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct xfrm_state {int dummy; } ;
struct xfrm_policy {int genid; int selector; } ;
struct xfrm_dst {int num_xfrms; int num_pols; int policy_genid; int pols; } ;
struct net {int dummy; } ;
struct flowi {int dummy; } ;
struct dst_entry {int dummy; } ;


 int VAR_0 ;
 struct xfrm_dst* FUNC_0 (struct dst_entry*) ;
 struct xfrm_dst* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct dst_entry*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct net*,int ) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct dst_entry*) ;
 int FUNC_6 (int ,struct xfrm_policy**,int) ;
 scalar_t__ FUNC_7 (int) ;
 struct dst_entry* FUNC_8 (struct xfrm_policy*,struct xfrm_state**,int,struct flowi*,struct dst_entry*) ;
 int FUNC_9 (struct dst_entry*,struct flowi*) ;
 int FUNC_10 (struct dst_entry*,int *) ;
 int FUNC_11 (struct xfrm_policy**,int,struct flowi*,struct xfrm_state**,int ) ;
 struct net* FUNC_12 (struct xfrm_policy*) ;

__attribute__((used)) static struct xfrm_dst *
FUNC_13(struct xfrm_policy **VAR_5, int VAR_6,
          struct flowi *VAR_7, u16 VAR_8,
          struct dst_entry *VAR_9)
{
 struct net *VAR_10 = FUNC_12(VAR_5[0]);
 struct xfrm_state *VAR_11[VAR_4];
 struct dst_entry *VAR_12;
 struct xfrm_dst *VAR_13;
 int VAR_14;


 VAR_14 = FUNC_11(VAR_5, VAR_6, VAR_7, VAR_11, VAR_8);
 if (VAR_14 <= 0) {
  if (VAR_14 != 0 && VAR_14 != -VAR_0)
   FUNC_3(VAR_10, VAR_3);
  return FUNC_1(VAR_14);
 }

 VAR_12 = FUNC_8(VAR_5[0], VAR_11, VAR_14, VAR_7, VAR_9);
 if (FUNC_2(VAR_12)) {
  FUNC_3(VAR_10, VAR_2);
  return FUNC_0(VAR_12);
 }

 VAR_13 = (struct xfrm_dst *)VAR_12;
 VAR_13->num_xfrms = VAR_14;
 if (VAR_6 > 1)
  VAR_14 = FUNC_10(VAR_12, &VAR_5[1]->selector);
 else
  VAR_14 = FUNC_9(VAR_12, VAR_7);
 if (FUNC_7(VAR_14)) {
  FUNC_5(VAR_12);
  FUNC_3(VAR_10, VAR_1);
  return FUNC_1(VAR_14);
 }

 VAR_13->num_pols = VAR_6;
 FUNC_6(VAR_13->pols, VAR_5, sizeof(struct xfrm_policy*) * VAR_6);
 VAR_13->policy_genid = FUNC_4(&VAR_5[0]->genid);

 return VAR_13;
}
