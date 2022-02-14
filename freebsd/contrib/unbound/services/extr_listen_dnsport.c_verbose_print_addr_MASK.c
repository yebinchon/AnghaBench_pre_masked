
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_port; int sin_addr; } ;
struct addrinfo {scalar_t__ ai_family; scalar_t__ ai_socktype; scalar_t__ ai_addr; } ;
typedef int socklen_t ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,void*,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (scalar_t__,char*,char*,char*,char*,int ) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_4(struct addrinfo *VAR_6)
{
 if(VAR_5 >= VAR_4) {
  char VAR_7[100];
  void* VAR_8 = &((struct sockaddr_in*)VAR_6->ai_addr)->sin_addr;





  if(FUNC_0(VAR_6->ai_family, VAR_8, VAR_7,
   (socklen_t)sizeof(VAR_7)) == 0) {
   (void)FUNC_2(VAR_7, "(null)", sizeof(VAR_7));
  }
  VAR_7[sizeof(VAR_7)-1] = 0;
  FUNC_3(VAR_4, "creating %s%s socket %s %d",
   VAR_6->ai_socktype==VAR_2?"udp":
   VAR_6->ai_socktype==VAR_3?"tcp":"otherproto",
   VAR_6->ai_family==VAR_0?"4":
   VAR_6->ai_family==VAR_1?"6":
   "_otherfam", VAR_7,
   FUNC_1(((struct sockaddr_in*)VAR_6->ai_addr)->sin_port));
 }
}
