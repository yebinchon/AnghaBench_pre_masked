
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scb {int flags; TYPE_1__* hscb; } ;
struct ahc_softc {int dummy; } ;
struct ahc_devinfo {int dummy; } ;
typedef int role_t ;
struct TYPE_2__ {int scsiid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ahc_softc*,struct scb*) ;
 int FUNC_1 (struct scb*) ;
 int FUNC_2 (struct ahc_softc*,struct scb*) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ahc_devinfo*,int,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct ahc_softc *VAR_3, struct ahc_devinfo *VAR_4,
  struct scb *VAR_5)
{
 role_t VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_5->hscb->scsiid);
 VAR_6 = VAR_0;
 if ((VAR_5->flags & VAR_2) != 0)
  VAR_6 = VAR_1;
 FUNC_4(VAR_4, VAR_7, FUNC_2(VAR_3, VAR_5),
       FUNC_1(VAR_5), FUNC_0(VAR_3, VAR_5), VAR_6);
}
