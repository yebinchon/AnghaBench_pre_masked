
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_addr; int sin_family; } ;
struct ether_header {int dummy; } ;
typedef int sin ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char*,int,int ,struct sockaddr_in*,int) ;

int FUNC_4(int VAR_1, char *VAR_2, int VAR_3)
{
 struct ether_header *VAR_4;
 struct sockaddr_in VAR_5;

 VAR_4 = (struct ether_header *)VAR_2;
 FUNC_1((char *)&VAR_5, sizeof(VAR_5));
 VAR_5.sin_family = VAR_0;
 VAR_2 += 14;
 VAR_3 -= 14;
 FUNC_0(VAR_2 + 12, (char *)&VAR_5.sin_addr, 4);

 if (FUNC_3(VAR_1, VAR_2, VAR_3, 0, &VAR_5, sizeof(VAR_5)) == -1)
     {
  FUNC_2("send");
  return -1;
     }

 return VAR_3;
}
