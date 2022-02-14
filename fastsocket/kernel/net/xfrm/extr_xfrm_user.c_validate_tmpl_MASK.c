
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct xfrm_user_tmpl {int family; } ;




 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(int VAR_2, struct xfrm_user_tmpl *VAR_3, u16 VAR_4)
{
 int VAR_5;

 if (VAR_2 > VAR_1)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {







  if (!VAR_3[VAR_5].family)
   VAR_3[VAR_5].family = VAR_4;

  switch (VAR_3[VAR_5].family) {
  case 129:
   break;




  default:
   return -VAR_0;
  }
 }

 return 0;
}
