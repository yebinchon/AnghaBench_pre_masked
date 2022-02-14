
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse {int dummy; } ;
struct branchc {scalar_t__ nbranch; int back; int fwd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct parse *VAR_1, struct branchc *VAR_2)
{


 if (VAR_2->nbranch > 0) {
  FUNC_0(VAR_2->fwd);
  FUNC_1(VAR_0, VAR_2->back);
 }
}
