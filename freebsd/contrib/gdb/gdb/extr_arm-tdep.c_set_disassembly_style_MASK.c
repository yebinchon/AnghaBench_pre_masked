
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 char** VAR_3 ;
 int VAR_4 ;
 char const* VAR_5 ;
 int FUNC_0 (int,char const**,char const**,char const***) ;
 scalar_t__ FUNC_1 (char const) ;
 int VAR_6 ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3 (void)
{
  const char *VAR_7, *VAR_8, **VAR_9;
  int VAR_10, VAR_11;


  int VAR_12 = 0;
  VAR_10 = FUNC_0 (VAR_12, &VAR_7, &VAR_8, &VAR_9);
  while ((VAR_5 != VAR_7)
  && (VAR_12 < VAR_6))
    FUNC_0 (++VAR_12, &VAR_7, &VAR_8, &VAR_9);
  VAR_4 = VAR_12;


  for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
    VAR_3[VAR_11] = (char *) VAR_9[VAR_11];


  if (FUNC_1 (*VAR_9[VAR_1]))
    {
      VAR_3[VAR_0] = "FPS";
      VAR_3[VAR_2] = "CPSR";
    }
  else
    {
      VAR_3[VAR_0] = "fps";
      VAR_3[VAR_2] = "cpsr";
    }


  FUNC_2 (VAR_12);
}
