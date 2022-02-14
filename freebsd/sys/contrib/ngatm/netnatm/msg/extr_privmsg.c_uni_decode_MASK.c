
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unicx {scalar_t__ errcnt; } ;
struct uni_msg {int dummy; } ;
struct uni_all {int dummy; } ;


 scalar_t__ FUNC_0 (struct uni_msg*,struct uni_all*,struct unicx*) ;
 scalar_t__ FUNC_1 (struct uni_msg*,struct uni_all*,struct unicx*) ;

int
FUNC_2(struct uni_msg *VAR_0, struct uni_all *VAR_1, struct unicx *VAR_2)
{
 VAR_2->errcnt = 0;
 if (FUNC_1(VAR_0, VAR_1, VAR_2))
  return (-1);
 if (FUNC_0(VAR_0, VAR_1, VAR_2))
  return (-2);
 return (0);
}
