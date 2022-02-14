
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_start_stop_unit {int how; } ;
struct cfumass_softc {int sc_current_status; } ;


 int FUNC_0 (struct cfumass_softc*,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct cfumass_softc*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_2 (struct cfumass_softc*,int ) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_3(struct cfumass_softc *VAR_5, unsigned char *VAR_6, int VAR_7)
{
 struct scsi_start_stop_unit *VAR_8;

 switch (VAR_6[0]) {
 case 128:







  if (VAR_7 < sizeof(*VAR_8)) {
   FUNC_0(VAR_5, "received START STOP UNIT with "
       "bCDBLength %d, should be %zd",
       VAR_7, sizeof(*VAR_8));
   break;
  }

  VAR_8 = (struct scsi_start_stop_unit *)VAR_6;
  if ((VAR_8->how & VAR_2) != 0)
   break;

  if ((VAR_8->how & VAR_3) != 0)
   break;

  if ((VAR_8->how & VAR_1) != 0)
   break;

  if (VAR_4 == 0) {
   break;
  } else if (VAR_4 == 1) {
   FUNC_1(VAR_5, "ignoring START STOP UNIT request");
  } else {
   FUNC_0(VAR_5, "ignoring START STOP UNIT request");
  }

  VAR_5->sc_current_status = 0;
  FUNC_2(VAR_5, VAR_0);

  return (1);
 default:
  break;
 }

 return (0);
}
