
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int * VAR_0 ;
 size_t FUNC_0 (char const* const*,size_t,size_t) ;
 int FUNC_1 (char,int *) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (size_t,size_t) ;

__attribute__((used)) static void
FUNC_3 (char const *const *VAR_3, char VAR_4,
     char const *const *VAR_5)
{
  FILE *VAR_6 = VAR_0;
  size_t VAR_7 = VAR_2;
  size_t VAR_8 = VAR_1;
  size_t VAR_9 = 0;
  bool VAR_10 = 0;

  if (VAR_3)
    {
      VAR_10 |= VAR_3[1][-1] == '\n';
      VAR_9 = FUNC_0 (VAR_3, 0, VAR_7);
    }

  if (VAR_4 != ' ')
    {
      VAR_9 = FUNC_2 (VAR_9, (VAR_7 + VAR_8 - 1) / 2) + 1;
      if (VAR_4 == '|' && VAR_10 != (VAR_5[1][-1] == '\n'))
 VAR_4 = VAR_10 ? '/' : '\\';
      FUNC_1 (VAR_4, VAR_6);
    }

  if (VAR_5)
    {
      VAR_10 |= VAR_5[1][-1] == '\n';
      if (**VAR_5 != '\n')
 {
   VAR_9 = FUNC_2 (VAR_9, VAR_8);
   FUNC_0 (VAR_5, VAR_9, VAR_7);
 }
    }

  if (VAR_10)
    FUNC_1 ('\n', VAR_6);
}
