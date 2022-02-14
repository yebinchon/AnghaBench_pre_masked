
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct adb_mouse_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int,struct adb_mouse_softc*,int ,int ,char*,char*) ;
 int FUNC_1 (struct sysctl_oid*) ;
 size_t FUNC_2 (int ,int,int*) ;
 int VAR_3 ;
 int FUNC_3 (int ,int,int,int*) ;
 struct adb_mouse_softc* FUNC_4 (int ) ;
 struct sysctl_ctx_list* FUNC_5 (int ) ;
 struct sysctl_oid* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_8(device_t VAR_4)
{
 struct adb_mouse_softc *VAR_5;
 struct sysctl_ctx_list *VAR_6;
 struct sysctl_oid *VAR_7;

 size_t VAR_8;
 u_char VAR_9[8];
 u_char VAR_10[8];

 VAR_5 = FUNC_4(VAR_4);

 VAR_8 = FUNC_2(VAR_4, 1, VAR_9);


 if (VAR_8 != 8)
  return;

 if((VAR_9[6] != 0x0d))
 {
  VAR_9[6] = 0x0d;

  FUNC_3(VAR_4, 1, 8, VAR_9);

  VAR_8 = FUNC_2(VAR_4, 1, VAR_9);

  if (VAR_9[6] != 0x0d)
  {
   FUNC_7(VAR_4, "ADB Mouse = 0x%x "
          "(non-Extended Mode)\n", VAR_9[6]);
   return;
  } else {
   FUNC_7(VAR_4, "ADB Mouse = 0x%x "
          "(Extended Mode)\n", VAR_9[6]);



   VAR_10[0] = 0x19;
   VAR_10[1] = 0x94;
   VAR_10[2] = 0x19;
   VAR_10[3] = 0xff;
   VAR_10[4] = 0xb2;
   VAR_10[5] = 0x8a;
   VAR_10[6] = 0x1b;

   VAR_10[7] = 0x57;

   FUNC_3(VAR_4, 2, 8, VAR_10);

  }
 }




 VAR_6 = FUNC_5(VAR_4);
 VAR_7 = FUNC_6(VAR_4);
 FUNC_0(VAR_6, FUNC_1(VAR_7), VAR_2, "tapping",
   VAR_1 | VAR_0, VAR_5, 0, VAR_3,
   "I", "Tapping the pad causes button events");
 return;
}
