
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int const) ;
 int* FUNC_2 (int *,int const*,char*,int const*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(netdissect_options *VAR_2,
             const u_char *VAR_3, int VAR_4, const u_char *VAR_5, int VAR_6)
{
    const u_char *VAR_7 = VAR_5 + VAR_6;
    int VAR_8;

    FUNC_1(VAR_5[0]);
    VAR_8 = VAR_5[0];

    FUNC_2(VAR_2, VAR_3, "BROWSE PACKET\n|Param ", VAR_3+VAR_4, VAR_1);

    switch (VAR_8) {
    case 0xF:
 VAR_5 = FUNC_2(VAR_2, VAR_5,
     "BROWSE PACKET:\nType=[B] (LocalMasterAnnouncement)\nUpdateCount=[w]\nRes1=[B]\nAnnounceInterval=[d]\nName=[n2]\nMajorVersion=[B]\nMinorVersion=[B]\nServerType=[W]\nElectionVersion=[w]\nBrowserConstant=[w]\n",
     VAR_7, VAR_1);
 break;

    case 0x1:
 VAR_5 = FUNC_2(VAR_2, VAR_5,
     "BROWSE PACKET:\nType=[B] (HostAnnouncement)\nUpdateCount=[w]\nRes1=[B]\nAnnounceInterval=[d]\nName=[n2]\nMajorVersion=[B]\nMinorVersion=[B]\nServerType=[W]\nElectionVersion=[w]\nBrowserConstant=[w]\n",
     VAR_7, VAR_1);
 break;

    case 0x2:
 VAR_5 = FUNC_2(VAR_2, VAR_5,
     "BROWSE PACKET:\nType=[B] (AnnouncementRequest)\nFlags=[B]\nReplySystemName=[S]\n",
     VAR_7, VAR_1);
 break;

    case 0xc:
 VAR_5 = FUNC_2(VAR_2, VAR_5,
     "BROWSE PACKET:\nType=[B] (WorkgroupAnnouncement)\nUpdateCount=[w]\nRes1=[B]\nAnnounceInterval=[d]\nName=[n2]\nMajorVersion=[B]\nMinorVersion=[B]\nServerType=[W]\nCommentPointer=[W]\nServerName=[S]\n",
     VAR_7, VAR_1);
 break;

    case 0x8:
 VAR_5 = FUNC_2(VAR_2, VAR_5,
     "BROWSE PACKET:\nType=[B] (ElectionFrame)\nElectionVersion=[B]\nOSSummary=[W]\nUptime=[(W, W)]\nServerName=[S]\n",
     VAR_7, VAR_1);
 break;

    case 0xb:
 VAR_5 = FUNC_2(VAR_2, VAR_5,
     "BROWSE PACKET:\nType=[B] (BecomeBackupBrowser)\nName=[S]\n",
     VAR_7, VAR_1);
 break;

    case 0x9:
 VAR_5 = FUNC_2(VAR_2, VAR_5,
     "BROWSE PACKET:\nType=[B] (GetBackupList)\nListCount?=[B]\nToken=[W]\n",
     VAR_7, VAR_1);
 break;

    case 0xa:
 VAR_5 = FUNC_2(VAR_2, VAR_5,
     "BROWSE PACKET:\nType=[B] (BackupListResponse)\nServerCount?=[B]\nToken=[W]\n*Name=[S]\n",
     VAR_7, VAR_1);
 break;

    case 0xd:
 VAR_5 = FUNC_2(VAR_2, VAR_5,
     "BROWSE PACKET:\nType=[B] (MasterAnnouncement)\nMasterName=[S]\n",
     VAR_7, VAR_1);
 break;

    case 0xe:
 VAR_5 = FUNC_2(VAR_2, VAR_5,
     "BROWSE PACKET:\nType=[B] (ResetBrowser)\nOptions=[B]\n", VAR_7, VAR_1);
 break;

    default:
 VAR_5 = FUNC_2(VAR_2, VAR_5, "Unknown Browser Frame ", VAR_7, VAR_1);
 break;
    }
    return;
trunc:
    FUNC_0((VAR_2, "%s", VAR_0));
}
