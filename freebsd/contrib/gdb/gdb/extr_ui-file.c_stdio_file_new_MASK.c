
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct stdio_file {int close_p; int * file; int * magic; } ;
typedef int FILE ;


 int FUNC_0 (struct ui_file*,struct stdio_file*,int ) ;
 int FUNC_1 (struct ui_file*,int ) ;
 int FUNC_2 (struct ui_file*,int ) ;
 int FUNC_3 (struct ui_file*,int ) ;
 int FUNC_4 (struct ui_file*,int ) ;
 int FUNC_5 (struct ui_file*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ui_file* FUNC_6 () ;
 struct stdio_file* FUNC_7 (int) ;

__attribute__((used)) static struct ui_file *
FUNC_8 (FILE *VAR_7, int VAR_8)
{
  struct ui_file *VAR_9 = FUNC_6 ();
  struct stdio_file *VAR_10 = FUNC_7 (sizeof (struct stdio_file));
  VAR_10->magic = &VAR_4;
  VAR_10->file = VAR_7;
  VAR_10->close_p = VAR_8;
  FUNC_0 (VAR_9, VAR_10, VAR_0);
  FUNC_1 (VAR_9, VAR_1);
  FUNC_5 (VAR_9, VAR_6);
  FUNC_2 (VAR_9, VAR_2);
  FUNC_4 (VAR_9, VAR_5);
  FUNC_3 (VAR_9, VAR_3);
  return VAR_9;
}
