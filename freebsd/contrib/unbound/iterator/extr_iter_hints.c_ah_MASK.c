
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sockaddr_storage {int dummy; } ;
struct delegpt {int dummy; } ;
typedef int socklen_t ;


 int FUNC_0 (struct delegpt*,int *,int ) ;
 int FUNC_1 (struct delegpt*,int *,size_t,struct sockaddr_storage*,int ,int ,int ) ;
 int FUNC_2 (char const*,struct sockaddr_storage*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char const*) ;
 int * FUNC_5 (char const*,size_t*) ;

__attribute__((used)) static int
FUNC_6(struct delegpt* VAR_0, const char* VAR_1, const char* VAR_2)
{
 struct sockaddr_storage VAR_3;
 socklen_t VAR_4;
 size_t VAR_5;
 uint8_t* VAR_6 = FUNC_5(VAR_1, &VAR_5);
 if(!VAR_6) {
  FUNC_4("could not parse %s", VAR_1);
  return 0;
 }
 if(!FUNC_0(VAR_0, VAR_6, 0) ||
    !FUNC_2(VAR_2, &VAR_3, &VAR_4) ||
    !FUNC_1(VAR_0, VAR_6, VAR_5,
  &VAR_3, VAR_4, 0, 0)) {
  FUNC_3(VAR_6);
  return 0;
 }
 FUNC_3(VAR_6);
 return 1;
}
