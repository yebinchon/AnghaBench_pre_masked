
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf_info {scalar_t__ export_sec; scalar_t__ export_unused_sec; scalar_t__ export_gpl_sec; scalar_t__ export_unused_gpl_sec; scalar_t__ export_gpl_future_sec; } ;
typedef enum export { ____Placeholder_export } export ;
typedef scalar_t__ Elf_Section ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static enum export FUNC_0(struct elf_info *VAR_6, Elf_Section VAR_7)
{
 if (VAR_7 == VAR_6->export_sec)
  return VAR_2;
 else if (VAR_7 == VAR_6->export_unused_sec)
  return VAR_4;
 else if (VAR_7 == VAR_6->export_gpl_sec)
  return VAR_0;
 else if (VAR_7 == VAR_6->export_unused_gpl_sec)
  return VAR_5;
 else if (VAR_7 == VAR_6->export_gpl_future_sec)
  return VAR_1;
 else
  return VAR_3;
}
