
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct unicx {int dummy; } ;
struct uni_print_tbl {scalar_t__ name; scalar_t__ val; } ;


 int FUNC_0 (char const*,struct unicx*) ;
 int FUNC_1 (struct unicx*,char*,scalar_t__) ;

void
FUNC_2(const char *VAR_0, u_int VAR_1, const struct uni_print_tbl *VAR_2,
    struct unicx *VAR_3)
{
 if (VAR_0)
  FUNC_0(VAR_0, VAR_3);
 while (VAR_2->name) {
  if (VAR_2->val == VAR_1) {
   FUNC_1(VAR_3, "%s", VAR_2->name);
   return;
  }
  VAR_2++;
 }
 FUNC_1(VAR_3, "ERROR(0x%x)", VAR_1);
}
