
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,size_t) ;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* FUNC_1 (char*,size_t) ;

__attribute__((used)) static void
FUNC_2 (const char *VAR_3, size_t VAR_4)
{
  if ((VAR_2 + 1) + VAR_4 >= VAR_1)
    {
      size_t VAR_5 = (VAR_1 - VAR_0) << 1;
      char *VAR_6 = FUNC_1 (VAR_0, VAR_5);

      VAR_2 = VAR_6 + (VAR_2 - VAR_0);
      VAR_0 = VAR_6;
      VAR_1 = VAR_6 + VAR_5;
    }
  FUNC_0 (VAR_2 + 1, VAR_3, VAR_4);
  VAR_2 += VAR_4;
}
