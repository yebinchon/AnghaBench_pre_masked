
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_state_afinfo {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 struct xfrm_state_afinfo** VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct xfrm_state_afinfo *FUNC_3(unsigned int VAR_3)
{
 struct xfrm_state_afinfo *VAR_4;
 if (FUNC_2(VAR_3 >= VAR_0))
  return ((void*)0);
 FUNC_0(&VAR_2);
 VAR_4 = VAR_1[VAR_3];
 if (FUNC_2(!VAR_4))
  FUNC_1(&VAR_2);
 return VAR_4;
}
