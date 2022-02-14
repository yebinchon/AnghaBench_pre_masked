
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ohash {int dummy; } ;
struct expr {int type; int child; } ;





 int FUNC_0 () ;
 struct ohash* FUNC_1 (int ,struct ohash*) ;
 struct ohash* FUNC_2 (int ,struct ohash*) ;
 struct ohash* FUNC_3 (struct expr*,struct ohash*) ;

__attribute__((used)) static struct ohash *
FUNC_4(struct expr *VAR_0, struct ohash *VAR_1)
{
 switch (VAR_0->type) {
 case 128:
  return FUNC_3(VAR_0, VAR_1);
 case 129:
  return FUNC_2(VAR_0->child, VAR_1);
 case 130:
  return FUNC_1(VAR_0->child, VAR_1);
 default:
  FUNC_0();
 }
}
