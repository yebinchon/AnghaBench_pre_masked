
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sun_path; } ;
struct uds_ctx {int uc_fd; int uc_owner; TYPE_1__ uc_sun; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct sockaddr*,int) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct uds_ctx*) ;
 int FUNC_4 (char const*,void**,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_2, void **VAR_3)
{
 struct uds_ctx *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_4(VAR_2, VAR_3, VAR_0);
 if (VAR_5 != 0)
  return (VAR_5);

 VAR_4 = *VAR_3;

 (void)FUNC_5(VAR_4->uc_sun.sun_path);
 if (FUNC_0(VAR_4->uc_fd, (struct sockaddr *)&VAR_4->uc_sun,
     sizeof(VAR_4->uc_sun)) == -1) {
  VAR_5 = VAR_1;
  FUNC_3(VAR_4);
  return (VAR_5);
 }
 VAR_4->uc_owner = FUNC_1();
 if (FUNC_2(VAR_4->uc_fd, 8) == -1) {
  VAR_5 = VAR_1;
  FUNC_3(VAR_4);
  return (VAR_5);
 }

 return (0);
}
