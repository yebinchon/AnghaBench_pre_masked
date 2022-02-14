
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct xfrm_type {int owner; } ;
struct xfrm_state_afinfo {struct xfrm_type** type_map; } ;


 int FUNC_0 (char*,unsigned short,size_t) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct xfrm_state_afinfo* FUNC_3 (unsigned short) ;
 int FUNC_4 (struct xfrm_state_afinfo*) ;

__attribute__((used)) static const struct xfrm_type *FUNC_5(u8 VAR_0, unsigned short VAR_1)
{
 struct xfrm_state_afinfo *VAR_2;
 const struct xfrm_type **VAR_3;
 const struct xfrm_type *VAR_4;
 int VAR_5 = 0;

retry:
 VAR_2 = FUNC_3(VAR_1);
 if (FUNC_2(VAR_2 == ((void*)0)))
  return ((void*)0);
 VAR_3 = VAR_2->type_map;

 VAR_4 = VAR_3[VAR_0];
 if (FUNC_2(VAR_4 && !FUNC_1(VAR_4->owner)))
  VAR_4 = ((void*)0);
 if (!VAR_4 && !VAR_5) {
  FUNC_4(VAR_2);
  FUNC_0("xfrm-type-%d-%d", VAR_1, VAR_0);
  VAR_5 = 1;
  goto retry;
 }

 FUNC_4(VAR_2);
 return VAR_4;
}
