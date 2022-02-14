
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_out_data {struct ui_file* original_stream; struct ui_file* stream; } ;
struct ui_out {int dummy; } ;
struct ui_file {int dummy; } ;


 struct ui_out_data* FUNC_0 (struct ui_out*) ;

int
FUNC_1 (struct ui_out *VAR_0, struct ui_file *VAR_1)
{
  struct ui_out_data *VAR_2 = FUNC_0 (VAR_0);
  if (VAR_1 != ((void*)0))
    {
      VAR_2->original_stream = VAR_2->stream;
      VAR_2->stream = VAR_1;
    }
  else if (VAR_2->original_stream != ((void*)0))
    {
      VAR_2->stream = VAR_2->original_stream;
      VAR_2->original_stream = ((void*)0);
    }

  return 0;
}
