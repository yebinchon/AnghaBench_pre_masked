
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saved_file {int app_save; scalar_t__ preprocess; int file_name; int f_in; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 scalar_t__ VAR_2 ;

void
FUNC_3 (char *VAR_3)
{
  register struct saved_file *VAR_4 = (struct saved_file *) VAR_3;

  FUNC_2 ();

  VAR_0 = VAR_4->f_in;
  VAR_1 = VAR_4->file_name;
  VAR_2 = VAR_4->preprocess;
  if (VAR_2)
    FUNC_0 (VAR_4->app_save);

  FUNC_1 (VAR_3);
}
