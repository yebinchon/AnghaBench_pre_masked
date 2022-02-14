
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int sin_addr; scalar_t__ sin_family; void* sin_port; int sin6_addr; scalar_t__ sin6_family; scalar_t__ sin6_scope_id; void* sin6_port; } ;
struct sockaddr_in {int sin_addr; scalar_t__ sin_family; void* sin_port; int sin6_addr; scalar_t__ sin6_family; scalar_t__ sin6_scope_id; void* sin6_port; } ;
typedef int socklen_t ;
typedef void* in_port_t ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int,char const*,int *) ;
 int FUNC_3 (struct sockaddr_in6*,int ,int ) ;
 scalar_t__ FUNC_4 (char const*) ;
 char* FUNC_5 (char const*,char) ;
 int FUNC_6 (char*,char const*,int) ;

int
FUNC_7(const char* VAR_3, int VAR_4, struct sockaddr_storage* VAR_5,
 socklen_t* VAR_6)
{
 uint16_t VAR_7;
 if(!VAR_3) return 0;
 VAR_7 = (uint16_t) VAR_4;
 if(FUNC_4(VAR_3)) {
  char VAR_8[VAR_2];
  char* VAR_9;
  struct sockaddr_in6* VAR_10 = (struct sockaddr_in6*)VAR_5;
  *VAR_6 = (socklen_t)sizeof(struct sockaddr_in6);
  FUNC_3(VAR_10, 0, *VAR_6);
  VAR_10->sin6_family = VAR_1;
  VAR_10->sin6_port = (in_port_t)FUNC_1(VAR_7);
  if((VAR_9=FUNC_5(VAR_3, '%'))) {
   if(VAR_9-VAR_3 >= VAR_2)
    return 0;
   (void)FUNC_6(VAR_8, VAR_3, sizeof(VAR_8));
   VAR_8[VAR_9-VAR_3]=0;
   VAR_10->sin6_scope_id = (uint32_t)FUNC_0(VAR_9+1);
   VAR_3 = VAR_8;
  }
  if(FUNC_2((int)VAR_10->sin6_family, VAR_3, &VAR_10->sin6_addr) <= 0) {
   return 0;
  }
 } else {
  struct sockaddr_in* VAR_11 = (struct sockaddr_in*)VAR_5;
  *VAR_6 = (socklen_t)sizeof(struct sockaddr_in);
  FUNC_3(VAR_11, 0, *VAR_6);
  VAR_11->sin_family = VAR_0;
  VAR_11->sin_port = (in_port_t)FUNC_1(VAR_7);
  if(FUNC_2((int)VAR_11->sin_family, VAR_3, &VAR_11->sin_addr) <= 0) {
   return 0;
  }
 }
 return 1;
}
