
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int dump_info_p ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*) ;

__attribute__((used)) static void
FUNC_3 (dump_info_p VAR_0, tree VAR_1)
{
  if (FUNC_1(VAR_1))
    FUNC_2 (VAR_0, "accs", "prot");
  else if (FUNC_0(VAR_1))
    FUNC_2 (VAR_0, "accs", "priv");
  else
    FUNC_2 (VAR_0, "accs", "pub");
}
