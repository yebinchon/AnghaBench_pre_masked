
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct line_map {char* to_file; } ;
typedef scalar_t__ source_location ;
struct TYPE_4__ {int line_table; } ;
typedef TYPE_1__ cpp_reader ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 unsigned int FUNC_1 (struct line_map const*,scalar_t__) ;
 unsigned int FUNC_2 (struct line_map const*,scalar_t__) ;
 int FUNC_3 (int ,char*,char*,...) ;
 int FUNC_4 (char,int ) ;
 struct line_map* FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,struct line_map const*) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_7 (cpp_reader *VAR_3, source_location VAR_4, unsigned int VAR_5)
{
  if (VAR_4 == 0)
    FUNC_3 (VAR_2, "%s: ", VAR_0);
  else
    {
      const struct line_map *VAR_6;
      unsigned int VAR_7;

      VAR_6 = FUNC_5 (VAR_3->line_table, VAR_4);
      FUNC_6 (VAR_3->line_table, VAR_6);

      VAR_7 = FUNC_2 (VAR_6, VAR_4);
      if (VAR_5 == 0)
 {
   VAR_5 = FUNC_1 (VAR_6, VAR_4);
   if (VAR_5 == 0)
     VAR_5 = 1;
 }

      if (VAR_7 == 0)
 FUNC_3 (VAR_2, "%s:", VAR_6->to_file);
      else if (FUNC_0 (VAR_3, VAR_1) == 0)
 FUNC_3 (VAR_2, "%s:%u:", VAR_6->to_file, VAR_7);
      else
 FUNC_3 (VAR_2, "%s:%u:%u:", VAR_6->to_file, VAR_7, VAR_5);

      FUNC_4 (' ', VAR_2);
    }
}
