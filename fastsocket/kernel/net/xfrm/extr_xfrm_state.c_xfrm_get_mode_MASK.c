
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_state_afinfo {struct xfrm_mode** mode_map; } ;
struct xfrm_mode {int owner; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*,int,unsigned int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 struct xfrm_state_afinfo* FUNC_3 (int) ;
 int FUNC_4 (struct xfrm_state_afinfo*) ;

__attribute__((used)) static struct xfrm_mode *FUNC_5(unsigned int VAR_1, int VAR_2)
{
 struct xfrm_state_afinfo *VAR_3;
 struct xfrm_mode *VAR_4;
 int VAR_5 = 0;

 if (FUNC_2(VAR_1 >= VAR_0))
  return ((void*)0);

retry:
 VAR_3 = FUNC_3(VAR_2);
 if (FUNC_2(VAR_3 == ((void*)0)))
  return ((void*)0);

 VAR_4 = VAR_3->mode_map[VAR_1];
 if (FUNC_2(VAR_4 && !FUNC_1(VAR_4->owner)))
  VAR_4 = ((void*)0);
 if (!VAR_4 && !VAR_5) {
  FUNC_4(VAR_3);
  FUNC_0("xfrm-mode-%d-%d", VAR_2, VAR_1);
  VAR_5 = 1;
  goto retry;
 }

 FUNC_4(VAR_3);
 return VAR_4;
}
