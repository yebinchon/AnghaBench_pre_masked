
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int macro_cache; int objfile_obstack; } ;
struct macro_source_file {int dummy; } ;
struct line_header {int dummy; } ;


 char* FUNC_0 (int,struct line_header*,char const*) ;
 struct macro_source_file* FUNC_1 (struct macro_source_file*,int,char*) ;
 struct macro_source_file* FUNC_2 (scalar_t__,char*) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static struct macro_source_file *
FUNC_5 (int VAR_1, int VAR_2,
                  struct macro_source_file *VAR_3,
                  const char *VAR_4,
                  struct line_header *VAR_5, struct objfile *VAR_6)
{

  char *VAR_7 = FUNC_0 (VAR_1, VAR_5, VAR_4);



  if (! VAR_0)
    VAR_0 = FUNC_3 (&VAR_6->objfile_obstack,
                                      VAR_6->macro_cache);

  if (! VAR_3)


    VAR_3 = FUNC_2 (VAR_0, VAR_7);
  else
    VAR_3 = FUNC_1 (VAR_3, VAR_2, VAR_7);

  FUNC_4 (VAR_7);

  return VAR_3;
}
