
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfrm_address_t ;
struct xfrm_tmpl {int dummy; } ;
struct xfrm_state_afinfo {int (* init_tempsel ) (struct xfrm_state*,struct flowi*,struct xfrm_tmpl*,int *,int *) ;} ;
struct xfrm_state {int dummy; } ;
struct flowi {int dummy; } ;


 int FUNC_0 (struct xfrm_state*,struct flowi*,struct xfrm_tmpl*,int *,int *) ;
 struct xfrm_state_afinfo* FUNC_1 (unsigned short) ;
 int FUNC_2 (struct xfrm_state_afinfo*) ;

__attribute__((used)) static int
FUNC_3(struct xfrm_state *VAR_0, struct flowi *VAR_1,
    struct xfrm_tmpl *VAR_2,
    xfrm_address_t *VAR_3, xfrm_address_t *VAR_4,
    unsigned short VAR_5)
{
 struct xfrm_state_afinfo *VAR_6 = FUNC_1(VAR_5);
 if (!VAR_6)
  return -1;
 VAR_6->init_tempsel(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_2(VAR_6);
 return 0;
}
