
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_command {int * gc_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct g_command* VAR_2 ;
 struct g_command* VAR_3 ;
 scalar_t__ FUNC_0 (int *,char const*) ;

__attribute__((used)) static struct g_command *
FUNC_1(const char *VAR_4, int VAR_5)
{
 struct g_command *VAR_6;
 unsigned VAR_7;




 if ((VAR_5 & VAR_0) != 0 && VAR_2 != ((void*)0)) {
  for (VAR_7 = 0; ; VAR_7++) {
   VAR_6 = &VAR_2[VAR_7];
   if (VAR_6->gc_name == ((void*)0))
    break;
   if (FUNC_0(VAR_6->gc_name, VAR_4) == 0)
    return (VAR_6);
  }
 }



 if ((VAR_5 & VAR_1) != 0) {
  for (VAR_7 = 0; ; VAR_7++) {
   VAR_6 = &VAR_3[VAR_7];
   if (VAR_6->gc_name == ((void*)0))
    break;
   if (FUNC_0(VAR_6->gc_name, VAR_4) == 0)
    return (VAR_6);
  }
 }
 return (((void*)0));
}
