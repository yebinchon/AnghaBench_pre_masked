
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void FUNC_3(char *VAR_4, size_t VAR_5)
{
 int *VAR_6 = (int *) (VAR_4 + VAR_5);

 int *VAR_7 = (int *) VAR_4 + 1;
 char *VAR_8, *VAR_9;

 for (; VAR_7 < VAR_6; VAR_7++) {
  if (*VAR_7 == VAR_0) { VAR_8 = (char *) VAR_7 ; goto conf; }
  if (*VAR_7 == VAR_3) { VAR_8 = (char *) VAR_7-1; goto conf; }
  if (*VAR_7 == VAR_2) { VAR_8 = (char *) VAR_7-2; goto conf; }
  if (*VAR_7 == VAR_1) { VAR_8 = (char *) VAR_7-3; goto conf; }
  continue;
 conf:
  if (VAR_8 > VAR_4 + VAR_5 - 7)
   continue;
  if (FUNC_1(VAR_8, "CONFIG_", 7))
   continue;
  for (VAR_9 = VAR_8 + 7; VAR_9 < VAR_4 + VAR_5; VAR_9++) {
   if (!(FUNC_0(*VAR_9) || *VAR_9 == '_'))
    goto found;
  }
  continue;

 found:
  if (!FUNC_1(VAR_9 - 7, "_MODULE", 7))
   VAR_9 -= 7;
  if( (VAR_9-VAR_8-7) < 0 )
   continue;
  FUNC_2(VAR_8+7, VAR_9-VAR_8-7);
 }
}
