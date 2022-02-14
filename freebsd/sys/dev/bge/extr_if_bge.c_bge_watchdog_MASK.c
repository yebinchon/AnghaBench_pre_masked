
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bge_softc {scalar_t__ bge_timer; int bge_ifp; } ;
typedef int if_t ;


 int FUNC_0 (struct bge_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_1 (struct bge_softc*,int ) ;
 int FUNC_2 (struct bge_softc*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct bge_softc*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct bge_softc *VAR_9)
{
 if_t VAR_10;
 uint32_t VAR_11;

 FUNC_0(VAR_9);

 if (VAR_9->bge_timer == 0 || --VAR_9->bge_timer)
  return;


 if ((FUNC_1(VAR_9, VAR_4) & VAR_0) != 0) {
  VAR_11 = FUNC_1(VAR_9, VAR_5);
  if ((VAR_11 & VAR_3) != 0) {




   FUNC_2(VAR_9, VAR_5, VAR_11);
   VAR_9->bge_timer = VAR_6;
   return;
  } else if ((VAR_11 & VAR_1) != 0 &&
      (VAR_11 & VAR_2) != 0) {




   FUNC_2(VAR_9, VAR_5, VAR_11);
   VAR_9->bge_timer = VAR_6;
   return;
  }




 }

 VAR_10 = VAR_9->bge_ifp;

 FUNC_5(VAR_10, "watchdog timeout -- resetting\n");

 FUNC_6(VAR_10, 0, VAR_8);
 FUNC_3(VAR_9);

 FUNC_4(VAR_10, VAR_7, 1);
}
