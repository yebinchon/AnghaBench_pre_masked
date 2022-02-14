
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__,char*,int) ;

int
FUNC_4 (CORE_ADDR *VAR_5)
{
  CORE_ADDR VAR_6;
  char *VAR_7;

  VAR_7 = FUNC_0 (VAR_4 / VAR_3);
  VAR_6 = FUNC_2 (VAR_0);

  if (FUNC_3 (VAR_6 + VAR_2 * VAR_1, VAR_7,
     VAR_4 / VAR_3))
    return 0;

  *VAR_5 = FUNC_1 (VAR_7, VAR_4 / VAR_3);

  return 1;
}
