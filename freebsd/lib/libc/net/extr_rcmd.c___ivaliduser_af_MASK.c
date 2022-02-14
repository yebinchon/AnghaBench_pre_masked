
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int sin6_family; int sin6_len; int sin6_addr; } ;
struct sockaddr_in {int sin_family; int sin_len; int sin_addr; } ;
struct sockaddr {int sa_len; } ;
typedef int ss ;
typedef int FILE ;




 int FUNC_0 (int *,struct sockaddr*,int ,char const*,char const*) ;
 int FUNC_1 (int *,void const*,int) ;
 int FUNC_2 (struct sockaddr_storage*,int ,int) ;

int
FUNC_3(FILE *VAR_0, const void *VAR_1, const char *VAR_2,
    const char *VAR_3, int VAR_4, int VAR_5)
{
 struct sockaddr *VAR_6 = ((void*)0);
 struct sockaddr_in *VAR_7 = ((void*)0);



 struct sockaddr_storage VAR_8;

 FUNC_2(&VAR_8, 0, sizeof(VAR_8));
 switch (VAR_4) {
 case 129:
  if (VAR_5 != sizeof(VAR_7->sin_addr))
   return -1;
  VAR_7 = (struct sockaddr_in *)&VAR_8;
  VAR_7->sin_family = 129;
  VAR_7->sin_len = sizeof(struct sockaddr_in);
  FUNC_1(&VAR_7->sin_addr, VAR_1, sizeof(VAR_7->sin_addr));
  break;
 default:
  return -1;
 }

 VAR_6 = (struct sockaddr *)&VAR_8;
 return FUNC_0(VAR_0, VAR_6, VAR_6->sa_len, VAR_2, VAR_3);
}
