
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_algo_auth {char* alg_name; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct xfrm_algo_auth* FUNC_0 (struct nlattr*) ;
 scalar_t__ FUNC_1 (struct nlattr*) ;
 scalar_t__ FUNC_2 (struct xfrm_algo_auth*) ;

__attribute__((used)) static int FUNC_3(struct nlattr **VAR_3)
{
 struct nlattr *VAR_4 = VAR_3[VAR_2];
 struct xfrm_algo_auth *VAR_5;

 if (!VAR_4)
  return 0;

 VAR_5 = FUNC_0(VAR_4);
 if (FUNC_1(VAR_4) < FUNC_2(VAR_5))
  return -VAR_1;

 VAR_5->alg_name[VAR_0 - 1] = '\0';
 return 0;
}
