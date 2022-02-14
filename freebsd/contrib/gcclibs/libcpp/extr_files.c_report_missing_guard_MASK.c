
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* file; } ;
struct file_hash_entry {TYPE_1__ u; int * start_dir; } ;
struct TYPE_4__ {int stack_count; int path; int main_file; int * cmacro; } ;
typedef TYPE_2__ _cpp_file ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_3 (void **VAR_1, void *VAR_2)
{
  struct file_hash_entry *VAR_3 = (struct file_hash_entry *) *VAR_1;
  int *VAR_4 = (int *) VAR_2;


  if (VAR_3->start_dir != ((void*)0))
    {
      _cpp_file *VAR_5 = VAR_3->u.file;


      if (VAR_5->cmacro == ((void*)0) && VAR_5->stack_count == 1 && !VAR_5->main_file)
 {
   if (*VAR_4 == 0)
     {
       FUNC_1 (FUNC_0("Multiple include guards may be useful for:\n"),
       VAR_0);
       *VAR_4 = 1;
     }

   FUNC_1 (VAR_3->u.file->path, VAR_0);
   FUNC_2 ('\n', VAR_0);
 }
    }

  return 0;
}
