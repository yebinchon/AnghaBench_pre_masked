
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtx_iv {int dummy; } ;
struct biv_entry {struct rtx_iv iv; } ;
typedef int rtx ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct biv_entry* FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static bool
FUNC_2 (rtx VAR_1, struct rtx_iv *VAR_2)
{
  struct biv_entry *VAR_3 = FUNC_1 (VAR_0, VAR_1, FUNC_0 (VAR_1));

  if (!VAR_3)
    return 0;

  *VAR_2 = VAR_3->iv;
  return 1;
}
