
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct line_map {int dummy; } ;
typedef int source_location ;
struct TYPE_2__ {int src_line; int outf; scalar_t__ printed; } ;


 int FUNC_0 (struct line_map const*,int ) ;
 int VAR_0 ;
 struct line_map* FUNC_1 (int *,int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char,int ) ;

__attribute__((used)) static void
FUNC_4 (source_location VAR_2)
{
  const struct line_map *VAR_3 = FUNC_1 (&VAR_0, VAR_2);
  int VAR_4 = FUNC_0 (VAR_3, VAR_2);

  if (VAR_1.printed)
    {
      FUNC_3 ('\n', VAR_1.outf);
      VAR_1.src_line++;
      VAR_1.printed = 0;
    }

  if (VAR_4 >= VAR_1.src_line && VAR_4 < VAR_1.src_line + 8)
    {
      while (VAR_4 > VAR_1.src_line)
 {
   FUNC_3 ('\n', VAR_1.outf);
   VAR_1.src_line++;
 }
    }
  else
    FUNC_2 (VAR_2, "");
}
