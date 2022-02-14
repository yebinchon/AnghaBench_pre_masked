
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct man_viewer_list {char* name; struct man_viewer_list* next; } ;


 char* FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*) ;
 char* FUNC_2 (char*) ;
 struct man_viewer_list* VAR_0 ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(const char *VAR_1)
{
 struct man_viewer_list *VAR_2;
 const char *VAR_3 = FUNC_0(VAR_1);
 const char *VAR_4 = FUNC_2("PERF_MAN_VIEWER");

 FUNC_4();
 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next)
  FUNC_1(VAR_2->name, VAR_3);

 if (VAR_4)
  FUNC_1(VAR_4, VAR_3);
 FUNC_1("man", VAR_3);

 FUNC_3("no man viewer handled the request");
 return -1;
}
