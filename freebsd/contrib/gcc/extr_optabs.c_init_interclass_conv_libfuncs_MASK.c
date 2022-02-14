
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef enum mode_class { ____Placeholder_mode_class } mode_class ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef TYPE_2__* convert_optab ;
struct TYPE_5__ {TYPE_1__** handlers; } ;
struct TYPE_4__ {int libfunc; } ;


 int FUNC_0 (int) ;
 char const* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 size_t FUNC_3 (size_t,size_t) ;
 char FUNC_4 (char const) ;
 int VAR_0 ;
 char* FUNC_5 (int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,char const*,size_t) ;
 size_t FUNC_9 (char const*) ;

__attribute__((used)) static void
FUNC_10 (convert_optab VAR_1, const char *VAR_2,
          enum mode_class VAR_3,
          enum mode_class VAR_4)
{
  enum machine_mode VAR_5 = FUNC_0 (VAR_3);
  enum machine_mode VAR_6 = FUNC_0 (VAR_4);
  size_t VAR_7 = FUNC_9 (VAR_2);
  size_t VAR_8 = 0;

  enum machine_mode VAR_9, VAR_10;
  const char *VAR_11, *VAR_12;
  const char *VAR_13;
  char *VAR_14, *VAR_15;
  char *VAR_16;

  for (VAR_9 = VAR_5;
       VAR_9 != VAR_0;
       VAR_9 = FUNC_2 (VAR_9))
    VAR_8 = FUNC_3 (VAR_8, FUNC_9 (FUNC_1 (VAR_9)));

  for (VAR_10 = VAR_6;
       VAR_10 != VAR_0;
       VAR_10 = FUNC_2 (VAR_10))
    VAR_8 = FUNC_3 (VAR_8, FUNC_9 (FUNC_1 (VAR_10)));

  VAR_14 = FUNC_5 (2 + VAR_7 + 2*VAR_8 + 1 + 1);
  VAR_14[0] = '_';
  VAR_14[1] = '_';
  FUNC_8 (&VAR_14[2], VAR_2, VAR_7);
  VAR_15 = VAR_14 + VAR_7 + 2;

  for (VAR_9 = VAR_5; VAR_9 != VAR_0;
       VAR_9 = FUNC_2 (VAR_9))
    for (VAR_10 = VAR_6; VAR_10 != VAR_0;
  VAR_10 = FUNC_2 (VAR_10))
      {
 VAR_11 = FUNC_1 (VAR_9);
 VAR_12 = FUNC_1 (VAR_10);

 VAR_16 = VAR_15;
 for (VAR_13 = VAR_11; *VAR_13; VAR_16++, VAR_13++)
   *VAR_16 = FUNC_4 (*VAR_13);
 for (VAR_13 = VAR_12; *VAR_13; VAR_16++, VAR_13++)
   *VAR_16 = FUNC_4 (*VAR_13);

 *VAR_16 = '\0';

 VAR_1->handlers[VAR_10][VAR_9].libfunc
   = FUNC_7 (FUNC_6 (VAR_14,
      VAR_16 - VAR_14));
      }
}
