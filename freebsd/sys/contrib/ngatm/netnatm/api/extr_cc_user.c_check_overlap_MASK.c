
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uni_sap {int dummy; } ;
struct ccuser {scalar_t__ state; int sap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct uni_sap*) ;

__attribute__((used)) static int
FUNC_1(struct ccuser *VAR_2, struct uni_sap *VAR_3)
{
 return ((VAR_2->state == VAR_0 ||
     VAR_2->state == VAR_1) &&
     FUNC_0(VAR_2->sap, VAR_3));
}
