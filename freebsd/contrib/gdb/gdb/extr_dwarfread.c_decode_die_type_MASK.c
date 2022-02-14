
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct dieinfo {scalar_t__ at_fund_type; scalar_t__ at_mod_u_d_type; scalar_t__ at_user_def_type; int * at_mod_fund_type; } ;


 int VAR_0 ;
 struct type* FUNC_0 (scalar_t__,int *) ;
 int VAR_1 ;
 struct type* FUNC_1 (scalar_t__) ;
 struct type* FUNC_2 (int *) ;
 struct type* FUNC_3 (scalar_t__) ;
 struct type* FUNC_4 (int ,int ) ;
 struct type* FUNC_5 (scalar_t__) ;

__attribute__((used)) static struct type *
FUNC_6 (struct dieinfo *VAR_2)
{
  struct type *VAR_3 = ((void*)0);

  if (VAR_2->at_fund_type != 0)
    {
      VAR_3 = FUNC_1 (VAR_2->at_fund_type);
    }
  else if (VAR_2->at_mod_fund_type != ((void*)0))
    {
      VAR_3 = FUNC_2 (VAR_2->at_mod_fund_type);
    }
  else if (VAR_2->at_user_def_type)
    {
      VAR_3 = FUNC_5 (VAR_2->at_user_def_type);
      if (VAR_3 == ((void*)0))
 {
   VAR_3 = FUNC_0 (VAR_2->at_user_def_type, ((void*)0));
 }
    }
  else if (VAR_2->at_mod_u_d_type)
    {
      VAR_3 = FUNC_3 (VAR_2->at_mod_u_d_type);
    }
  else
    {
      VAR_3 = FUNC_4 (VAR_1, VAR_0);
    }
  return (VAR_3);
}
