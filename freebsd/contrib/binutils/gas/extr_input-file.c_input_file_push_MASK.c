
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saved_file {int app_save; scalar_t__ preprocess; int file_name; int f_in; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int) ;

char *
FUNC_3 (void)
{
  register struct saved_file *VAR_3;

  VAR_3 = (struct saved_file *) FUNC_2 (sizeof *VAR_3);

  VAR_3->f_in = VAR_0;
  VAR_3->file_name = VAR_1;
  VAR_3->preprocess = VAR_2;
  if (VAR_2)
    VAR_3->app_save = FUNC_0 ();


  FUNC_1 ();

  return (char *) VAR_3;
}
