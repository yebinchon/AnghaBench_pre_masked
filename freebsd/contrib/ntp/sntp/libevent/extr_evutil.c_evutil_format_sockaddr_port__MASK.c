
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_port; int sin6_addr; } ;
struct sockaddr_in {int sin_port; int sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
typedef int b ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (scalar_t__,int *,char*,int) ;
 int FUNC_1 (char*,size_t,char*,...) ;
 int FUNC_2 (int ) ;

const char *
FUNC_3(const struct sockaddr *VAR_2, char *VAR_3, size_t VAR_4)
{
 char VAR_5[128];
 const char *VAR_6=((void*)0);
 int VAR_7;
 if (VAR_2->sa_family == VAR_0) {
  const struct sockaddr_in *VAR_8 = (const struct sockaddr_in*)VAR_2;
  VAR_6 = FUNC_0(VAR_0, &VAR_8->sin_addr,VAR_5,sizeof(VAR_5));
  VAR_7 = FUNC_2(VAR_8->sin_port);
  if (VAR_6) {
   FUNC_1(VAR_3, VAR_4, "%s:%d", VAR_5, VAR_7);
   return VAR_3;
  }
 } else if (VAR_2->sa_family == VAR_1) {
  const struct sockaddr_in6 *VAR_9 = (const struct sockaddr_in6*)VAR_2;
  VAR_6 = FUNC_0(VAR_1, &VAR_9->sin6_addr,VAR_5,sizeof(VAR_5));
  VAR_7 = FUNC_2(VAR_9->sin6_port);
  if (VAR_6) {
   FUNC_1(VAR_3, VAR_4, "[%s]:%d", VAR_5, VAR_7);
   return VAR_3;
  }
 }

 FUNC_1(VAR_3, VAR_4, "<addr with socktype %d>",
     (int)VAR_2->sa_family);
 return VAR_3;
}
