
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct in_addr {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*,struct in_addr*) ;
 int FUNC_1 (char*,int,char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 char* FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(const char* VAR_1, char** VAR_2)
{
 struct in_addr VAR_3;

 char VAR_4[32];
 if(FUNC_0(VAR_0, VAR_1, &VAR_3) <= 0) {
  return 0;
 }
 FUNC_1(VAR_4, sizeof(VAR_4), "%u.%u.%u.%u.in-addr.arpa",
  (unsigned)((uint8_t*)&VAR_3)[3], (unsigned)((uint8_t*)&VAR_3)[2],
  (unsigned)((uint8_t*)&VAR_3)[1], (unsigned)((uint8_t*)&VAR_3)[0]);
 *VAR_2 = FUNC_2(VAR_4);
 return 1;
}
