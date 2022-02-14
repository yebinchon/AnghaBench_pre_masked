
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct sockaddr_storage {scalar_t__ ss_len; } ;
struct sockaddr_in6 {void* sin6_port; void* sin6_family; int sin6_addr; } ;
struct sockaddr_in {void* sin_port; void* sin_family; int sin_addr; } ;
typedef int socklen_t ;
typedef void* in_port_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char const*) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (void*,char const*,int *) ;
 int FUNC_3 (struct sockaddr_storage*,int ,int) ;
 scalar_t__ FUNC_4 (char const*,char) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_3, in_port_t VAR_4, struct sockaddr_storage *VAR_5,
    socklen_t *VAR_6)
{
 int VAR_7;

 FUNC_3(VAR_5, 0, sizeof(*VAR_5));
 VAR_4 = FUNC_1(VAR_4);

 if (FUNC_4(VAR_3, ':')) {
  struct sockaddr_in6 *VAR_8 = (void *)VAR_5;
  VAR_7 = FUNC_2(VAR_1, VAR_3, &VAR_8->sin6_addr);
  VAR_8->sin6_family = VAR_1;
  *VAR_6 = sizeof(*VAR_8);
  VAR_8->sin6_port = VAR_4;
 } else {
  struct sockaddr_in *VAR_9 = (void *)VAR_5;
  VAR_7 = FUNC_2(VAR_0, VAR_3, &VAR_9->sin_addr);
  VAR_9->sin_family = VAR_0;
  *VAR_6 = sizeof(*VAR_9);
  VAR_9->sin_port = VAR_4;
 }



 if (VAR_7 == -1)
  FUNC_0(VAR_2, "Invalid address `%s'", VAR_3);
}
