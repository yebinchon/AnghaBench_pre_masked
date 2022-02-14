
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct acl_list {int dummy; } ;
typedef int socklen_t ;
typedef enum acl_access { ____Placeholder_acl_access } acl_access ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct acl_list*,struct sockaddr_storage*,int ,int,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char const*,int ,struct sockaddr_storage*,int *,int*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static int
FUNC_4(struct acl_list* VAR_8, const char* VAR_9, const char* VAR_10,
 int VAR_11)
{
 struct sockaddr_storage VAR_12;
 int VAR_13;
 socklen_t VAR_14;
 enum acl_access VAR_15;
 if(FUNC_3(VAR_10, "allow") == 0)
  VAR_15 = VAR_1;
 else if(FUNC_3(VAR_10, "deny") == 0)
  VAR_15 = VAR_4;
 else if(FUNC_3(VAR_10, "refuse") == 0)
  VAR_15 = VAR_6;
 else if(FUNC_3(VAR_10, "deny_non_local") == 0)
  VAR_15 = VAR_5;
 else if(FUNC_3(VAR_10, "refuse_non_local") == 0)
  VAR_15 = VAR_7;
 else if(FUNC_3(VAR_10, "allow_snoop") == 0)
  VAR_15 = VAR_3;
 else if(FUNC_3(VAR_10, "allow_setrd") == 0)
  VAR_15 = VAR_2;
 else {
  FUNC_1("access control type %s unknown", VAR_9);
  return 0;
 }
 if(!FUNC_2(VAR_9, VAR_0, &VAR_12, &VAR_14, &VAR_13)) {
  FUNC_1("cannot parse access control: %s %s", VAR_9, VAR_10);
  return 0;
 }
 if(!FUNC_0(VAR_8, &VAR_12, VAR_14, VAR_13, VAR_15,
  VAR_11)) {
  FUNC_1("out of memory");
  return 0;
 }
 return 1;
}
