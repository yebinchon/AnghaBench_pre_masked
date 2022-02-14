
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plistref {int pref_plist; } ;
typedef int prop_dictionary_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 () ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ,struct plistref*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int ,struct plistref*) ;
 int FUNC_10 (char*,int ,int ) ;

int
FUNC_11(void) {
 int VAR_2;
 int VAR_3;
 prop_dictionary_t VAR_4, VAR_5;
 struct plistref VAR_6;
 char *VAR_7;

 VAR_3 = 0;

 VAR_3 = FUNC_7();
 if (VAR_3 != 0)
  FUNC_1(1, "Rump init failed");

 VAR_2 = FUNC_10("/dev/mapper/control", VAR_1, 0);
 if (VAR_2 == -1)
  FUNC_1(1, "Open dm device failed");

 VAR_4 = FUNC_6("dm_version_cmd.plist");
 VAR_5 = FUNC_2();

 FUNC_4(VAR_4, &VAR_6);

 VAR_3 = FUNC_9(VAR_2, VAR_0, &VAR_6);
 if (VAR_3 < 0)
  FUNC_1(1, "Dm control ioctl failed");

 VAR_5 = FUNC_5(VAR_6.pref_plist);

 VAR_7 = FUNC_3(VAR_5);
 FUNC_0(VAR_7);

 FUNC_8(VAR_2);

 return VAR_3;
}
