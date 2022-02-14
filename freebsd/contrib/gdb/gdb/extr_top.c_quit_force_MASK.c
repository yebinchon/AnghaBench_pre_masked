
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct qt_args {char* args; int from_tty; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct qt_args*,char*,int ) ;
 int FUNC_1 (int) ;
 struct value* FUNC_2 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct value*) ;

void
FUNC_4 (char *VAR_2, int VAR_3)
{
  int VAR_4 = 0;
  struct qt_args VAR_5;



  if (VAR_2)
    {
      struct value *VAR_6 = FUNC_2 (VAR_2);

      VAR_4 = (int) FUNC_3 (VAR_6);
    }

  VAR_5.args = VAR_2;
  VAR_5.from_tty = VAR_3;


  FUNC_0 (VAR_1, &VAR_5,
         "Quitting: ", VAR_0);

  FUNC_1 (VAR_4);
}
