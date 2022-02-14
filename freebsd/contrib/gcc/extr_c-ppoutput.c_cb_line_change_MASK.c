
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct line_map {int dummy; } ;
typedef int source_location ;
struct TYPE_4__ {scalar_t__ type; int src_loc; } ;
typedef TYPE_1__ cpp_token ;
typedef int cpp_reader ;
struct TYPE_5__ {int printed; int outf; scalar_t__ source; scalar_t__ prev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct line_map const*,int ) ;
 int VAR_1 ;
 struct line_map* FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_4 (char,int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5 (cpp_reader *VAR_4, const cpp_token *VAR_5,
  int VAR_6)
{
  source_location VAR_7 = VAR_5->src_loc;

  if (VAR_5->type == VAR_0 || VAR_6)
    return;

  FUNC_3 (VAR_7);
  VAR_2.prev = 0;
  VAR_2.source = 0;






  if (!FUNC_0 (VAR_4, VAR_3))
    {
      const struct line_map *VAR_8 = FUNC_2 (&VAR_1, VAR_7);
      int VAR_9 = FUNC_1 (VAR_8, VAR_7) - 2;
      VAR_2.printed = 1;

      while (-- VAR_9 >= 0)
 FUNC_4 (' ', VAR_2.outf);
    }
}
