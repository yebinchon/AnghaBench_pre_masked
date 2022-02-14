
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command_line {int body_count; struct command_line** body_list; } ;


 int FUNC_0 (struct command_line**,struct command_line**,int) ;
 int FUNC_1 (struct command_line**) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3 (struct command_line *VAR_0, int VAR_1)
{
  int VAR_2;
  struct command_line **VAR_3;

  VAR_2 = VAR_0->body_count;


  if (VAR_1 <= VAR_2)
    return;

  VAR_3 = (struct command_line **)
    FUNC_2 (sizeof (struct command_line *) * VAR_1);

  FUNC_0 (VAR_3, VAR_0->body_list, sizeof (struct command_line *) * VAR_2);

  FUNC_1 (VAR_0->body_list);
  VAR_0->body_list = VAR_3;
  VAR_0->body_count = VAR_1;
}
