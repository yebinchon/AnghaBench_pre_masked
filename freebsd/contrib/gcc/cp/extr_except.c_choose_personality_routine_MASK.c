
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum languages { ____Placeholder_languages } languages ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;



void
FUNC_3 (enum languages VAR_2)
{
  static enum {
    chose_none,
    chose_cpp,
    chose_java,
    gave_error
  } VAR_3;

  switch (VAR_3)
    {
    case gave_error:
      return;

    case chose_cpp:
      if (VAR_2 != 129)
 goto give_error;
      return;

    case chose_java:
      if (VAR_2 != 128)
 goto give_error;
      return;

    case chose_none:
      ;
    }

  switch (VAR_2)
    {
    case 129:
      VAR_3 = chose_cpp;
      break;

    case 128:
      VAR_3 = chose_java;
      VAR_1 = FUNC_2 (VAR_0
       ? "__gcj_personality_sj0"
       : "__gcj_personality_v0");
      break;

    default:
      FUNC_1 ();
    }
  return;

 give_error:
  FUNC_0 ("mixing C++ and Java catches in a single translation unit");
  VAR_3 = gave_error;
}
