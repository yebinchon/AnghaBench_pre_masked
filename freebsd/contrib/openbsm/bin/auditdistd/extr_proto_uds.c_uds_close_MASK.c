
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* sun_path; } ;
struct uds_ctx {scalar_t__ uc_magic; scalar_t__ uc_fd; scalar_t__ uc_side; scalar_t__ uc_owner; TYPE_1__ uc_sun; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct uds_ctx*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_3)
{
 struct uds_ctx *VAR_4 = VAR_3;

 FUNC_0(VAR_4 != ((void*)0));
 FUNC_0(VAR_4->uc_magic == VAR_1);

 if (VAR_4->uc_fd >= 0)
  FUNC_1(VAR_4->uc_fd);




 if (VAR_4->uc_side == VAR_2 &&
     VAR_4->uc_owner == FUNC_3()) {
  FUNC_0(VAR_4->uc_sun.sun_path[0] != '\0');
  if (FUNC_5(VAR_4->uc_sun.sun_path) == -1) {
   FUNC_4(VAR_0,
       "Unable to unlink socket file %s",
       VAR_4->uc_sun.sun_path);
  }
 }
 VAR_4->uc_owner = 0;
 VAR_4->uc_magic = 0;
 FUNC_2(VAR_4);
}
