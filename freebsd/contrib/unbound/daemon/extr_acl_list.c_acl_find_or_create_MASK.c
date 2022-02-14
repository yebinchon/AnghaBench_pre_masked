
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct acl_list {int tree; } ;
struct acl_addr {int dummy; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct acl_list*,struct sockaddr_storage*,int ,int,int ,int) ;
 scalar_t__ FUNC_1 (int *,struct sockaddr_storage*,int ,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char const*,int ,struct sockaddr_storage*,int *,int*) ;

__attribute__((used)) static struct acl_addr*
FUNC_4(struct acl_list* VAR_2, const char* VAR_3)
{
 struct acl_addr* VAR_4;
 struct sockaddr_storage VAR_5;
 int VAR_6;
 socklen_t VAR_7;
 if(!FUNC_3(VAR_3, VAR_0, &VAR_5, &VAR_7, &VAR_6)) {
  FUNC_2("cannot parse netblock: %s", VAR_3);
  return ((void*)0);
 }

 if(!(VAR_4=(struct acl_addr*)FUNC_1(&VAR_2->tree, &VAR_5,
  VAR_7, VAR_6))) {


  if(!(VAR_4=(struct acl_addr*)FUNC_0(VAR_2, &VAR_5,
   VAR_7, VAR_6, VAR_1, 1))) {
   FUNC_2("out of memory");
   return ((void*)0);
  }
 }
 return VAR_4;
}
