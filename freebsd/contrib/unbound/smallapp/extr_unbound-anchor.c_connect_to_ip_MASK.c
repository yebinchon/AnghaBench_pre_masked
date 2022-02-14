
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct ip_list {int len; int addr; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (char*,struct ip_list*) ;

__attribute__((used)) static int
FUNC_5(struct ip_list* VAR_3)
{
 int VAR_4;
 FUNC_4("connect to", VAR_3);
 VAR_4 = FUNC_3(VAR_3->len==(socklen_t)sizeof(struct sockaddr_in)?
  VAR_0:VAR_1, VAR_2, 0);
 if(VAR_4 == -1) {
  FUNC_2("socket");
  return -1;
 }
 if(FUNC_0(VAR_4, (struct sockaddr*)&VAR_3->addr, VAR_3->len) < 0) {
  FUNC_2("connect");
  FUNC_1(VAR_4);
  return -1;
 }
 return VAR_4;
}
