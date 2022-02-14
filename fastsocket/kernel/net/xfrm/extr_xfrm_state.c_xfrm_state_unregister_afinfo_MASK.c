
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_state_afinfo {size_t family; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct xfrm_state_afinfo** VAR_3 ;
 int VAR_4 ;

int FUNC_4(struct xfrm_state_afinfo *VAR_5)
{
 int VAR_6 = 0;
 if (FUNC_1(VAR_5 == ((void*)0)))
  return -VAR_1;
 if (FUNC_1(VAR_5->family >= VAR_2))
  return -VAR_0;
 FUNC_2(&VAR_4);
 if (FUNC_0(VAR_3[VAR_5->family] != ((void*)0))) {
  if (FUNC_1(VAR_3[VAR_5->family] != VAR_5))
   VAR_6 = -VAR_1;
  else
   VAR_3[VAR_5->family] = ((void*)0);
 }
 FUNC_3(&VAR_4);
 return VAR_6;
}
