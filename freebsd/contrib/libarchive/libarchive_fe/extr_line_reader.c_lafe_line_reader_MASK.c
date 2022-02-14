
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lafe_line_reader {int nullSeparator; int buff_length; int * buff; int buff_end; int line_end; int line_start; int * f; int pathname; } ;


 int VAR_0 ;
 struct lafe_line_reader* FUNC_0 (int,int) ;
 int VAR_1 ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int,int ,char*,char const*) ;
 int * VAR_2 ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*) ;

struct lafe_line_reader *
FUNC_5(const char *VAR_3, int VAR_4)
{
 struct lafe_line_reader *VAR_5;

 VAR_5 = FUNC_0(1, sizeof(*VAR_5));
 if (VAR_5 == ((void*)0))
  FUNC_2(1, VAR_0, "Can't open %s", VAR_3);

 VAR_5->nullSeparator = VAR_4;
 VAR_5->pathname = FUNC_4(VAR_3);

 if (FUNC_3(VAR_3, "-") == 0)
  VAR_5->f = VAR_2;
 else
  VAR_5->f = FUNC_1(VAR_3, "r");
 if (VAR_5->f == ((void*)0))
  FUNC_2(1, VAR_1, "Couldn't open %s", VAR_3);
 VAR_5->buff_length = 8192;
 VAR_5->line_start = VAR_5->line_end = VAR_5->buff_end = *(VAR_5->buff = ((void*)0));

 return (VAR_5);
}
