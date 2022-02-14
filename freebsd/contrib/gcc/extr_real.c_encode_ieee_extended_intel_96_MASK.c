
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct real_format {int dummy; } ;
typedef int REAL_VALUE_TYPE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct real_format const*,long*,int const*) ;

__attribute__((used)) static void
FUNC_1 (const struct real_format *VAR_1, long *VAR_2,
          const REAL_VALUE_TYPE *VAR_3)
{
  if (VAR_0)
    {



      long VAR_4[3];
      FUNC_0 (VAR_1, VAR_4, VAR_3);
      VAR_2[0] = ((VAR_4[2] << 16) | ((unsigned long)(VAR_4[1] & 0xFFFF0000) >> 16));
      VAR_2[1] = ((VAR_4[1] << 16) | ((unsigned long)(VAR_4[0] & 0xFFFF0000) >> 16));
      VAR_2[2] = (VAR_4[0] << 16);
    }
  else

    FUNC_0 (VAR_1, VAR_2, VAR_3);
}
