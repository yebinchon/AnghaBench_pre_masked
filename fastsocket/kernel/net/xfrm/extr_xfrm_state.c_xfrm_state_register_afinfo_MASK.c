
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_state_afinfo {size_t family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct xfrm_state_afinfo** VAR_4 ;
 int VAR_5 ;

int FUNC_3(struct xfrm_state_afinfo *VAR_6)
{
 int VAR_7 = 0;
 if (FUNC_0(VAR_6 == ((void*)0)))
  return -VAR_1;
 if (FUNC_0(VAR_6->family >= VAR_3))
  return -VAR_0;
 FUNC_1(&VAR_5);
 if (FUNC_0(VAR_4[VAR_6->family] != ((void*)0)))
  VAR_7 = -VAR_2;
 else
  VAR_4[VAR_6->family] = VAR_6;
 FUNC_2(&VAR_5);
 return VAR_7;
}
