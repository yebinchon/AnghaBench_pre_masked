
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse {int dummy; } ;
struct branchc {scalar_t__ outer; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct parse*,struct branchc*) ;
 int FUNC_2 (struct parse*,struct branchc*) ;
 int FUNC_3 (struct parse*,struct branchc*) ;

__attribute__((used)) static bool
FUNC_4(struct parse *VAR_0, struct branchc *VAR_1)
{
 int VAR_2 = 0;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 == 0)
  return (0);
 else if ((VAR_2 > 1 || (VAR_1->outer && !FUNC_0())) && !FUNC_2(VAR_0, VAR_1))





  return (0);
 FUNC_3(VAR_0, VAR_1);

 return (1);
}
