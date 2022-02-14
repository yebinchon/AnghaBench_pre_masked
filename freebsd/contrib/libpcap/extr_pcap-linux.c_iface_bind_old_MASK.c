
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
typedef int socklen_t ;
typedef int saddr ;
typedef int err ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,struct sockaddr*,int) ;
 int VAR_3 ;
 int FUNC_1 (int,int ,int ,int*,int*) ;
 int FUNC_2 (struct sockaddr*,int ,int) ;
 int FUNC_3 (char*,int ,int,char*) ;
 int FUNC_4 (int ,char const*,int) ;

__attribute__((used)) static int
FUNC_5(int VAR_4, const char *VAR_5, char *VAR_6)
{
 struct sockaddr VAR_7;
 int VAR_8;
 socklen_t VAR_9 = sizeof(VAR_8);

 FUNC_2(&VAR_7, 0, sizeof(VAR_7));
 FUNC_4(VAR_7.sa_data, VAR_5, sizeof(VAR_7.sa_data));
 if (FUNC_0(VAR_4, &VAR_7, sizeof(VAR_7)) == -1) {
  FUNC_3(VAR_6, VAR_0,
      VAR_3, "bind");
  return -1;
 }



 if (FUNC_1(VAR_4, VAR_1, VAR_2, &VAR_8, &VAR_9) == -1) {
  FUNC_3(VAR_6, VAR_0,
      VAR_3, "getsockopt");
  return -1;
 }

 if (VAR_8 > 0) {
  FUNC_3(VAR_6, VAR_0,
      VAR_8, "bind");
  return -1;
 }

 return 0;
}
