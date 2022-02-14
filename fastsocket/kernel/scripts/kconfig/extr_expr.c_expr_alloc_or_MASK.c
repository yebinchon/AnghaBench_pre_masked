
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expr {int dummy; } ;


 int VAR_0 ;
 struct expr* FUNC_0 (int ,struct expr*,struct expr*) ;

struct expr *FUNC_1(struct expr *VAR_1, struct expr *VAR_2)
{
 if (!VAR_1)
  return VAR_2;
 return VAR_2 ? FUNC_0(VAR_0, VAR_1, VAR_2) : VAR_1;
}
