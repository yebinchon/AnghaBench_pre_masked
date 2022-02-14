
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_gate_ctl_create {int gctl_unit; int gctl_info; int gctl_timeout; int gctl_maxcount; int gctl_flags; int gctl_sectorsize; int gctl_mediasize; int gctl_version; } ;
typedef int ggioc ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,struct g_gate_ctl_create*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 char* VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct g_gate_ctl_create*,int ,int) ;
 int FUNC_6 () ;
 char* VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (char*,char*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (int ,int,char*,char*,int,char*) ;
 int VAR_11 ;
 int FUNC_9 (int ) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_10(void)
{
 struct g_gate_ctl_create VAR_14;

 if (!FUNC_3())
  FUNC_2("Cannot connect: %s.", FUNC_9(VAR_3));




 FUNC_5(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.gctl_version = VAR_2;
 VAR_14.gctl_mediasize = VAR_6;
 VAR_14.gctl_sectorsize = VAR_10;
 VAR_14.gctl_flags = VAR_4;
 VAR_14.gctl_maxcount = VAR_9;
 VAR_14.gctl_timeout = VAR_12;
 VAR_14.gctl_unit = VAR_13;
 FUNC_8(VAR_14.gctl_info, sizeof(VAR_14.gctl_info), "%s:%u %s", VAR_5,
     VAR_8, VAR_7);
 FUNC_1(VAR_0, &VAR_14);
 if (VAR_13 == -1) {
  FUNC_7("%s%u\n", VAR_1, VAR_14.gctl_unit);
  FUNC_0(VAR_11);
 }
 VAR_13 = VAR_14.gctl_unit;

 FUNC_6();
 FUNC_4();
}
