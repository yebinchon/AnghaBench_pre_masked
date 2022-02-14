
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sockaddr_un*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int ) ;
 int VAR_5 ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (struct sockaddr_un*,int ,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,char*,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (int ) ;
 int VAR_7 ;

int
FUNC_8(char *VAR_8)
{
 struct sockaddr_un VAR_9;
 int VAR_10;

 if (VAR_6) {
  if ((VAR_10 = FUNC_7(VAR_7)) < 0)
   return (-1);
 } else {
  if ((VAR_10 = FUNC_5(VAR_0, VAR_4, 0)) < 0)
   return (-1);
 }
 (void)FUNC_3(VAR_10, VAR_3, VAR_2);

 FUNC_4(&VAR_9, 0, sizeof(struct sockaddr_un));
 VAR_9.sun_family = VAR_0;

 if (FUNC_6(VAR_9.sun_path, VAR_8, sizeof(VAR_9.sun_path)) >=
     sizeof(VAR_9.sun_path)) {
  FUNC_1(VAR_10);
  VAR_5 = VAR_1;
  return (-1);
 }
 if (FUNC_2(VAR_10, (struct sockaddr *)&VAR_9, FUNC_0(&VAR_9)) < 0) {
  FUNC_1(VAR_10);
  return (-1);
 }
 return (VAR_10);

}
