
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_len; int sun_path; int sun_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sockaddr_un*) ;
 int FUNC_1 (int ,char const*,int) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 int * FUNC_3 (char const*,char*) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_2, struct sockaddr_un *VAR_3)
{

 if (VAR_2 == ((void*)0))
  return (-1);

 if (FUNC_2(VAR_2, "uds://", 6) == 0)
  VAR_2 += 6;
 else if (FUNC_2(VAR_2, "unix://", 7) == 0)
  VAR_2 += 7;
 else if (VAR_2[0] == '/' &&
     FUNC_3(VAR_2, "://") == ((void*)0))
  ;
 else
  return (-1);

 VAR_3->sun_family = VAR_0;
 if (FUNC_1(VAR_3->sun_path, VAR_2, sizeof(VAR_3->sun_path)) >=
     sizeof(VAR_3->sun_path)) {
  return (VAR_1);
 }




 return (0);
}
