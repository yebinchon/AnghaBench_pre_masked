
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct tcl_list {int dummy; } ;
struct sockaddr_storage {int dummy; } ;
typedef int socklen_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char const*,int ,struct sockaddr_storage*,int *,int*) ;
 int FUNC_3 (struct tcl_list*,struct sockaddr_storage*,int ,int,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_4(struct tcl_list* VAR_1, const char* VAR_2, const char* VAR_3,
 int VAR_4)
{
 struct sockaddr_storage VAR_5;
 int VAR_6;
 socklen_t VAR_7;
 uint32_t VAR_8;
 if(FUNC_0(VAR_3) < 0) {
  FUNC_1("bad connection limit %s", VAR_3);
  return 0;
 }
 VAR_8 = (uint32_t)FUNC_0(VAR_3);
 if(!FUNC_2(VAR_2, VAR_0, &VAR_5, &VAR_7, &VAR_6)) {
  FUNC_1("cannot parse connection limit netblock: %s", VAR_2);
  return 0;
 }
 if(!FUNC_3(VAR_1, &VAR_5, VAR_7, VAR_6, VAR_8,
  VAR_4)) {
  FUNC_1("out of memory");
  return 0;
 }
 return 1;
}
