
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char**) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;

__attribute__((used)) static int
FUNC_7(char **VAR_3)
{
 char VAR_4[80];
 char *VAR_5;
 int VAR_6;

 FUNC_6();

 FUNC_5("\nLoader variables:\n");
 FUNC_2("vfs.root.mountfrom");
 FUNC_2("vfs.root.mountfrom.options");

 FUNC_5("\nManual root filesystem specification:\n");
 FUNC_5("  <fstype>:<device> [options]\n");
 FUNC_5("      Mount <device> using filesystem <fstype>\n");
 FUNC_5("      and with the specified (optional) option list.\n");
 FUNC_5("\n");
 FUNC_5("    eg. ufs:/dev/da0s1a\n");
 FUNC_5("        zfs:zroot/ROOT/default\n");
 FUNC_5("        cd9660:/dev/cd0 ro\n");
 FUNC_5("          (which is equivalent to: ");
 FUNC_5("mount -t cd9660 -o ro /dev/cd0 /)\n");
 FUNC_5("\n");
 FUNC_5("  ?               List valid disk boot devices\n");
 FUNC_5("  .               Yield 1 second (for background tasks)\n");
 FUNC_5("  <empty line>    Abort manual input\n");

 do {
  VAR_6 = VAR_0;
  FUNC_5("\nmountroot> ");
  FUNC_0(VAR_4, sizeof(VAR_4), VAR_1);
  if (VAR_4[0] == '\0')
   break;
  if (VAR_4[0] == '?' && VAR_4[1] == '\0') {
   FUNC_5("\nList of GEOM managed disk devices:\n  ");
   FUNC_1();
   continue;
  }
  if (VAR_4[0] == '.' && VAR_4[1] == '\0') {
   FUNC_4("rmask", VAR_2);
   continue;
  }
  VAR_5 = VAR_4;
  VAR_6 = FUNC_3(&VAR_5);
  if (VAR_6 == -1)
   FUNC_5("Invalid file system specification.\n");
 } while (VAR_6 != 0);

 return (VAR_6);
}
