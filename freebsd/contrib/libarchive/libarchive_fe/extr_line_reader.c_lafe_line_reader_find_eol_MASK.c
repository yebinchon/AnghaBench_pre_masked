
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lafe_line_reader {char* line_end; scalar_t__ nullSeparator; } ;


 int FUNC_0 (char*,char*) ;

__attribute__((used)) static void
FUNC_1(struct lafe_line_reader *VAR_0)
{

 VAR_0->line_end += FUNC_0(VAR_0->line_end,
     VAR_0->nullSeparator ? "" : "\x0d\x0a");
 *VAR_0->line_end = '\0';
}
