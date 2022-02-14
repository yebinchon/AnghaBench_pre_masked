
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct config_str2list {int str2; int str; struct config_str2list* next; } ;
struct config_file {struct config_str2list* tcp_connection_limits; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ,int ,struct sockaddr_storage*,int *,int*) ;

__attribute__((used)) static void
FUNC_2(struct config_file* VAR_1)
{
 int VAR_2;
 struct sockaddr_storage VAR_3;
 socklen_t VAR_4;
 struct config_str2list* VAR_5;
 for(VAR_5=VAR_1->tcp_connection_limits; VAR_5; VAR_5 = VAR_5->next) {
  if(!FUNC_1(VAR_5->str, VAR_0, &VAR_3, &VAR_4,
   &VAR_2)) {
   FUNC_0("cannot parse tcp connection limit address %s %s",
    VAR_5->str, VAR_5->str2);
  }
 }
}
