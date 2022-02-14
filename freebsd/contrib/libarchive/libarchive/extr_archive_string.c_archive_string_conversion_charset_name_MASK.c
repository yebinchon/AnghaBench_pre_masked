
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string_conv {int flag; char const* to_charset; char const* from_charset; } ;


 int VAR_0 ;

const char *
FUNC_0(struct archive_string_conv *VAR_1)
{
 if (VAR_1->flag & VAR_0)
  return (VAR_1->to_charset);
 else
  return (VAR_1->from_charset);
}
