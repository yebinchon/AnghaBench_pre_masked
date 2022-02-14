
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfrm_address_t ;
struct nlattr {int dummy; } ;
typedef enum xfrm_attr_type_t { ____Placeholder_xfrm_attr_type_t } xfrm_attr_type_t ;


 int * FUNC_0 (struct nlattr*) ;

__attribute__((used)) static void FUNC_1(struct nlattr **VAR_0, enum xfrm_attr_type_t VAR_1,
      xfrm_address_t **VAR_2)
{
 struct nlattr *VAR_3 = VAR_0[VAR_1];

 if (VAR_3 && VAR_2)
  *VAR_2 = FUNC_0(VAR_3);
}
