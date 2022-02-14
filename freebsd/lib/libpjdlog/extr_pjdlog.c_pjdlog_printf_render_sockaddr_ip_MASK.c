
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int ss_family; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct printf_info {int dummy; } ;
struct __printf_io {int dummy; } ;
typedef int addr ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct __printf_io*) ;
 int FUNC_3 (struct __printf_io*,struct printf_info const*,char*,int ) ;
 int VAR_2 ;
 int * FUNC_4 (int,int *,char*,int) ;
 int FUNC_5 (char*,int,char*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(struct __printf_io *VAR_3,
    const struct printf_info *VAR_4, const void * const *VAR_5)
{
 const struct sockaddr_storage *VAR_6;
 char VAR_7[FUNC_0(VAR_1, VAR_0)];
 int VAR_8;

 VAR_6 = *(const struct sockaddr_storage * const *)VAR_5[0];
 switch (VAR_6->ss_family) {
 case 129:
     {
  const struct sockaddr_in *VAR_9;

  VAR_9 = (const struct sockaddr_in *)VAR_6;
  if (FUNC_4(VAR_6->ss_family, &VAR_9->sin_addr, VAR_7,
      sizeof(VAR_7)) == ((void*)0)) {
   FUNC_1("inet_ntop(AF_INET) failed: %s.",
       FUNC_6(VAR_2));
  }
  break;
     }
 case 128:
     {
  const struct sockaddr_in6 *VAR_10;

  VAR_10 = (const struct sockaddr_in6 *)VAR_6;
  if (FUNC_4(VAR_6->ss_family, &VAR_10->sin6_addr, VAR_7,
      sizeof(VAR_7)) == ((void*)0)) {
   FUNC_1("inet_ntop(AF_INET6) failed: %s.",
       FUNC_6(VAR_2));
  }
  break;
     }
 default:
  FUNC_5(VAR_7, sizeof(VAR_7), "[unsupported family %hhu]",
      VAR_6->ss_family);
  break;
 }
 VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_7, FUNC_7(VAR_7));
 FUNC_2(VAR_3);
 return (VAR_8);
}
