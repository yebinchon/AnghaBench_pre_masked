
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct macro_source_file {int included_at_line; struct macro_source_file* included_by; int filename; } ;


 int FUNC_0 (struct ui_file*,char*,int ,int) ;
 struct ui_file* VAR_0 ;

__attribute__((used)) static void
FUNC_1 (struct ui_file *VAR_1,
                    struct macro_source_file *VAR_2,
                    int VAR_3)
{
  FUNC_0 (VAR_1, "%s:%d\n", VAR_2->filename, VAR_3);

  while (VAR_2->included_by)
    {
      FUNC_0 (VAR_0, "  included at %s:%d\n",
                        VAR_2->included_by->filename,
                        VAR_2->included_at_line);
      VAR_2 = VAR_2->included_by;
    }
}
