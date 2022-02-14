
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_option {char go_char; int * go_name; } ;
struct g_command {struct g_option* gc_options; } ;



__attribute__((used)) static struct g_option *
FUNC_0(struct g_command *VAR_0, char VAR_1)
{
 struct g_option *VAR_2;
 unsigned VAR_3;

 for (VAR_3 = 0; ; VAR_3++) {
  VAR_2 = &VAR_0->gc_options[VAR_3];
  if (VAR_2->go_name == ((void*)0))
   return (((void*)0));
  if (VAR_2->go_char == VAR_1)
   return (VAR_2);
 }

 return (((void*)0));
}
