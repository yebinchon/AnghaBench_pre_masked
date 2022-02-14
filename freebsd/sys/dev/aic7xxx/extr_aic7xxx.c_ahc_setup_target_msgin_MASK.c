
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scb {int flags; } ;
struct ahc_softc {int msg_type; scalar_t__ msgout_index; scalar_t__ msgout_len; } ;
struct ahc_devinfo {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ahc_softc*,struct ahc_devinfo*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(struct ahc_softc *VAR_2, struct ahc_devinfo *VAR_3,
         struct scb *VAR_4)
{






 VAR_2->msgout_index = 0;
 VAR_2->msgout_len = 0;

 if (VAR_4 != ((void*)0) && (VAR_4->flags & VAR_1) != 0)
  FUNC_0(VAR_2, VAR_3);
 else
  FUNC_1("ahc_intr: AWAITING target message with no message");

 VAR_2->msgout_index = 0;
 VAR_2->msg_type = VAR_0;
}
