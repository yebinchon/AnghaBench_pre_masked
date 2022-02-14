
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct loop {int dummy; } ;
struct iv_use {int stmt; } ;
struct iv_cand {int dummy; } ;


 int FUNC_0 (struct loop*,struct iv_use*,struct iv_cand*,int ) ;

__attribute__((used)) static tree
FUNC_1 (struct loop *VAR_0, struct iv_use *VAR_1, struct iv_cand *VAR_2)
{
  return FUNC_0 (VAR_0, VAR_1, VAR_2, VAR_1->stmt);
}
