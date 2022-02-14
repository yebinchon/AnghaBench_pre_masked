
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct line_map {int to_file; } ;
struct TYPE_10__ {int line; int file; } ;
typedef TYPE_1__ source_location ;
typedef TYPE_1__ location_t ;
struct TYPE_11__ {scalar_t__ type; } ;
typedef TYPE_3__ cpp_token ;
typedef int cpp_reader ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct line_map const*,TYPE_1__) ;
 TYPE_3__* FUNC_1 (int *) ;
 unsigned char* FUNC_2 (int *,TYPE_3__ const*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct line_map* FUNC_3 (int *,TYPE_1__) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ,char*,TYPE_1__*,unsigned char const*,unsigned char const*) ;

__attribute__((used)) static void
FUNC_5 (cpp_reader *VAR_6, source_location VAR_7)
{



  if (VAR_5 > VAR_3)
    {
      const unsigned char *VAR_8, *VAR_9;
      const cpp_token *VAR_10;

      location_t VAR_11;
      const struct line_map *VAR_12 = FUNC_3 (&VAR_4, VAR_7);
      VAR_11.file = VAR_12->to_file;
      VAR_11.line = FUNC_0 (VAR_12, VAR_7);




      VAR_8 = VAR_9 = (const unsigned char *) "";
      VAR_10 = FUNC_1 (VAR_6);
      if (VAR_10->type != VAR_0)
 {
   VAR_8 = FUNC_2 (VAR_6, VAR_10);
   VAR_10 = FUNC_1 (VAR_6);
   if (VAR_10->type == VAR_1)
     VAR_9 = FUNC_2 (VAR_6, VAR_10);
 }

      FUNC_4 (VAR_2, "%Hignoring #pragma %s %s",
        &VAR_11, VAR_8, VAR_9);
    }
}
