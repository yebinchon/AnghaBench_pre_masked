
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_range {int line_list; int * path; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned int) ;
 int * FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1, unsigned int VAR_2,
          struct line_range *VAR_3)
{

 if (!VAR_3->path) {
  VAR_3->path = FUNC_1(VAR_1);
  if (VAR_3->path == ((void*)0))
   return -VAR_0;
 }
 return FUNC_0(&VAR_3->line_list, VAR_2);
}
