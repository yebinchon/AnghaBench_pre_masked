
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_port; int sin_addr; scalar_t__ sin_family; } ;
typedef scalar_t__ socklen_t ;
typedef int dest ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,void*,char*,scalar_t__) ;
 int FUNC_1 (char*,char const*,char const*,char*,int,...) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int) ;
 int VAR_1 ;

void FUNC_4(const char* VAR_2, const char* VAR_3,
 struct sockaddr_storage* VAR_4, socklen_t VAR_5)
{
 uint16_t VAR_6;
 char VAR_7[100];
 int VAR_8 = (int)((struct sockaddr_in*)VAR_4)->sin_family;
 void* VAR_9 = &((struct sockaddr_in*)VAR_4)->sin_addr;
 if(VAR_8 == VAR_0)
  VAR_9 = &((struct sockaddr_in6*)VAR_4)->sin6_addr;
 if(FUNC_0(VAR_8, VAR_9, VAR_7, (socklen_t)sizeof(VAR_7)) == 0) {
  (void)FUNC_3(VAR_7, "(inet_ntop error)", sizeof(VAR_7));
 }
 VAR_7[sizeof(VAR_7)-1] = 0;
 VAR_6 = FUNC_2(((struct sockaddr_in*)VAR_4)->sin_port);
 if(VAR_1 >= 4)
  FUNC_1("%s: %s for %s port %d (len %d)", VAR_2, VAR_3, VAR_7,
   (int)VAR_6, (int)VAR_5);
 else FUNC_1("%s: %s for %s port %d", VAR_2, VAR_3, VAR_7, (int)VAR_6);
}
