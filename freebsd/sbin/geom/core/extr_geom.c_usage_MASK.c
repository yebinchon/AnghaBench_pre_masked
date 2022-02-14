
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_command {int * gc_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct g_command* VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,char*) ;
 struct g_command* VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct g_command*,char const*) ;

__attribute__((used)) static void
FUNC_4(void)
{

 if (VAR_3 == ((void*)0)) {
  FUNC_2(VAR_5, "usage: geom <class> <command> [options]\n");
  FUNC_2(VAR_5, "       geom -p <provider-name>\n");
  FUNC_2(VAR_5, "       geom -t\n");
  FUNC_0(VAR_0);
 } else {
  struct g_command *VAR_6;
  const char *VAR_7;
  unsigned VAR_8;

  VAR_7 = "usage:";
  if (VAR_2 != ((void*)0)) {
   for (VAR_8 = 0; ; VAR_8++) {
    VAR_6 = &VAR_2[VAR_8];
    if (VAR_6->gc_name == ((void*)0))
     break;
    FUNC_3(VAR_6, VAR_7);
    VAR_7 = "      ";
   }
  }
  for (VAR_8 = 0; ; VAR_8++) {
   VAR_6 = &VAR_4[VAR_8];
   if (VAR_6->gc_name == ((void*)0))
    break;





   if (FUNC_1(VAR_6->gc_name, VAR_1) != ((void*)0))
    continue;
   FUNC_3(VAR_6, VAR_7);
   VAR_7 = "      ";
  }
  FUNC_0(VAR_0);
 }
}
