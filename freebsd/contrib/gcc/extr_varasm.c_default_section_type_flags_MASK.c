
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_2__ {char* unlikely_text_section_name; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 char* VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_1__* VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (char const*,char*,int) ;

unsigned int
FUNC_6 (tree VAR_11, const char *VAR_12, int VAR_13)
{
  unsigned int VAR_14;

  if (VAR_11 && FUNC_2 (VAR_11) == VAR_0)
    VAR_14 = VAR_2;
  else if (VAR_11 && FUNC_3 (VAR_11, VAR_13))
    VAR_14 = 0;
  else if (VAR_10
    && VAR_9
    && VAR_9->unlikely_text_section_name
    && FUNC_4 (VAR_12, VAR_9->unlikely_text_section_name) == 0)
    VAR_14 = VAR_2;
  else if (!VAR_11
    && (!VAR_10 || !VAR_9)
    && FUNC_4 (VAR_12, VAR_7) == 0)
    VAR_14 = VAR_2;
  else
    VAR_14 = VAR_6;

  if (VAR_11 && FUNC_0 (VAR_11))
    VAR_14 |= VAR_3;

  if (VAR_11 && FUNC_2 (VAR_11) == VAR_8 && FUNC_1 (VAR_11))
    VAR_14 |= VAR_5 | VAR_6;

  if (FUNC_4 (VAR_12, ".bss") == 0
      || FUNC_5 (VAR_12, ".bss.", 5) == 0
      || FUNC_5 (VAR_12, ".gnu.linkonce.b.", 16) == 0
      || FUNC_4 (VAR_12, ".sbss") == 0
      || FUNC_5 (VAR_12, ".sbss.", 6) == 0
      || FUNC_5 (VAR_12, ".gnu.linkonce.sb.", 17) == 0)
    VAR_14 |= VAR_1;

  if (FUNC_4 (VAR_12, ".tdata") == 0
      || FUNC_5 (VAR_12, ".tdata.", 7) == 0
      || FUNC_5 (VAR_12, ".gnu.linkonce.td.", 17) == 0)
    VAR_14 |= VAR_5;

  if (FUNC_4 (VAR_12, ".tbss") == 0
      || FUNC_5 (VAR_12, ".tbss.", 6) == 0
      || FUNC_5 (VAR_12, ".gnu.linkonce.tb.", 17) == 0)
    VAR_14 |= VAR_5 | VAR_1;






  if (!(VAR_14 & (VAR_2 | VAR_1 | VAR_5))
      && (FUNC_4 (VAR_12, ".init_array") == 0
   || FUNC_4 (VAR_12, ".fini_array") == 0
   || FUNC_4 (VAR_12, ".preinit_array") == 0))
    VAR_14 |= VAR_4;

  return VAR_14;
}
