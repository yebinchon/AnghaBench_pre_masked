
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unicx {int dummy; } ;
struct uni_cref {scalar_t__ cref; int flag; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct unicx*,char*,char*,int ) ;
 int FUNC_1 (struct unicx*,char*,...) ;

__attribute__((used)) static void
FUNC_2(const struct uni_cref *VAR_2, struct unicx *VAR_3)
{
 FUNC_0(VAR_3, "cref", "%d.", VAR_2->flag);
 if (VAR_2->cref == VAR_1)
  FUNC_1(VAR_3, "GLOBAL");
 else if (VAR_2->cref == VAR_0)
  FUNC_1(VAR_3, "DUMMY");
 else
  FUNC_1(VAR_3, "%d", VAR_2->cref);
}
