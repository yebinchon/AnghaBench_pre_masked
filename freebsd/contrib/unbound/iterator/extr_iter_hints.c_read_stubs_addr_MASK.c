
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct delegpt {int dummy; } ;
struct config_stub {int name; struct config_strlist* addrs; } ;
struct config_strlist {int str; struct config_strlist* next; } ;
typedef int socklen_t ;


 int FUNC_0 (int ,struct sockaddr_storage*,int *,char**) ;
 int FUNC_1 (struct delegpt*,struct sockaddr_storage*,int ,int ,int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int
FUNC_4(struct config_stub* VAR_0, struct delegpt* VAR_1)
{
 struct config_strlist* VAR_2;
 struct sockaddr_storage VAR_3;
 socklen_t VAR_4;
 char* VAR_5;
 for(VAR_2 = VAR_0->addrs; VAR_2; VAR_2 = VAR_2->next) {
  FUNC_2(VAR_2->str);
  if(!FUNC_0(VAR_2->str, &VAR_3, &VAR_4, &VAR_5)) {
   FUNC_3("cannot parse stub %s ip address: '%s'",
    VAR_0->name, VAR_2->str);
   return 0;
  }

  if(VAR_5)
   FUNC_3("no name verification functionality in "
    "ssl library, ignored name for %s", VAR_2->str);

  if(!FUNC_1(VAR_1, &VAR_3, VAR_4, 0, 0,
   VAR_5)) {
   FUNC_3("out of memory");
   return 0;
  }
 }
 return 1;
}
