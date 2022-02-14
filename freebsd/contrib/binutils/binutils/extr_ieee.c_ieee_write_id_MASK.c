
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee_handle {int dummy; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct ieee_handle*,unsigned int) ;
 int FUNC_3 (struct ieee_handle*,char const) ;
 int VAR_4 ;
 unsigned int FUNC_4 (char const*) ;

__attribute__((used)) static bfd_boolean
FUNC_5 (struct ieee_handle *VAR_5, const char *VAR_6)
{
  unsigned int VAR_7;

  VAR_7 = FUNC_4 (VAR_6);
  if (VAR_7 <= 0x7f)
    {
      if (! FUNC_3 (VAR_5, VAR_7))
 return VAR_0;
    }
  else if (VAR_7 <= 0xff)
    {
      if (! FUNC_3 (VAR_5, (int) VAR_2)
   || ! FUNC_3 (VAR_5, VAR_7))
 return VAR_0;
    }
  else if (VAR_7 <= 0xffff)
    {
      if (! FUNC_3 (VAR_5, (int) VAR_3)
   || ! FUNC_2 (VAR_5, VAR_7))
 return VAR_0;
    }
  else
    {
      FUNC_1 (VAR_4, FUNC_0("IEEE string length overflow: %u\n"), VAR_7);
      return VAR_0;
    }

  for (; *VAR_6 != '\0'; VAR_6++)
    if (! FUNC_3 (VAR_5, *VAR_6))
      return VAR_0;

  return VAR_1;
}
