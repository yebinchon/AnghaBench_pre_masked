
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_state_afinfo {int owner; struct xfrm_mode** mode_map; } ;
struct xfrm_mode {size_t encap; struct xfrm_state_afinfo* afinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 struct xfrm_state_afinfo* FUNC_2 (int) ;
 int FUNC_3 (struct xfrm_state_afinfo*) ;

int FUNC_4(struct xfrm_mode *VAR_5, int VAR_6)
{
 struct xfrm_state_afinfo *VAR_7;
 struct xfrm_mode **VAR_8;
 int VAR_9;

 if (FUNC_1(VAR_5->encap >= VAR_4))
  return -VAR_2;

 VAR_7 = FUNC_2(VAR_6);
 if (FUNC_1(VAR_7 == ((void*)0)))
  return -VAR_0;

 VAR_9 = -VAR_1;
 VAR_8 = VAR_7->mode_map;
 if (VAR_8[VAR_5->encap])
  goto out;

 VAR_9 = -VAR_3;
 if (!FUNC_0(VAR_7->owner))
  goto out;

 VAR_5->afinfo = VAR_7;
 VAR_8[VAR_5->encap] = VAR_5;
 VAR_9 = 0;

out:
 FUNC_3(VAR_7);
 return VAR_9;
}
