
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sun ;
struct uds_ctx {scalar_t__ uc_magic; int uc_fd; } ;
struct sockaddr_un {scalar_t__ sun_family; char* sun_path; } ;
struct sockaddr {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,struct sockaddr*,int*) ;
 scalar_t__ FUNC_3 (char*,size_t,char*,char*) ;
 size_t FUNC_4 (char*,char*,size_t) ;

__attribute__((used)) static void
FUNC_5(const void *VAR_2, char *VAR_3, size_t VAR_4)
{
 const struct uds_ctx *VAR_5 = VAR_2;
 struct sockaddr_un VAR_6;
 socklen_t VAR_7;

 FUNC_0(VAR_5 != ((void*)0));
 FUNC_0(VAR_5->uc_magic == VAR_1);
 FUNC_0(VAR_3 != ((void*)0));

 VAR_7 = sizeof(VAR_6);
 if (FUNC_2(VAR_5->uc_fd, (struct sockaddr *)&VAR_6, &VAR_7) == -1) {
  FUNC_1(FUNC_4(VAR_3, "N/A", VAR_4) < VAR_4);
  return;
 }
 FUNC_0(VAR_6.sun_family == VAR_0);
 if (VAR_6.sun_path[0] == '\0') {
  FUNC_1(FUNC_4(VAR_3, "N/A", VAR_4) < VAR_4);
  return;
 }
 FUNC_1(FUNC_3(VAR_3, VAR_4, "uds://%s", VAR_6.sun_path) < (ssize_t)VAR_4);
}
