
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int magic; int poll_quit; int error; int evprintf_filtered; int vprintf_filtered; int printf_filtered; int flush_stderr; int write_stderr; int flush_stdout; int write_stdout; int (* init ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1 (void)
{
  if (!VAR_1)
    {
      VAR_3 = VAR_2;
      VAR_3.init (&VAR_3);
      VAR_3.write_stdout = VAR_12;
      VAR_3.flush_stdout = VAR_7;
      VAR_3.write_stderr = VAR_11;
      VAR_3.flush_stderr = VAR_6;
      VAR_3.printf_filtered = VAR_9;
      VAR_3.vprintf_filtered = VAR_10;
      VAR_3.evprintf_filtered = VAR_5;
      VAR_3.error = VAR_4;
      VAR_3.poll_quit = VAR_8;
      VAR_3.magic = VAR_0;
      VAR_1 = 1;
    }
}
