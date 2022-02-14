
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
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,struct sockaddr*,int*) ;
 int FUNC_2 (int *,int *,int) ;
 scalar_t__ FUNC_3 (char const*,int ,struct sockaddr_storage*) ;

__attribute__((used)) static bool
FUNC_4(const void *VAR_2, const char *VAR_3)
{
 const struct tcp_ctx *VAR_4 = VAR_2;
 struct sockaddr_storage VAR_5, VAR_6;
 socklen_t VAR_7;

 FUNC_0(VAR_4 != ((void*)0));
 FUNC_0(VAR_4->tc_magic == VAR_1);

 if (FUNC_3(VAR_3, VAR_0, &VAR_5) != 0)
  return (0);

 VAR_7 = sizeof(VAR_6);
 if (FUNC_1(VAR_4->tc_fd, (struct sockaddr *)&VAR_6, &VAR_7) == -1)
  return (0);

 if (VAR_5 != VAR_6 || VAR_5 != VAR_6)
  return (0);

 switch (VAR_5) {
 case 129:
     {
  struct sockaddr_in *VAR_8, *VAR_9;

  VAR_8 = (struct sockaddr_in *)&VAR_5;
  VAR_9 = (struct sockaddr_in *)&VAR_6;

  return (FUNC_2(&VAR_8->sin_addr, &VAR_9->sin_addr,
      sizeof(VAR_8->sin_addr)) == 0);
     }
 case 128:
     {
  struct sockaddr_in6 *VAR_10, *VAR_11;

  VAR_10 = (struct sockaddr_in6 *)&VAR_5;
  VAR_11 = (struct sockaddr_in6 *)&VAR_6;

  return (FUNC_2(&VAR_10->sin6_addr, &VAR_11->sin6_addr,
      sizeof(VAR_10->sin6_addr)) == 0);
     }
 default:
  return (0);
 }
}
