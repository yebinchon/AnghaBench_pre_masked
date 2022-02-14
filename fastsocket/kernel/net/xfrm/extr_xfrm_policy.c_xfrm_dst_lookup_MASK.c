
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xfrm_address_t ;
struct TYPE_5__ {int daddr; } ;
struct TYPE_4__ {int saddr; } ;
struct xfrm_state {int * coaddr; TYPE_3__* type; TYPE_2__ id; TYPE_1__ props; } ;
struct net {int dummy; } ;
struct dst_entry {int dummy; } ;
struct TYPE_6__ {int flags; } ;


 int FUNC_0 (struct dst_entry*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct dst_entry* FUNC_1 (struct net*,int,int *,int *,int) ;
 int FUNC_2 (int *,int *,int) ;
 struct net* FUNC_3 (struct xfrm_state*) ;

__attribute__((used)) static inline struct dst_entry *FUNC_4(struct xfrm_state *VAR_2, int VAR_3,
      xfrm_address_t *VAR_4,
      xfrm_address_t *VAR_5,
      int VAR_6)
{
 struct net *VAR_7 = FUNC_3(VAR_2);
 xfrm_address_t *VAR_8 = &VAR_2->props.saddr;
 xfrm_address_t *VAR_9 = &VAR_2->id.daddr;
 struct dst_entry *VAR_10;

 if (VAR_2->type->flags & VAR_0) {
  VAR_8 = VAR_2->coaddr;
  VAR_9 = VAR_5;
 }
 if (VAR_2->type->flags & VAR_1) {
  VAR_8 = VAR_4;
  VAR_9 = VAR_2->coaddr;
 }

 VAR_10 = FUNC_1(VAR_7, VAR_3, VAR_8, VAR_9, VAR_6);

 if (!FUNC_0(VAR_10)) {
  if (VAR_4 != VAR_8)
   FUNC_2(VAR_4, VAR_8, sizeof(*VAR_4));
  if (VAR_5 != VAR_9)
   FUNC_2(VAR_5, VAR_9, sizeof(*VAR_5));
 }

 return VAR_10;
}
