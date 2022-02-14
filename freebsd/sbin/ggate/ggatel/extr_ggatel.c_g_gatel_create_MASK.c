
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_gate_ctl_create {int gctl_unit; int gctl_info; scalar_t__ gctl_maxcount; int gctl_flags; int gctl_timeout; scalar_t__ gctl_sectorsize; int gctl_mediasize; int gctl_version; } ;
typedef int ggioc ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_6 ;
 int FUNC_1 (int ,struct g_gate_ctl_create*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct g_gate_ctl_create*,int ,int) ;
 int FUNC_7 (int ,int) ;
 int VAR_7 ;
 int FUNC_8 (char*,char*,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_9 (int ,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_10(void)
{
 struct g_gate_ctl_create VAR_11;
 int VAR_12;

 VAR_12 = FUNC_7(VAR_7, FUNC_3(VAR_6) | VAR_4 | VAR_5);
 if (VAR_12 == -1)
  FUNC_0(VAR_0, "Cannot open %s", VAR_7);
 FUNC_6(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.gctl_version = VAR_3;
 VAR_11.gctl_unit = VAR_10;
 VAR_11.gctl_mediasize = FUNC_2(VAR_12);
 if (VAR_8 == 0)
  VAR_8 = FUNC_4(VAR_12);
 VAR_11.gctl_sectorsize = VAR_8;
 VAR_11.gctl_timeout = VAR_9;
 VAR_11.gctl_flags = VAR_6;
 VAR_11.gctl_maxcount = 0;
 FUNC_9(VAR_11.gctl_info, VAR_7, sizeof(VAR_11.gctl_info));
 FUNC_1(VAR_1, &VAR_11);
 if (VAR_10 == -1)
  FUNC_8("%s%u\n", VAR_2, VAR_11.gctl_unit);
 VAR_10 = VAR_11.gctl_unit;
 FUNC_5(VAR_12);
}
