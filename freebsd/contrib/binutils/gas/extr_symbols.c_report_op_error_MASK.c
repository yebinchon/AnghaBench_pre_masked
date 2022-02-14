
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbolS ;
typedef scalar_t__ segT ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int ,...) ;
 int FUNC_4 (char*,unsigned int,int ,int ,...) ;
 scalar_t__ FUNC_5 (int *,char**,unsigned int*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_6 (symbolS *VAR_1, symbolS *VAR_2, symbolS *VAR_3)
{
  char *VAR_4;
  unsigned int VAR_5;
  segT VAR_6 = FUNC_1 (VAR_2);
  segT VAR_7 = VAR_3 ? FUNC_1 (VAR_3) : 0;

  if (FUNC_5 (VAR_1, &VAR_4, &VAR_5))
    {
      if (VAR_6 == VAR_0)
 FUNC_4 (VAR_4, VAR_5,
        FUNC_2("undefined symbol `%s' in operation"),
        FUNC_0 (VAR_2));
      if (VAR_7 == VAR_0)
 FUNC_4 (VAR_4, VAR_5,
        FUNC_2("undefined symbol `%s' in operation"),
        FUNC_0 (VAR_3));
      if (VAR_6 != VAR_0
   && VAR_7 != VAR_0)
 {
   if (VAR_3)
     FUNC_4 (VAR_4, VAR_5,
     FUNC_2("invalid sections for operation on `%s' and `%s'"),
     FUNC_0 (VAR_2), FUNC_0 (VAR_3));
   else
     FUNC_4 (VAR_4, VAR_5,
     FUNC_2("invalid section for operation on `%s'"),
     FUNC_0 (VAR_2));
 }

    }
  else
    {
      if (VAR_6 == VAR_0)
 FUNC_3 (FUNC_2("undefined symbol `%s' in operation setting `%s'"),
  FUNC_0 (VAR_2), FUNC_0 (VAR_1));
      if (VAR_7 == VAR_0)
 FUNC_3 (FUNC_2("undefined symbol `%s' in operation setting `%s'"),
  FUNC_0 (VAR_3), FUNC_0 (VAR_1));
      if (VAR_6 != VAR_0
   && VAR_7 != VAR_0)
 {
   if (VAR_3)
     FUNC_3 (FUNC_2("invalid sections for operation on `%s' and `%s' setting `%s'"),
      FUNC_0 (VAR_2), FUNC_0 (VAR_3), FUNC_0 (VAR_1));
   else
     FUNC_3 (FUNC_2("invalid section for operation on `%s' setting `%s'"),
      FUNC_0 (VAR_2), FUNC_0 (VAR_1));
 }
    }
}
