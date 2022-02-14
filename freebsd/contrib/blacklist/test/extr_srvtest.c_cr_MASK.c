
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct sockaddr_storage {scalar_t__ ss_len; } ;
struct sockaddr_in6 {void* sin6_port; int sin6_family; } ;
struct sockaddr_in {int sin_family; void* sin_port; } ;
typedef int ss ;
typedef int socklen_t ;
typedef void* in_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,void const*,int) ;
 int FUNC_1 (int,char*) ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct sockaddr_storage*,int ,int) ;
 int FUNC_5 (int ,int,int ) ;

__attribute__((used)) static int
FUNC_6(int VAR_5, int VAR_6, in_port_t VAR_7)
{
 int VAR_8;
 struct sockaddr_storage VAR_9;
 socklen_t VAR_10;
 VAR_8 = FUNC_5(VAR_5 == VAR_0 ? VAR_2 : VAR_3, VAR_6, 0);
 if (VAR_8 == -1)
  FUNC_1(1, "socket");

 VAR_7 = FUNC_2(VAR_7);
 FUNC_4(&VAR_9, 0, sizeof(VAR_9));
 if (VAR_5 == VAR_0) {
  struct sockaddr_in *VAR_11 = (void *)&VAR_9;
  VAR_11->sin_family = VAR_0;
  VAR_10 = sizeof(*VAR_11);
  VAR_11->sin_port = VAR_7;
 } else {
  struct sockaddr_in6 *VAR_12 = (void *)&VAR_9;
  VAR_12->sin6_family = VAR_1;
  VAR_10 = sizeof(*VAR_12);
  VAR_12->sin6_port = VAR_7;
 }




 if (FUNC_0(VAR_8, (const void *)&VAR_9, VAR_10) == -1)
  FUNC_1(1, "bind");

 if (VAR_6 != VAR_4)
  if (FUNC_3(VAR_8, 5) == -1)
   FUNC_1(1, "listen");
 return VAR_8;
}
