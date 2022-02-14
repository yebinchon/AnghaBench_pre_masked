
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct match_file {int pathname; } ;
struct archive_rb_node {int dummy; } ;


 int FUNC_0 (int *,int *,int const**) ;
 int FUNC_1 (int const*,int const*) ;

__attribute__((used)) static int
FUNC_2(const struct archive_rb_node *VAR_0, const void *VAR_1)
{
 struct match_file *VAR_2 = (struct match_file *)(uintptr_t)VAR_0;
 const wchar_t *VAR_3;

 FUNC_0(((void*)0), &(VAR_2->pathname), &VAR_3);
 if (VAR_3 == ((void*)0))
  return (-1);
 return (FUNC_1(VAR_3, (const wchar_t *)VAR_1));
}
