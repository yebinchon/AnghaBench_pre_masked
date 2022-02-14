
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct real_format {int dummy; } ;
typedef int REAL_VALUE_TYPE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct real_format const*,int *,long const*) ;

__attribute__((used)) static void
FUNC_1 (const struct real_format *VAR_1, REAL_VALUE_TYPE *VAR_2,
          const long *VAR_3)
{
  if (VAR_0)
    {



      long VAR_4[3];

      VAR_4[0] = (((unsigned long)VAR_3[2] >> 16) | (VAR_3[1] << 16));
      VAR_4[1] = (((unsigned long)VAR_3[1] >> 16) | (VAR_3[0] << 16));
      VAR_4[2] = ((unsigned long)VAR_3[0] >> 16);

      FUNC_0 (VAR_1, VAR_2, VAR_4);
    }
  else

    FUNC_0 (VAR_1, VAR_2, VAR_3);
}
