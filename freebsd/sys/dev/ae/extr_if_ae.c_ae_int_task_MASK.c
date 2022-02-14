
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct ifnet {int if_drv_flags; int if_snd; } ;
struct TYPE_9__ {int flags; struct ifnet* ifp; } ;
typedef TYPE_1__ ae_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int VAR_8 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct ifnet*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct ifnet*,char*,int) ;

__attribute__((used)) static void
FUNC_10(void *VAR_9, int VAR_10)
{
 ae_softc_t *VAR_11;
 struct ifnet *VAR_12;
 uint32_t VAR_13;

 VAR_11 = (ae_softc_t *)VAR_9;

 FUNC_0(VAR_11);

 VAR_12 = VAR_11->ifp;

 VAR_13 = FUNC_1(VAR_11, VAR_5);
 if (VAR_13 == 0) {
  FUNC_2(VAR_11);
  return;
 }




 FUNC_3(VAR_11, VAR_5, VAR_13 | VAR_1);





 if ((VAR_12->if_drv_flags & VAR_8) != 0) {
  if ((VAR_13 & (VAR_2 | VAR_3 |
      VAR_4)) != 0) {
   VAR_12->if_drv_flags &= ~VAR_8;
   FUNC_5(VAR_11);
   FUNC_2(VAR_11);
   return;
  }
  if ((VAR_13 & VAR_7) != 0)
   FUNC_8(VAR_11);
  if ((VAR_13 & VAR_6) != 0)
   FUNC_6(VAR_11);



  FUNC_3(VAR_11, VAR_5, 0);

  if ((VAR_11->flags & VAR_0) != 0) {
   if (!FUNC_4(&VAR_12->if_snd))
    FUNC_7(VAR_12);
  }
 }

 FUNC_2(VAR_11);
}
