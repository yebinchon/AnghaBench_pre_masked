
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_12__ ;


struct line_maps {int used; struct line_map* maps; } ;
struct line_map {char* to_file; unsigned int sysp; } ;
typedef enum lc_reason { ____Placeholder_lc_reason } lc_reason ;
struct TYPE_21__ {int len; int text; } ;
struct TYPE_22__ {TYPE_12__ str; } ;
struct TYPE_24__ {scalar_t__ type; TYPE_1__ val; } ;
typedef TYPE_3__ cpp_token ;
struct TYPE_25__ {scalar_t__ text; int member_1; int member_0; } ;
typedef TYPE_4__ cpp_string ;
struct TYPE_26__ {TYPE_2__* buffer; struct line_maps* line_table; } ;
typedef TYPE_5__ cpp_reader ;
struct TYPE_23__ {unsigned int sysp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_5__*,int) ;
 int FUNC_1 (TYPE_5__*,int,char const*,unsigned long,unsigned int) ;
 int FUNC_2 (TYPE_5__*,char const*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,int ,char*,int ) ;
 TYPE_3__* FUNC_5 (TYPE_5__*) ;
 scalar_t__ FUNC_6 (TYPE_5__*,TYPE_12__*,int,TYPE_4__*,int) ;
 int FUNC_7 (TYPE_5__*,TYPE_3__ const*) ;
 int FUNC_8 (TYPE_5__*,int) ;
 int FUNC_9 (TYPE_5__*) ;
 scalar_t__ FUNC_10 (int ,int ,unsigned long*) ;

__attribute__((used)) static void
FUNC_11 (cpp_reader *VAR_7)
{
  const struct line_maps *VAR_8 = VAR_7->line_table;
  const struct line_map *VAR_9 = &VAR_8->maps[VAR_8->used - 1];
  const cpp_token *VAR_10;
  const char *VAR_11 = VAR_9->to_file;
  unsigned long VAR_12;
  unsigned int VAR_13 = VAR_9->sysp;
  enum lc_reason VAR_14 = VAR_6;
  int VAR_15;




  FUNC_0 (VAR_7, 1);


  VAR_10 = FUNC_5 (VAR_7);
  if (VAR_10->type != VAR_2
      || FUNC_10 (VAR_10->val.str.text, VAR_10->val.str.len,
      &VAR_12))
    {
      FUNC_4 (VAR_7, VAR_0,
   "\"%s\" after # is not a positive integer",
   FUNC_7 (VAR_7, VAR_10));
      return;
    }

  VAR_10 = FUNC_5 (VAR_7);
  if (VAR_10->type == VAR_3)
    {
      cpp_string VAR_16 = { 0, 0 };
      if (FUNC_6 (VAR_7, &VAR_10->val.str,
         1, &VAR_16, 0))
 VAR_11 = (const char *)VAR_16.text;

      VAR_13 = 0;
      VAR_15 = FUNC_8 (VAR_7, 0);
      if (VAR_15 == 1)
 {
   VAR_14 = VAR_4;

   FUNC_2 (VAR_7, VAR_11);
   VAR_15 = FUNC_8 (VAR_7, VAR_15);
 }
      else if (VAR_15 == 2)
 {
   VAR_14 = VAR_5;
   VAR_15 = FUNC_8 (VAR_7, VAR_15);
 }
      if (VAR_15 == 3)
 {
   VAR_13 = 1;
   VAR_15 = FUNC_8 (VAR_7, VAR_15);
   if (VAR_15 == 4)
     VAR_13 = 2;
 }
      VAR_7->buffer->sysp = VAR_13;

      FUNC_3 (VAR_7);
    }
  else if (VAR_10->type != VAR_1)
    {
      FUNC_4 (VAR_7, VAR_0, "\"%s\" is not a valid filename",
   FUNC_7 (VAR_7, VAR_10));
      return;
    }

  FUNC_9 (VAR_7);
  FUNC_1 (VAR_7, VAR_14, VAR_11, VAR_12, VAR_13);
}
