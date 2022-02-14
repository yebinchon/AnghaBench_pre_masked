
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct iter_donotq {int dummy; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iter_donotq*,struct sockaddr_storage*,int ,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char const*,int ,struct sockaddr_storage*,int *,int*) ;
 int FUNC_3 (int ,char*,char const*) ;

__attribute__((used)) static int
FUNC_4(struct iter_donotq* VAR_2, const char* VAR_3)
{
 struct sockaddr_storage VAR_4;
 int VAR_5;
 socklen_t VAR_6;
 FUNC_3(VAR_1, "donotq: %s", VAR_3);
 if(!FUNC_2(VAR_3, VAR_0, &VAR_4, &VAR_6, &VAR_5)) {
  FUNC_1("cannot parse donotquery netblock: %s", VAR_3);
  return 0;
 }
 if(!FUNC_0(VAR_2, &VAR_4, VAR_6, VAR_5)) {
  FUNC_1("out of memory");
  return 0;
 }
 return 1;
}
