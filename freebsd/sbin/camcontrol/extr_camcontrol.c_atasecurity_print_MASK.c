
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_params {int security_status; int master_passwd_revision; int enhanced_erase_time; int erase_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(struct ata_params *VAR_9)
{

 FUNC_1("\nSecurity Option           Value\n");
 if (VAR_8 & VAR_7) {
  FUNC_1("status                    %04x\n",
         VAR_9->security_status);
 }
 FUNC_1("supported                 %s\n",
  VAR_9->security_status & VAR_6 ? "yes" : "no");
 if (!(VAR_9->security_status & VAR_6))
  return;
 FUNC_1("enabled                   %s\n",
  VAR_9->security_status & VAR_1 ? "yes" : "no");
 FUNC_1("drive locked              %s\n",
  VAR_9->security_status & VAR_5 ? "yes" : "no");
 FUNC_1("security config frozen    %s\n",
  VAR_9->security_status & VAR_3 ? "yes" : "no");
 FUNC_1("count expired             %s\n",
  VAR_9->security_status & VAR_0 ? "yes" : "no");
 FUNC_1("security level            %s\n",
  VAR_9->security_status & VAR_4 ? "maximum" : "high");
 FUNC_1("enhanced erase supported  %s\n",
  VAR_9->security_status & VAR_2 ? "yes" : "no");
 FUNC_1("erase time                ");
 FUNC_0(VAR_9->erase_time);
 FUNC_1("\n");
 FUNC_1("enhanced erase time       ");
 FUNC_0(VAR_9->enhanced_erase_time);
 FUNC_1("\n");
 FUNC_1("master password rev       %04x%s\n",
  VAR_9->master_passwd_revision,
  VAR_9->master_passwd_revision == 0x0000 ||
  VAR_9->master_passwd_revision == 0xFFFF ? " (unsupported)" : "");
}
