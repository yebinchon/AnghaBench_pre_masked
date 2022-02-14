
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct config_stub {char* name; struct config_strlist* hosts; struct config_stub* next; } ;
struct config_strlist {char* str; struct config_strlist* next; } ;
typedef int socklen_t ;


 scalar_t__ FUNC_0 (struct sockaddr_storage*,int ) ;
 scalar_t__ FUNC_1 (char*,struct sockaddr_storage*,int *) ;
 int FUNC_2 (int ,char*,char*,char const*,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(const char* VAR_1, struct config_stub* VAR_2)
{
 struct sockaddr_storage VAR_3;
 socklen_t VAR_4;
 struct config_stub* VAR_5;
 struct config_strlist* VAR_6;
 for(VAR_5=VAR_2; VAR_5; VAR_5=VAR_5->next) {
  for(VAR_6=VAR_5->hosts; VAR_6; VAR_6=VAR_6->next) {
   if(FUNC_1(VAR_6->str, &VAR_3, &VAR_4)) {
    FUNC_2(VAR_0, "unbound-checkconf: warning:"
      " %s %s: \"%s\" is an IP%s address, "
      "and when looked up as a host name "
      "during use may not resolve.\n",
      VAR_5->name, VAR_1, VAR_6->str,
      FUNC_0(&VAR_3, VAR_4)?"6":"4");
   }
  }
 }
}
