
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct ata_params {int config; int satacapabilities; int version_major; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ata_params*,struct sbuf*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sbuf*,char*,...) ;

void
FUNC_3(struct ata_params *VAR_5, struct sbuf *VAR_6)
{
 const char *VAR_7, *VAR_8;
 int VAR_9;

 FUNC_0(VAR_5, VAR_6);
 FUNC_2(VAR_6, " ");

 VAR_7 = (VAR_5->config == VAR_1) ? "CFA" :
  (VAR_5->config & VAR_0) ? "ATAPI" : "ATA";
 VAR_9 = FUNC_1(VAR_5->version_major);

 switch (VAR_9) {
 case 0:
  FUNC_2(VAR_6, "%s", VAR_7);
  break;
 case 1:
 case 2:
 case 3:
 case 4:
 case 5:
 case 6:
 case 7:
  FUNC_2(VAR_6, "%s-%d", VAR_7, VAR_9);
  break;
 case 8:
  FUNC_2(VAR_6, "%s8-ACS", VAR_7);
  break;
 default:
  FUNC_2(VAR_6, "ACS-%d %s", VAR_9 - 7, VAR_7);
  break;
 }

 if (VAR_5->satacapabilities && VAR_5->satacapabilities != 0xffff) {
  if (VAR_5->satacapabilities & VAR_4)
   VAR_8 = " SATA 3.x";
  else if (VAR_5->satacapabilities & VAR_3)
   VAR_8 = " SATA 2.x";
  else if (VAR_5->satacapabilities & VAR_2)
   VAR_8 = " SATA 1.x";
  else
   VAR_8 = " SATA";
 } else
  VAR_8 = "";
 FUNC_2(VAR_6, "%s device\n", VAR_8);
}
