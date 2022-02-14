
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,int,scalar_t__) ;
 int FUNC_4 (scalar_t__,char*,int) ;

__attribute__((used)) static CORE_ADDR
FUNC_5 (CORE_ADDR VAR_1, CORE_ADDR *VAR_2)
{
  CORE_ADDR VAR_3;

  VAR_3 = FUNC_1 (VAR_1);

  if (VAR_3 == 0)
    {
      CORE_ADDR VAR_4;
      char VAR_5[16];

      VAR_3 = *VAR_2;
      *VAR_2 += 16;

      VAR_4 = FUNC_0 (VAR_1);

      if (VAR_4 == 0)
 VAR_4 = FUNC_2 (VAR_0);

      FUNC_3 (VAR_5, 8, VAR_1);
      FUNC_3 (VAR_5 + 8, 8, VAR_4);

      FUNC_4 (VAR_3, VAR_5, 16);
    }

  return VAR_3;
}
