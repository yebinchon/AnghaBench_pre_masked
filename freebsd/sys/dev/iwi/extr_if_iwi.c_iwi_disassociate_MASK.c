
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwi_associate {int chan; int bssid; int type; } ;
struct iwi_softc {int flags; struct iwi_associate assoc; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct iwi_softc*,int ) ;
 int FUNC_2 (struct iwi_softc*,int ,struct iwi_associate*,int) ;

__attribute__((used)) static int
FUNC_3(struct iwi_softc *VAR_5, int VAR_6)
{
 struct iwi_associate *VAR_7 = &VAR_5->assoc;

 if ((VAR_5->flags & VAR_1) == 0) {
  FUNC_0(("Not associated\n"));
  return (-1);
 }

 FUNC_1(VAR_5, VAR_2);

 if (VAR_6)
  VAR_7->type = VAR_4;
 else
  VAR_7->type = VAR_3;

 FUNC_0(("Trying to disassociate from %6D channel %u\n",
     VAR_7->bssid, ":", VAR_7->chan));
 return FUNC_2(VAR_5, VAR_0, VAR_7, sizeof *VAR_7);
}
