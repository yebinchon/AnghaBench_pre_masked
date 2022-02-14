
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__,char*,int ) ;

__attribute__((used)) static int
FUNC_4 (CORE_ADDR *VAR_3)
{
  CORE_ADDR VAR_4;
  char *VAR_5;

  VAR_5 = FUNC_0 (VAR_1);

  VAR_4 = FUNC_2 (VAR_0);

  if (FUNC_3 (VAR_4 + VAR_2, VAR_5,
       VAR_1))
    return 0;

  *VAR_3 = FUNC_1 (VAR_5, VAR_1);

  return 1;
}
