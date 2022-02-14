
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* filename; } ;
typedef TYPE_1__ lang_input_statement_type ;
struct TYPE_5__ {int map_file; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;

__attribute__((used)) static void
FUNC_1 (lang_input_statement_type *VAR_1)
{
  if (VAR_1->filename != ((void*)0))
    {
      FUNC_0 (VAR_0.map_file, "LOAD %s\n", VAR_1->filename);
    }
}
