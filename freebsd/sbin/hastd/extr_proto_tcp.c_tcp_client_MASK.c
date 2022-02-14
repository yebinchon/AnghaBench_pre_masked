
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_ctx {int tc_fd; } ;
struct sockaddr_storage {int ss_len; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct sockaddr*,int ) ;
 int VAR_1 ;
 int FUNC_1 (char const*,int ,struct sockaddr_storage*) ;
 int FUNC_2 (struct tcp_ctx*) ;
 int FUNC_3 (char const*,int ,void**) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_2, const char *VAR_3, void **VAR_4)
{
 struct tcp_ctx *VAR_5;
 struct sockaddr_storage VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_3, VAR_0, VAR_4);
 if (VAR_7 != 0)
  return (VAR_7);
 VAR_5 = *VAR_4;
 if (VAR_2 == ((void*)0))
  return (0);
 VAR_7 = FUNC_1(VAR_2, 0, &VAR_6);
 if (VAR_7 != 0) {
  FUNC_2(VAR_5);
  return (VAR_7);
 }
 if (FUNC_0(VAR_5->tc_fd, (struct sockaddr *)&VAR_6, VAR_6.ss_len) == -1) {
  VAR_7 = VAR_1;
  FUNC_2(VAR_5);
  return (VAR_7);
 }
 return (0);
}
