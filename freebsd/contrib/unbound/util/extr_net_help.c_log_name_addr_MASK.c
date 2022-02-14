
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_port; int sin_addr; scalar_t__ sin_family; } ;
typedef scalar_t__ socklen_t ;
typedef enum verbosity_value { ____Placeholder_verbosity_value } verbosity_value ;
typedef int dest ;





 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int,void*,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int,char*,char const*,char*,char const*,char*,int,...) ;
 int VAR_1 ;

void FUNC_5(enum verbosity_value VAR_2, const char* VAR_3, uint8_t* VAR_4,
 struct sockaddr_storage* VAR_5, socklen_t VAR_6)
{
 uint16_t VAR_7;
 const char* VAR_8 = "unknown_family ";
 char VAR_9[VAR_0+1];
 char VAR_10[100];
 int VAR_11 = (int)((struct sockaddr_in*)VAR_5)->sin_family;
 void* VAR_12 = &((struct sockaddr_in*)VAR_5)->sin_addr;
 if(VAR_1 < VAR_2)
  return;
 switch(VAR_11) {
  case 130: VAR_8=""; break;
  case 129: VAR_8="";
   VAR_12 = &((struct sockaddr_in6*)VAR_5)->sin6_addr;
   break;
  case 128: VAR_8="local "; break;
  default: break;
 }
 if(FUNC_1(VAR_11, VAR_12, VAR_10, (socklen_t)sizeof(VAR_10)) == 0) {
  (void)FUNC_3(VAR_10, "(inet_ntop error)", sizeof(VAR_10));
 }
 VAR_10[sizeof(VAR_10)-1] = 0;
 VAR_7 = FUNC_2(((struct sockaddr_in*)VAR_5)->sin_port);
 FUNC_0(VAR_4, VAR_9);
 if(VAR_11 != 130 && VAR_11 != 129)
  FUNC_4(VAR_2, "%s <%s> %s%s#%d (addrlen %d)",
   VAR_3, VAR_9, VAR_8, VAR_10, (int)VAR_7, (int)VAR_6);
 else FUNC_4(VAR_2, "%s <%s> %s%s#%d",
   VAR_3, VAR_9, VAR_8, VAR_10, (int)VAR_7);
}
