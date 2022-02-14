
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_write_state {int dummy; } ;
typedef int rtx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct reg_write_state*,struct reg_write_state*,int) ;
 struct reg_write_state* VAR_2 ;

__attribute__((used)) static int
FUNC_2 (rtx VAR_3)
{
  struct reg_write_state VAR_4[VAR_0];
  int VAR_5;
  int VAR_6;

  FUNC_1 (VAR_4, VAR_2, VAR_0 * sizeof *VAR_4);
  VAR_5 = VAR_1;

  VAR_6 = FUNC_0 (VAR_3);

  FUNC_1 (VAR_2, VAR_4, VAR_0 * sizeof *VAR_4);
  VAR_1 = VAR_5;

  return VAR_6;
}
