
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
 int FUNC_0 (struct sockaddr_un*) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int ) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (struct sockaddr_un*,int ,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,char*,int) ;
 scalar_t__ VAR_5 ;

int
FUNC_6(char *VAR_6)
{
 struct sockaddr_un VAR_7;
 int VAR_8;


 if ((VAR_8 = FUNC_4(VAR_0, VAR_5 ? VAR_2 : VAR_3,
      0)) < 0)
  return (-1);

 FUNC_3(&VAR_7, 0, sizeof(struct sockaddr_un));
 VAR_7.sun_family = VAR_0;

 if (FUNC_5(VAR_7.sun_path, VAR_6, sizeof(VAR_7.sun_path)) >=
     sizeof(VAR_7.sun_path)) {
  FUNC_2(VAR_8);
  VAR_4 = VAR_1;
  return (-1);
 }

 if (FUNC_1(VAR_8, (struct sockaddr *)&VAR_7, FUNC_0(&VAR_7)) < 0) {
  FUNC_2(VAR_8);
  return (-1);
 }
 return (VAR_8);
}
