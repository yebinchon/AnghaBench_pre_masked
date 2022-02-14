
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_state_afinfo {struct xfrm_mode** mode_map; } ;
struct xfrm_mode {size_t encap; TYPE_1__* afinfo; } ;
struct TYPE_2__ {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 struct xfrm_state_afinfo* FUNC_3 (int) ;
 int FUNC_4 (struct xfrm_state_afinfo*) ;

int FUNC_5(struct xfrm_mode *VAR_4, int VAR_5)
{
 struct xfrm_state_afinfo *VAR_6;
 struct xfrm_mode **VAR_7;
 int VAR_8;

 if (FUNC_2(VAR_4->encap >= VAR_3))
  return -VAR_1;

 VAR_6 = FUNC_3(VAR_5);
 if (FUNC_2(VAR_6 == ((void*)0)))
  return -VAR_0;

 VAR_8 = -VAR_2;
 VAR_7 = VAR_6->mode_map;
 if (FUNC_0(VAR_7[VAR_4->encap] == VAR_4)) {
  VAR_7[VAR_4->encap] = ((void*)0);
  FUNC_1(VAR_4->afinfo->owner);
  VAR_8 = 0;
 }

 FUNC_4(VAR_6);
 return VAR_8;
}
