
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_ctx {scalar_t__ tc_magic; int tc_fd; } ;
struct sockaddr_storage {int ss_family; scalar_t__ ss_len; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int sa2 ;




 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,struct sockaddr*,int*) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char const*,int ,struct sockaddr_storage*) ;

__attribute__((used)) static bool
FUNC_6(const void *VAR_1, const char *VAR_2)
{
 const struct tcp_ctx *VAR_3 = VAR_1;
 struct sockaddr_storage VAR_4, VAR_5;
 socklen_t VAR_6;

 FUNC_0(VAR_3 != ((void*)0));
 FUNC_0(VAR_3->tc_magic == VAR_0);

 if (FUNC_5(VAR_2, FUNC_1(FUNC_4("tcp:port")), &VAR_4) != 0)
  return (0);

 VAR_6 = sizeof(VAR_5);
 if (FUNC_2(VAR_3->tc_fd, (struct sockaddr *)&VAR_5, &VAR_6) < 0)
  return (0);

 if (VAR_4 != VAR_5)
  return (0);






 switch (VAR_4) {
 case 129:
     {
  struct sockaddr_in *VAR_7, *VAR_8;

  VAR_7 = (struct sockaddr_in *)&VAR_4;
  VAR_8 = (struct sockaddr_in *)&VAR_5;

  return (FUNC_3(&VAR_7->sin_addr, &VAR_8->sin_addr,
      sizeof(VAR_7->sin_addr)) == 0);
     }
 case 128:
     {
  struct sockaddr_in6 *VAR_9, *VAR_10;

  VAR_9 = (struct sockaddr_in6 *)&VAR_4;
  VAR_10 = (struct sockaddr_in6 *)&VAR_5;

  return (FUNC_3(&VAR_9->sin6_addr, &VAR_10->sin6_addr,
      sizeof(VAR_9->sin6_addr)) == 0);
     }
 default:
  return (0);
 }
}
