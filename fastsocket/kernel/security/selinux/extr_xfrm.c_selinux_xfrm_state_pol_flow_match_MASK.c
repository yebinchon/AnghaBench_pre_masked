
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct xfrm_state {TYPE_1__* security; } ;
struct xfrm_policy {int security; } ;
struct flowi {scalar_t__ secid; } ;
struct TYPE_2__ {scalar_t__ ctx_sid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,int ,int ,int *) ;
 int FUNC_1 (struct xfrm_state*) ;

int FUNC_2(struct xfrm_state *VAR_2, struct xfrm_policy *VAR_3,
   struct flowi *VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 if (!VAR_3->security)
  if (VAR_2->security)

   return 0;
  else

   return 1;
 else
  if (!VAR_2->security)

   return 0;
  else
   if (!FUNC_1(VAR_2))

    return 0;

 VAR_5 = VAR_2->security->ctx_sid;

 if (VAR_4->secid != VAR_5)
  return 0;

 VAR_6 = FUNC_0(VAR_4->secid, VAR_5, VAR_1,
     VAR_0,
     ((void*)0))? 0:1;
 return VAR_6;
}
