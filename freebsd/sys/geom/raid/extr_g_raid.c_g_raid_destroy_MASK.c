
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_softc {int sc_stopping; int sc_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,struct g_raid_softc*,char*,...) ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct g_raid_softc*,int ,int ) ;
 int FUNC_2 (struct g_raid_softc*) ;
 int FUNC_3 () ;
 int VAR_7 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int*,int *,int,char*,int) ;
 int FUNC_6 (int *) ;

int
FUNC_7(struct g_raid_softc *VAR_8, int VAR_9)
{
 int VAR_10, VAR_11;

 FUNC_3();
 if (VAR_8 == ((void*)0))
  return (VAR_1);
 FUNC_4(&VAR_8->sc_lock, VAR_6);


 VAR_11 = FUNC_2(VAR_8);


 if (VAR_11 > 0) {
  switch (VAR_9) {
  case 128:
   FUNC_0(1, VAR_8,
       "%d volumes are still open.",
       VAR_11);
   FUNC_6(&VAR_8->sc_lock);
   return (VAR_0);
  case 130:
   FUNC_0(1, VAR_8,
       "Array will be destroyed on last close.");
   VAR_8->sc_stopping = 130;
   FUNC_6(&VAR_8->sc_lock);
   return (VAR_0);
  case 129:
   FUNC_0(1, VAR_8,
       "%d volumes are still open.",
       VAR_11);
  }
 }


 VAR_8->sc_stopping = 129;

 FUNC_1(VAR_8, VAR_3, 0);

 VAR_10 = FUNC_5(&VAR_8->sc_stopping, &VAR_8->sc_lock,
     VAR_5 | VAR_4, "r:destroy", VAR_7 * 3);
 return (VAR_10 == VAR_2 ? VAR_0 : 0);
}
