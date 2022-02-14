
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int) ;
 int VAR_2 ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (struct sockaddr_un*,int ,int) ;
 int FUNC_4 (int ,int ,int ) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int ,char const*,int) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_3)
{
 int VAR_4;
 struct sockaddr_un VAR_5;

 VAR_4 = FUNC_4(VAR_0, VAR_1, 0);
 if (VAR_4 < 0)
  FUNC_2("socket: %.100s", FUNC_5(VAR_2));
 FUNC_3(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.sun_family = VAR_0;
 FUNC_6(VAR_5.sun_path, VAR_3, sizeof VAR_5.sun_path);
 if (FUNC_1(VAR_4, (struct sockaddr *)&VAR_5, sizeof(VAR_5)) == 0)
  return VAR_4;
 FUNC_0(VAR_4);
 FUNC_2("connect %.100s: %.100s", VAR_5.sun_path, FUNC_5(VAR_2));
 return -1;
}
