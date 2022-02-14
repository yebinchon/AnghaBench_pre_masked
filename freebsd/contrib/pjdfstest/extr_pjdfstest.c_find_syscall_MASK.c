
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscall_desc {int * sd_name; } ;


 scalar_t__ FUNC_0 (int *,char const*) ;
 struct syscall_desc* VAR_0 ;

__attribute__((used)) static struct syscall_desc *
FUNC_1(const char *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2].sd_name != ((void*)0); VAR_2++) {
  if (FUNC_0(VAR_0[VAR_2].sd_name, VAR_1) == 0)
   return (&VAR_0[VAR_2]);
 }
 return (((void*)0));
}
