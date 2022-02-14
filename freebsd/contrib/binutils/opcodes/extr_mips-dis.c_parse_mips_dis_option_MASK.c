
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_arch_choice {int hwr_names; int cp0sel_names_len; int cp0sel_names; int cp0_names; } ;
struct mips_abi_choice {int fpr_names; int gpr_names; } ;


 scalar_t__ FUNC_0 (char const*,char*) ;
 struct mips_abi_choice* FUNC_1 (char const*,unsigned int) ;
 struct mips_arch_choice* FUNC_2 (char const*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (char*,char const*) ;
 unsigned int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char const*,unsigned int) ;

__attribute__((used)) static void
FUNC_6 (const char *VAR_8, unsigned int VAR_9)
{
  unsigned int VAR_10, VAR_11, VAR_12;
  const char *VAR_13;
  const struct mips_abi_choice *VAR_14;
  const struct mips_arch_choice *VAR_15;

  if (FUNC_3 ("octeon-useun", VAR_8) == 0)
    {
      VAR_7 = 1;
      return;
    }
  if (FUNC_3 ("no-octeon-useun", VAR_8) == 0)
    {
      VAR_7 = 0;
      return;
    }


  if (FUNC_0 (VAR_8, "no-aliases"))
    {
      VAR_6 = 1;
      return;
    }


  for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
    if (VAR_8[VAR_10] == '=')
      break;

  if (VAR_10 == 0)
    return;
  if (VAR_10 == VAR_9)
    return;
  if (VAR_10 == (VAR_9 - 1))
    return;

  VAR_11 = VAR_10;
  VAR_13 = VAR_8 + (VAR_11 + 1);
  VAR_12 = VAR_9 - (VAR_11 + 1);

  if (FUNC_5 ("gpr-names", VAR_8, VAR_11) == 0
      && FUNC_4 ("gpr-names") == VAR_11)
    {
      VAR_14 = FUNC_1 (VAR_13, VAR_12);
      if (VAR_14 != ((void*)0))
 VAR_4 = VAR_14->gpr_names;
      return;
    }

  if (FUNC_5 ("fpr-names", VAR_8, VAR_11) == 0
      && FUNC_4 ("fpr-names") == VAR_11)
    {
      VAR_14 = FUNC_1 (VAR_13, VAR_12);
      if (VAR_14 != ((void*)0))
 VAR_3 = VAR_14->fpr_names;
      return;
    }

  if (FUNC_5 ("cp0-names", VAR_8, VAR_11) == 0
      && FUNC_4 ("cp0-names") == VAR_11)
    {
      VAR_15 = FUNC_2 (VAR_13, VAR_12);
      if (VAR_15 != ((void*)0))
 {
   VAR_0 = VAR_15->cp0_names;
   VAR_1 = VAR_15->cp0sel_names;
   VAR_2 = VAR_15->cp0sel_names_len;
 }
      return;
    }

  if (FUNC_5 ("hwr-names", VAR_8, VAR_11) == 0
      && FUNC_4 ("hwr-names") == VAR_11)
    {
      VAR_15 = FUNC_2 (VAR_13, VAR_12);
      if (VAR_15 != ((void*)0))
 VAR_5 = VAR_15->hwr_names;
      return;
    }

  if (FUNC_5 ("reg-names", VAR_8, VAR_11) == 0
      && FUNC_4 ("reg-names") == VAR_11)
    {




      VAR_14 = FUNC_1 (VAR_13, VAR_12);
      if (VAR_14 != ((void*)0))
 {
   VAR_4 = VAR_14->gpr_names;
   VAR_3 = VAR_14->fpr_names;
 }
      VAR_15 = FUNC_2 (VAR_13, VAR_12);
      if (VAR_15 != ((void*)0))
 {
   VAR_0 = VAR_15->cp0_names;
   VAR_1 = VAR_15->cp0sel_names;
   VAR_2 = VAR_15->cp0sel_names_len;
   VAR_5 = VAR_15->hwr_names;
 }
      return;
    }


}
