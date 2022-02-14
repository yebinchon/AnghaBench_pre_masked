
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int ispsoftc_t ;
struct TYPE_3__ {int * portname; int portid; } ;
typedef TYPE_1__ isp_pdb_t ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int *,int,scalar_t__,TYPE_1__*) ;
 int FUNC_2 (int *,int,char*,int,...) ;

__attribute__((used)) static void
FUNC_3(ispsoftc_t *VAR_4, int VAR_5)
{
 isp_pdb_t VAR_6;
 uint16_t VAR_7, VAR_8;

 FUNC_2(VAR_4, VAR_1|VAR_0, "Chan %d chip port dump", VAR_5);
 if (FUNC_0(VAR_4)) {
  VAR_7 = VAR_3;
 } else {
  VAR_7 = VAR_2;
 }
 for (VAR_8 = 0; VAR_8 != VAR_7; VAR_8++) {
  if (FUNC_1(VAR_4, VAR_5, VAR_8, &VAR_6)) {
   continue;
  }
  FUNC_2(VAR_4, VAR_1|VAR_0, "Chan %d Handle 0x%04x "
      "PortID 0x%06x WWPN 0x%02x%02x%02x%02x%02x%02x%02x%02x",
      VAR_5, VAR_8, VAR_6.portid, VAR_6.portname[0], VAR_6.portname[1],
      VAR_6.portname[2], VAR_6.portname[3], VAR_6.portname[4],
      VAR_6.portname[5], VAR_6.portname[6], VAR_6.portname[7]);
 }
}
