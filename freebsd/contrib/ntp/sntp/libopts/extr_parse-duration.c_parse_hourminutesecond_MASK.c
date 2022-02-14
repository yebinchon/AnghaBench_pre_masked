
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef char cch_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,char*,int) ;
 scalar_t__ FUNC_1 (scalar_t__,char**,char*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static time_t
FUNC_3 (cch_t * VAR_6)
{
  time_t VAR_7 = 0;
  char VAR_8[4];
  cch_t * VAR_9;

  if (FUNC_2 (VAR_6) != 6)
    {
      VAR_5 = VAR_1;
      return VAR_0;
    }

  FUNC_0 (VAR_8, VAR_6, 2);
  VAR_8[2] = VAR_2;
  VAR_9 = VAR_8;
  VAR_7 = FUNC_1 (0, &VAR_9, VAR_8 + 2, VAR_3);

  FUNC_0 (VAR_8, VAR_6 + 2, 2);
  VAR_8[2] = VAR_2;
  VAR_9 = VAR_8;
  VAR_7 = FUNC_1 (VAR_7, &VAR_9, VAR_8 + 2, VAR_4);

  FUNC_0 (VAR_8, VAR_6 + 4, 2);
  VAR_8[2] = VAR_2;
  VAR_9 = VAR_8;
  return FUNC_1 (VAR_7, &VAR_9, VAR_8 + 2, 1);
}
