
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_header {int file_names_size; int num_file_names; struct file_entry* file_names; } ;
struct file_entry {char* name; unsigned int dir_index; unsigned int mod_time; unsigned int length; } ;


 struct file_entry* FUNC_0 (int) ;
 struct file_entry* FUNC_1 (struct file_entry*,int) ;

__attribute__((used)) static void
FUNC_2 (struct line_header *VAR_0,
               char *VAR_1,
               unsigned int VAR_2,
               unsigned int VAR_3,
               unsigned int VAR_4)
{
  struct file_entry *VAR_5;


  if (VAR_0->file_names_size == 0)
    {
      VAR_0->file_names_size = 1;
      VAR_0->file_names = FUNC_0 (VAR_0->file_names_size
                                * sizeof (*VAR_0->file_names));
    }
  else if (VAR_0->num_file_names >= VAR_0->file_names_size)
    {
      VAR_0->file_names_size *= 2;
      VAR_0->file_names = FUNC_1 (VAR_0->file_names,
                                 (VAR_0->file_names_size
                                  * sizeof (*VAR_0->file_names)));
    }

  VAR_5 = &VAR_0->file_names[VAR_0->num_file_names++];
  VAR_5->name = VAR_1;
  VAR_5->dir_index = VAR_2;
  VAR_5->mod_time = VAR_3;
  VAR_5->length = VAR_4;
}
