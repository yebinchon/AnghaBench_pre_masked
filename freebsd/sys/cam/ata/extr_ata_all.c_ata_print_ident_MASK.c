
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_params {int config; int satacapabilities; int version_major; } ;
typedef int sata ;
typedef int ata ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ata_params*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (char*,int,char*,...) ;

void
FUNC_4(struct ata_params *VAR_5)
{
 const char *VAR_6;
 char VAR_7[12], VAR_8[12];

 FUNC_0(VAR_5);

 VAR_6 = (VAR_5->config == VAR_1) ? "CFA" :
  (VAR_5->config & VAR_0) ? "ATAPI" : "ATA";
 if (FUNC_1(VAR_5->version_major) == 0) {
  FUNC_3(VAR_7, sizeof(VAR_7), "%s", VAR_6);
 } else if (FUNC_1(VAR_5->version_major) <= 7) {
  FUNC_3(VAR_7, sizeof(VAR_7), "%s-%d", VAR_6,
      FUNC_1(VAR_5->version_major));
 } else if (FUNC_1(VAR_5->version_major) == 8) {
  FUNC_3(VAR_7, sizeof(VAR_7), "%s8-ACS", VAR_6);
 } else {
  FUNC_3(VAR_7, sizeof(VAR_7), "ACS-%d %s",
      FUNC_1(VAR_5->version_major) - 7, VAR_6);
 }
 if (VAR_5->satacapabilities && VAR_5->satacapabilities != 0xffff) {
  if (VAR_5->satacapabilities & VAR_4)
   FUNC_3(VAR_8, sizeof(VAR_8), " SATA 3.x");
  else if (VAR_5->satacapabilities & VAR_3)
   FUNC_3(VAR_8, sizeof(VAR_8), " SATA 2.x");
  else if (VAR_5->satacapabilities & VAR_2)
   FUNC_3(VAR_8, sizeof(VAR_8), " SATA 1.x");
  else
   FUNC_3(VAR_8, sizeof(VAR_8), " SATA");
 } else
  VAR_8[0] = 0;
 FUNC_2(" %s%s device\n", VAR_7, VAR_8);
}
