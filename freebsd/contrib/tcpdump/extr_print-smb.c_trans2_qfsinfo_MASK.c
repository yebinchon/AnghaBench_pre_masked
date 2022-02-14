
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *,int const*,char const*,int const*,int ) ;
 int FUNC_4 (int *,int const*,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_5(netdissect_options *VAR_3,
               const u_char *VAR_4, const u_char *VAR_5, int VAR_6, int VAR_7)
{
    static int VAR_8 = 0;
    const char *VAR_9="";

    if (VAR_0) {
 FUNC_2(*VAR_4, 2);
 VAR_8 = FUNC_0(VAR_4);
 VAR_9 = "InfoLevel=[d]\n";
 FUNC_3(VAR_3, VAR_4, VAR_9, VAR_4 + VAR_6, VAR_2);
    } else {
 switch (VAR_8) {
 case 1:
     VAR_9 = "idFileSystem=[W]\nSectorUnit=[D]\nUnit=[D]\nAvail=[D]\nSectorSize=[d]\n";
     break;
 case 2:
     VAR_9 = "CreationTime=[T2]VolNameLength=[lb]\nVolumeLabel=[c]\n";
     break;
 case 0x105:
     VAR_9 = "Capabilities=[W]\nMaxFileLen=[D]\nVolNameLen=[lD]\nVolume=[C]\n";
     break;
 default:
     VAR_9 = "UnknownLevel\n";
     break;
 }
 FUNC_3(VAR_3, VAR_5, VAR_9, VAR_5 + VAR_7, VAR_2);
    }
    if (VAR_7) {
 FUNC_1((VAR_3, "data:\n"));
 FUNC_4(VAR_3, VAR_5, VAR_7);
    }
    return;
trunc:
    FUNC_1((VAR_3, "%s", VAR_1));
}
