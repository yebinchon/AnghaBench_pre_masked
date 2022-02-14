
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct match_file {int pathname; } ;
struct archive_rb_node {int dummy; } ;


 int FUNC_0 (int *,int *,char const**) ;
 int FUNC_1 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_2(const struct archive_rb_node *VAR_0,
    const struct archive_rb_node *VAR_1)
{
 struct match_file *VAR_2 = (struct match_file *)(uintptr_t)VAR_0;
 struct match_file *VAR_3 = (struct match_file *)(uintptr_t)VAR_1;
 const char *VAR_4, *VAR_5;

 FUNC_0(((void*)0), &(VAR_2->pathname), &VAR_4);
 FUNC_0(((void*)0), &(VAR_3->pathname), &VAR_5);
 if (VAR_4 == ((void*)0))
  return (1);
 if (VAR_5 == ((void*)0))
  return (-1);
 return (FUNC_1(VAR_4, VAR_5));
}
