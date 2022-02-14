
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sockaddr_un*,int ,int) ;
 int FUNC_3 (int ,char const*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(const char *VAR_3)
{
 struct sockaddr_un VAR_4;
 int VAR_5;

 VAR_5 = FUNC_5(VAR_1, VAR_2, 0);
 if (VAR_5 < 0) {
  FUNC_4("socket(PF_UNIX)");
  return -1;
 }

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.sun_family = VAR_0;
 FUNC_3(VAR_4.sun_path, VAR_3, sizeof(VAR_4.sun_path));
 if (FUNC_0(VAR_5, (struct sockaddr *) &VAR_4, sizeof(VAR_4)) < 0) {
  FUNC_4("hlr-auc-gw: bind(PF_UNIX)");
  FUNC_1(VAR_5);
  return -1;
 }

 return VAR_5;
}
