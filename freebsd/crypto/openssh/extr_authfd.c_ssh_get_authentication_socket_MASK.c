
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sunaddr ;
struct sockaddr_un {int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int) ;
 int VAR_7 ;
 int FUNC_2 (int,int ,int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (struct sockaddr_un*,int ,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,char const*,int) ;

int
FUNC_7(int *VAR_8)
{
 const char *VAR_9;
 int VAR_10, VAR_11;
 struct sockaddr_un VAR_12;

 if (VAR_8 != ((void*)0))
  *VAR_8 = -1;

 VAR_9 = FUNC_3(VAR_4);
 if (!VAR_9)
  return VAR_5;

 FUNC_4(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.sun_family = VAR_0;
 FUNC_6(VAR_12.sun_path, VAR_9, sizeof(VAR_12.sun_path));

 if ((VAR_10 = FUNC_5(VAR_0, VAR_3, 0)) < 0)
  return VAR_6;


 if (FUNC_2(VAR_10, VAR_2, VAR_1) == -1 ||
     FUNC_1(VAR_10, (struct sockaddr *)&VAR_12, sizeof(VAR_12)) < 0) {
  VAR_11 = VAR_7;
  FUNC_0(VAR_10);
  VAR_7 = VAR_11;
  return VAR_6;
 }
 if (VAR_8 != ((void*)0))
  *VAR_8 = VAR_10;
 else
  FUNC_0(VAR_10);
 return 0;
}
