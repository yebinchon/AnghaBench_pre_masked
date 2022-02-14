
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct print_file_list {unsigned int maxline; char** linemap; } ;


 int FUNC_0 (char const*,int,int ,int ) ;
 int FUNC_1 (char) ;
 int VAR_0 ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static void
FUNC_3 (struct print_file_list *VAR_1, unsigned int VAR_2)
{
  const char *VAR_3;

  --VAR_2;
  if (VAR_2 >= VAR_1->maxline)
    return;
  VAR_3 = VAR_1->linemap [VAR_2];
  FUNC_0 (VAR_3, 1, FUNC_2 (VAR_3, "\n\r"), VAR_0);
  FUNC_1 ('\n');
}
