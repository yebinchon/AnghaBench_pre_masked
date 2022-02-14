
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int optval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,struct sockaddr const*,int) ;
 int FUNC_1 (char*,int ) ;
 int VAR_3 ;
 int FUNC_2 (int,int ,int ,int*,int*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int*) ;

__attribute__((used)) static int
FUNC_7(int VAR_4, const struct sockaddr *VAR_5,
    socklen_t VAR_6, int *VAR_7)
{
 int VAR_8 = 0;
 socklen_t VAR_9 = sizeof(VAR_8);


 if (*VAR_7 <= 0)
  return FUNC_0(VAR_4, VAR_5, VAR_6);

 FUNC_3(VAR_4);
 if (FUNC_0(VAR_4, VAR_5, VAR_6) == 0) {

  FUNC_5(VAR_4);
  return 0;
 } else if (VAR_3 != VAR_0)
  return -1;

 if (FUNC_6(VAR_4, VAR_7) == -1)
  return -1;


 if (FUNC_2(VAR_4, VAR_1, VAR_2, &VAR_8, &VAR_9) == -1) {
  FUNC_1("getsockopt: %s", FUNC_4(VAR_3));
  return -1;
 }
 if (VAR_8 != 0) {
  VAR_3 = VAR_8;
  return -1;
 }
 FUNC_5(VAR_4);
 return 0;
}
