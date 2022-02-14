
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_ctx {scalar_t__ tc_magic; int tc_fd; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int socklen_t ;
typedef int sa ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,struct sockaddr*,int*) ;
 scalar_t__ FUNC_3 (char*,size_t,char*,struct sockaddr_storage*) ;
 size_t FUNC_4 (char*,char*,size_t) ;

__attribute__((used)) static void
FUNC_5(const void *VAR_1, char *VAR_2, size_t VAR_3)
{
 const struct tcp_ctx *VAR_4 = VAR_1;
 struct sockaddr_storage VAR_5;
 socklen_t VAR_6;

 FUNC_0(VAR_4 != ((void*)0));
 FUNC_0(VAR_4->tc_magic == VAR_0);

 VAR_6 = sizeof(VAR_5);
 if (FUNC_2(VAR_4->tc_fd, (struct sockaddr *)&VAR_5, &VAR_6) == -1) {
  FUNC_1(FUNC_4(VAR_2, "N/A", VAR_3) < VAR_3);
  return;
 }
 FUNC_1(FUNC_3(VAR_2, VAR_3, "tcp://%S", &VAR_5) < (ssize_t)VAR_3);
}
