
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;


 struct type* VAR_0 ;
 int FUNC_0 (char*,int,struct type**) ;
 struct ui_file* VAR_1 ;
 int FUNC_1 (struct ui_file*) ;
 struct ui_file* FUNC_2 () ;

__attribute__((used)) static struct type *
FUNC_3 (char *VAR_2, int VAR_3)
{
  struct ui_file *VAR_4;
  struct type *VAR_5;


  VAR_4 = VAR_1;
  VAR_1 = FUNC_2 ();


  if (!FUNC_0 (VAR_2, VAR_3, &VAR_5))
    VAR_5 = VAR_0;


  FUNC_1 (VAR_1);
  VAR_1 = VAR_4;

  return VAR_5;
}
