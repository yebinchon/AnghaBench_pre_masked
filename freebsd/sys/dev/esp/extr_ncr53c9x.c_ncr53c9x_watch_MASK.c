
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct ncr53c9x_tinfo {int luns; int ** lun; } ;
struct ncr53c9x_softc {int sc_ntarg; int sc_watchdog; struct ncr53c9x_tinfo* sc_tinfo; } ;
struct ncr53c9x_linfo {scalar_t__ last_used; scalar_t__ used; size_t lun; int * untagged; } ;


 struct ncr53c9x_linfo* FUNC_0 (int *) ;
 struct ncr53c9x_linfo* FUNC_1 (struct ncr53c9x_linfo*,int ) ;
 int FUNC_2 (struct ncr53c9x_linfo*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct ncr53c9x_softc*,int ) ;
 size_t VAR_2 ;
 int FUNC_4 (int *,int,void (*) (void*),struct ncr53c9x_softc*) ;
 int FUNC_5 (struct ncr53c9x_linfo*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_6(void *VAR_6)
{
 struct ncr53c9x_softc *VAR_7 = VAR_6;
 struct ncr53c9x_linfo *VAR_8;
 struct ncr53c9x_tinfo *VAR_9;
 time_t VAR_10;
 int VAR_11;

 FUNC_3(VAR_7, VAR_0);


 VAR_10 = VAR_5 - (10 * 60);

 for (VAR_11 = 0; VAR_11 < VAR_7->sc_ntarg; VAR_11++) {
  VAR_9 = &VAR_7->sc_tinfo[VAR_11];
  VAR_8 = FUNC_0(&VAR_9->luns);
  while (VAR_8) {
   if (VAR_8->last_used < VAR_10 &&
       VAR_8->untagged == ((void*)0) &&
       VAR_8->used == 0) {
    if (VAR_8->lun < VAR_2)
     VAR_9->lun[VAR_8->lun] = ((void*)0);
    FUNC_2(VAR_8, VAR_4);
    FUNC_5(VAR_8, VAR_1);

    VAR_8 = FUNC_0(&VAR_9->luns);
    continue;
   }
   VAR_8 = FUNC_1(VAR_8, VAR_4);
  }
 }
 FUNC_4(&VAR_7->sc_watchdog, 60 * VAR_3, FUNC_6, VAR_7);
}
