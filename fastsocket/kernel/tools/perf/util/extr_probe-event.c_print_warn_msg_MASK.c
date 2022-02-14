
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char const*,char const*) ;
 char const* FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(const char *VAR_2, bool VAR_3)
{

 if (VAR_1 == VAR_0) {
  const char *VAR_4;

  if (!VAR_3)
   VAR_4 = "CONFIG_UPROBE_EVENTS";
  else
   VAR_4 = "CONFIG_KPROBE_EVENTS";

  FUNC_0("%s file does not exist - please rebuild kernel"
    " with %s.\n", VAR_2, VAR_4);
 } else
  FUNC_0("Failed to open %s file: %s\n", VAR_2,
    FUNC_1(VAR_1));
}
