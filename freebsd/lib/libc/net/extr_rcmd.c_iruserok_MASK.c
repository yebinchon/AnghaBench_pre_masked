
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_len; int sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int sin ;


 int VAR_0 ;
 int FUNC_0 (struct sockaddr*,int,int,char const*,char const*) ;
 int FUNC_1 (int *,unsigned long*,int) ;
 int FUNC_2 (struct sockaddr_in*,int ,int) ;

int
FUNC_3(unsigned long VAR_1, int VAR_2, const char *VAR_3, const char *VAR_4)
{
 struct sockaddr_in VAR_5;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.sin_family = VAR_0;
 VAR_5.sin_len = sizeof(struct sockaddr_in);
 FUNC_1(&VAR_5.sin_addr, &VAR_1, sizeof(VAR_5.sin_addr));
 return FUNC_0((struct sockaddr *)&VAR_5, VAR_5.sin_len, VAR_2,
  VAR_3, VAR_4);
}
