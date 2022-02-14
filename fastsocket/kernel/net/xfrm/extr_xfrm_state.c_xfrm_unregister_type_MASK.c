
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_type {size_t proto; } ;
struct xfrm_state_afinfo {struct xfrm_type** type_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct xfrm_state_afinfo* FUNC_1 (unsigned short) ;
 int FUNC_2 (struct xfrm_state_afinfo*) ;

int FUNC_3(const struct xfrm_type *VAR_2, unsigned short VAR_3)
{
 struct xfrm_state_afinfo *VAR_4 = FUNC_1(VAR_3);
 const struct xfrm_type **VAR_5;
 int VAR_6 = 0;

 if (FUNC_0(VAR_4 == ((void*)0)))
  return -VAR_0;
 VAR_5 = VAR_4->type_map;

 if (FUNC_0(VAR_5[VAR_2->proto] != VAR_2))
  VAR_6 = -VAR_1;
 else
  VAR_5[VAR_2->proto] = ((void*)0);
 FUNC_2(VAR_4);
 return VAR_6;
}
