
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usock ;
struct sockaddr_un {unsigned int sun_len; int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,struct sockaddr*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,char const*,int) ;
 int FUNC_9 (int ,int ,int,int *,int ,char const*) ;
 scalar_t__ FUNC_10 (char const*) ;
 int FUNC_11 (int ,char*,char const*) ;

int
FUNC_12(const char *VAR_6, int* VAR_7, int VAR_8)
{
 (void)VAR_8;
 (void)VAR_6;
 FUNC_5("Local sockets are not supported");
 *VAR_7 = 1;
 return -1;

}
