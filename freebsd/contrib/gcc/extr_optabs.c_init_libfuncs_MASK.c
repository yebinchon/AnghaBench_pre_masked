
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* optab ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_5__ {TYPE_1__* handlers; } ;
struct TYPE_4__ {int libfunc; } ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char const) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ) ;
 unsigned int FUNC_5 (char const*) ;

__attribute__((used)) static void
FUNC_6 (optab VAR_0, int VAR_1, int VAR_2,
        const char *VAR_3, int VAR_4)
{
  int VAR_5;
  unsigned VAR_6 = FUNC_5 (VAR_3);

  for (VAR_5 = VAR_1; (int) VAR_5 <= (int) VAR_2;
       VAR_5 = (enum machine_mode) ((int) VAR_5 + 1))
    {
      const char *VAR_7 = FUNC_0 (VAR_5);
      unsigned VAR_8 = FUNC_5 (VAR_7);
      char *VAR_9 = FUNC_2 (2 + VAR_6 + VAR_8 + 1 + 1);
      char *VAR_10;
      const char *VAR_11;

      VAR_10 = VAR_9;
      *VAR_10++ = '_';
      *VAR_10++ = '_';
      for (VAR_11 = VAR_3; *VAR_11; )
 *VAR_10++ = *VAR_11++;
      for (VAR_11 = VAR_7; *VAR_11; VAR_11++)
 *VAR_10++ = FUNC_1 (*VAR_11);
      *VAR_10++ = VAR_4;
      *VAR_10 = '\0';

      VAR_0->handlers[(int) VAR_5].libfunc
 = FUNC_4 (FUNC_3 (VAR_9, VAR_10 - VAR_9));
    }
}
