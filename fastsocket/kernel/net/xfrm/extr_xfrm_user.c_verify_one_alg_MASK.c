
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_algo {char* alg_name; } ;
struct nlattr {int dummy; } ;
typedef enum xfrm_attr_type_t { ____Placeholder_xfrm_attr_type_t } xfrm_attr_type_t ;


 int VAR_0 ;
 int VAR_1 ;



 struct xfrm_algo* FUNC_0 (struct nlattr*) ;
 scalar_t__ FUNC_1 (struct nlattr*) ;
 scalar_t__ FUNC_2 (struct xfrm_algo*) ;

__attribute__((used)) static int FUNC_3(struct nlattr **VAR_2, enum xfrm_attr_type_t VAR_3)
{
 struct nlattr *VAR_4 = VAR_2[VAR_3];
 struct xfrm_algo *VAR_5;

 if (!VAR_4)
  return 0;

 VAR_5 = FUNC_0(VAR_4);
 if (FUNC_1(VAR_4) < FUNC_2(VAR_5))
  return -VAR_1;

 switch (VAR_3) {
 case 130:
 case 128:
 case 129:
  break;

 default:
  return -VAR_1;
 }

 VAR_5->alg_name[VAR_0 - 1] = '\0';
 return 0;
}
