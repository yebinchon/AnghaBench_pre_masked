
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uds_ctx {scalar_t__ uc_magic; scalar_t__ uc_side; scalar_t__ uc_fd; int uc_sun; } ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__,struct sockaddr*,int) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(void *VAR_3, int VAR_4)
{
 struct uds_ctx *VAR_5 = VAR_3;

 FUNC_0(VAR_5 != ((void*)0));
 FUNC_0(VAR_5->uc_magic == VAR_0);
 FUNC_0(VAR_5->uc_side == VAR_1);
 FUNC_0(VAR_5->uc_fd >= 0);
 FUNC_0(VAR_4 >= -1);

 if (FUNC_1(VAR_5->uc_fd, (struct sockaddr *)&VAR_5->uc_sun,
     sizeof(VAR_5->uc_sun)) == -1) {
  return (VAR_2);
 }

 return (0);
}
