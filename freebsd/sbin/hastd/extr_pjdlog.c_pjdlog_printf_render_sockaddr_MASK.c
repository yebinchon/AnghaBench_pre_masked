
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int ss_family; } ;
struct sockaddr_in6 {int sin6_addr; int sin6_port; } ;
struct sockaddr_in {int sin_addr; int sin_port; } ;
struct printf_info {int dummy; } ;
struct __printf_io {int dummy; } ;
typedef int buf ;
typedef int addr ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct __printf_io*) ;
 int FUNC_2 (struct __printf_io*,struct printf_info const*,char*,int ) ;
 int VAR_2 ;
 int * FUNC_3 (int,int *,char*,int) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (char*,int,char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(struct __printf_io *VAR_3,
    const struct printf_info *VAR_4, const void * const *VAR_5)
{
 const struct sockaddr_storage *VAR_6;
 char VAR_7[64];
 int VAR_8;

 VAR_6 = *(const struct sockaddr_storage * const *)VAR_5[0];
 switch (VAR_6->ss_family) {
 case 129:
     {
  char VAR_9[VAR_1];
  const struct sockaddr_in *VAR_10;
  unsigned int VAR_11;

  VAR_10 = (const struct sockaddr_in *)VAR_6;
  VAR_11 = FUNC_4(VAR_10->sin_port);
  if (FUNC_3(VAR_6->ss_family, &VAR_10->sin_addr, VAR_9,
      sizeof(VAR_9)) == ((void*)0)) {
   FUNC_0("inet_ntop(AF_INET) failed: %s.",
       FUNC_6(VAR_2));
  }
  FUNC_5(VAR_7, sizeof(VAR_7), "%s:%u", VAR_9, VAR_11);
  break;
     }
 case 128:
     {
  char VAR_12[VAR_0];
  const struct sockaddr_in6 *VAR_13;
  unsigned int VAR_14;

  VAR_13 = (const struct sockaddr_in6 *)VAR_6;
  VAR_14 = FUNC_4(VAR_13->sin6_port);
  if (FUNC_3(VAR_6->ss_family, &VAR_13->sin6_addr, VAR_12,
      sizeof(VAR_12)) == ((void*)0)) {
   FUNC_0("inet_ntop(AF_INET6) failed: %s.",
       FUNC_6(VAR_2));
  }
  FUNC_5(VAR_7, sizeof(VAR_7), "[%s]:%u", VAR_12, VAR_14);
  break;
     }
 default:
  FUNC_5(VAR_7, sizeof(VAR_7), "[unsupported family %hhu]",
      VAR_6->ss_family);
  break;
 }
 VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_7, FUNC_7(VAR_7));
 FUNC_1(VAR_3);
 return (VAR_8);
}
