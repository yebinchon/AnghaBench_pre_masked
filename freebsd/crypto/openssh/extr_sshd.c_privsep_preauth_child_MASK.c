
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
typedef scalar_t__ gid_t ;
struct TYPE_5__ {scalar_t__ gss_authentication; } ;
struct TYPE_4__ {scalar_t__ pw_gid; scalar_t__ pw_uid; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 (char*,int ,...) ;
 TYPE_3__ VAR_2 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 () ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int,scalar_t__*) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11(void)
{
 gid_t VAR_5[1];


 FUNC_6();







 FUNC_7();


 FUNC_3();


 if (VAR_3) {

  if (FUNC_1(VAR_0) == -1)
   FUNC_4("chroot(\"%s\"): %s", VAR_0,
       FUNC_10(VAR_1));
  if (FUNC_0("/") == -1)
   FUNC_4("chdir(\"/\"): %s", FUNC_10(VAR_1));


  FUNC_2("privsep user:group %u:%u", (u_int)VAR_4->pw_uid,
      (u_int)VAR_4->pw_gid);
  VAR_5[0] = VAR_4->pw_gid;
  if (FUNC_8(1, VAR_5) < 0)
   FUNC_4("setgroups: %.100s", FUNC_10(VAR_1));
  FUNC_5(VAR_4);
 }
}
