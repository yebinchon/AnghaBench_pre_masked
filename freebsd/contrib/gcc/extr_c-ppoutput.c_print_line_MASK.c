
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct line_map {int sysp; scalar_t__ to_file; } ;
typedef int source_location ;
struct TYPE_2__ {int src_line; int outf; scalar_t__ printed; } ;


 int FUNC_0 (struct line_map const*,int ) ;
 scalar_t__ FUNC_1 (size_t) ;
 unsigned char* FUNC_2 (unsigned char*,unsigned char*,size_t) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*,int,unsigned char*,char const*) ;
 int FUNC_4 (char*,int ) ;
 int VAR_1 ;
 struct line_map* FUNC_5 (int *,int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_6 (char,int ) ;
 size_t FUNC_7 (scalar_t__) ;

__attribute__((used)) static void
FUNC_8 (source_location VAR_3, const char *VAR_4)
{

  if (VAR_2.printed)
    FUNC_6 ('\n', VAR_2.outf);
  VAR_2.printed = 0;

  if (!VAR_0)
    {
      const struct line_map *VAR_5 = FUNC_5 (&VAR_1, VAR_3);

      size_t VAR_6 = FUNC_7 (VAR_5->to_file);
      unsigned char *VAR_7 =
         (unsigned char *) FUNC_1 (VAR_6 * 4 + 1);
      unsigned char *VAR_8;

      VAR_2.src_line = FUNC_0 (VAR_5, VAR_3);



      VAR_8 = FUNC_2 (VAR_7,
       (unsigned char *) VAR_5->to_file, VAR_6);
      *VAR_8 = '\0';
      FUNC_3 (VAR_2.outf, "# %u \"%s\"%s",
        VAR_2.src_line == 0 ? 1 : VAR_2.src_line,
        VAR_7, VAR_4);

      if (VAR_5->sysp == 2)
 FUNC_4 (" 3 4", VAR_2.outf);
      else if (VAR_5->sysp == 1)
 FUNC_4 (" 3", VAR_2.outf);

      FUNC_6 ('\n', VAR_2.outf);
    }
}
