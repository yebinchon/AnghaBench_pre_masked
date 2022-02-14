
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct line_maps {int used; struct line_map* maps; } ;
struct line_map {unsigned char sysp; char* to_file; } ;
struct TYPE_19__ {int len; int text; } ;
struct TYPE_20__ {TYPE_10__ str; } ;
struct TYPE_21__ {scalar_t__ type; TYPE_1__ val; } ;
typedef TYPE_2__ cpp_token ;
struct TYPE_22__ {scalar_t__ text; int member_1; int member_0; } ;
typedef TYPE_3__ cpp_string ;
struct TYPE_23__ {struct line_maps* line_table; } ;
typedef TYPE_4__ cpp_reader ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_4__*,int ,char const*,unsigned long,unsigned char) ;
 int VAR_6 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int ,char*,...) ;
 TYPE_2__* FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_4__*,TYPE_10__*,int,TYPE_3__*,int) ;
 int FUNC_7 (TYPE_4__*,TYPE_2__ const*) ;
 int FUNC_8 (TYPE_4__*) ;
 scalar_t__ FUNC_9 (int ,int ,unsigned long*) ;

__attribute__((used)) static void
FUNC_10 (cpp_reader *VAR_7)
{
  const struct line_maps *VAR_8 = VAR_7->line_table;
  const struct line_map *VAR_9 = &VAR_8->maps[VAR_8->used - 1];




  unsigned char VAR_10 = VAR_9->sysp;
  const cpp_token *VAR_11;
  const char *VAR_12 = VAR_9->to_file;
  unsigned long VAR_13;


  unsigned int VAR_14 = FUNC_0 (VAR_7, VAR_6) ? 2147483647 : 32767;


  VAR_11 = FUNC_5 (VAR_7);
  if (VAR_11->type != VAR_3
      || FUNC_9 (VAR_11->val.str.text, VAR_11->val.str.len,
      &VAR_13))
    {
      FUNC_4 (VAR_7, VAR_0,
   "\"%s\" after #line is not a positive integer",
   FUNC_7 (VAR_7, VAR_11));
      return;
    }

  if (FUNC_1 (VAR_7) && (VAR_13 == 0 || VAR_13 > VAR_14))
    FUNC_4 (VAR_7, VAR_1, "line number out of range");

  VAR_11 = FUNC_5 (VAR_7);
  if (VAR_11->type == VAR_4)
    {
      cpp_string VAR_15 = { 0, 0 };
      if (FUNC_6 (VAR_7, &VAR_11->val.str, 1,
         &VAR_15, 0))
 VAR_12 = (const char *)VAR_15.text;
      FUNC_3 (VAR_7);
    }
  else if (VAR_11->type != VAR_2)
    {
      FUNC_4 (VAR_7, VAR_0, "\"%s\" is not a valid filename",
   FUNC_7 (VAR_7, VAR_11));
      return;
    }

  FUNC_8 (VAR_7);
  FUNC_2 (VAR_7, VAR_5, VAR_12, VAR_13,
         VAR_10);
}
