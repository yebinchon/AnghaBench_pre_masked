
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_port; int sin_addr; scalar_t__ sin_family; } ;
typedef scalar_t__ socklen_t ;
typedef enum verbosity_value { ____Placeholder_verbosity_value } verbosity_value ;
typedef int dest ;





 scalar_t__ FUNC_0 (int,void*,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int,char*,char const*,char const*,...) ;
 int VAR_0 ;

void
FUNC_4(enum verbosity_value VAR_1, const char* VAR_2,
 struct sockaddr_storage* VAR_3, socklen_t VAR_4)
{
 uint16_t VAR_5;
 const char* VAR_6 = "unknown";
 char VAR_7[100];
 int VAR_8 = (int)((struct sockaddr_in*)VAR_3)->sin_family;
 void* VAR_9 = &((struct sockaddr_in*)VAR_3)->sin_addr;
 if(VAR_0 < VAR_1)
  return;
 switch(VAR_8) {
  case 130: VAR_6="ip4"; break;
  case 129: VAR_6="ip6";
   VAR_9 = &((struct sockaddr_in6*)VAR_3)->sin6_addr;
   break;
  case 128:
   VAR_7[0]=0;
   (void)FUNC_0(VAR_8, VAR_9, VAR_7,
    (socklen_t)sizeof(VAR_7));
   FUNC_3(VAR_1, "%s local %s", VAR_2, VAR_7);
   return;
  default: break;
 }
 if(FUNC_0(VAR_8, VAR_9, VAR_7, (socklen_t)sizeof(VAR_7)) == 0) {
  (void)FUNC_2(VAR_7, "(inet_ntop error)", sizeof(VAR_7));
 }
 VAR_7[sizeof(VAR_7)-1] = 0;
 VAR_5 = FUNC_1(((struct sockaddr_in*)VAR_3)->sin_port);
 if(VAR_0 >= 4)
  FUNC_3(VAR_1, "%s %s %s port %d (len %d)", VAR_2, VAR_6, VAR_7,
   (int)VAR_5, (int)VAR_4);
 else FUNC_3(VAR_1, "%s %s port %d", VAR_2, VAR_7, (int)VAR_5);
}
