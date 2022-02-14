
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct xfrm_selector {int dummy; } ;
struct TYPE_2__ {int m; int v; } ;
struct xfrm_policy {scalar_t__ type; int security; TYPE_1__ mark; int family; struct xfrm_selector selector; } ;
struct flowi {int mark; int secid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct xfrm_selector*,struct flowi*,int ) ;

__attribute__((used)) static int FUNC_2(struct xfrm_policy *VAR_1, struct flowi *VAR_2,
        u8 VAR_3, u16 VAR_4, int VAR_5)
{
 struct xfrm_selector *VAR_6 = &VAR_1->selector;
 int VAR_7, VAR_8 = -VAR_0;

 if (VAR_1->family != VAR_4 ||
     (VAR_2->mark & VAR_1->mark.m) != VAR_1->mark.v ||
     VAR_1->type != VAR_3)
  return VAR_8;

 VAR_7 = FUNC_1(VAR_6, VAR_2, VAR_4);
 if (VAR_7)
  VAR_8 = FUNC_0(VAR_1->security, VAR_2->secid,
        VAR_5);

 return VAR_8;
}
