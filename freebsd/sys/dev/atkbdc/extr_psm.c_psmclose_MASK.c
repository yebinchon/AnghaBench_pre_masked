
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psm_softc {int state; int kbdc; int unit; int callout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int*,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;

__attribute__((used)) static int
FUNC_11(struct psm_softc *VAR_12)
{
 int VAR_13[3];
 int VAR_14;
 int VAR_15;


 if (!FUNC_6(VAR_12->kbdc, VAR_11))
  return (VAR_0);


 VAR_15 = FUNC_9();
 VAR_14 = FUNC_3(VAR_12->kbdc);
 if (VAR_14 == -1) {
  FUNC_6(VAR_12->kbdc, VAR_1);
  FUNC_10(VAR_15);
  return (VAR_0);
 }


 if (!FUNC_8(VAR_12->kbdc,
     FUNC_5(VAR_12->kbdc),
     VAR_5 | VAR_4 |
     VAR_6 | VAR_2)) {
  FUNC_7(VAR_9,
      "psm%d: failed to disable the aux int (psmclose).\n",
      VAR_12->unit);






 }
 FUNC_10(VAR_15);


 FUNC_0(&VAR_12->callout);


 FUNC_2(VAR_12->kbdc, 10);


 if (VAR_12->state & VAR_10) {
  if (!FUNC_1(VAR_12->kbdc)) {






   FUNC_7(VAR_9,
       "psm%d: failed to disable the device (psmclose).\n",
       VAR_12->unit);
  }

  if (FUNC_4(VAR_12->kbdc, VAR_13, 0, 3) < 3)
   FUNC_7(VAR_8,
       "psm%d: failed to get status (psmclose).\n",
       VAR_12->unit);
 }

 if (!FUNC_8(VAR_12->kbdc,
     FUNC_5(VAR_12->kbdc),
     (VAR_14 & VAR_7) |
     VAR_3 | VAR_2)) {




  FUNC_7(VAR_9,
      "psm%d: failed to disable the aux port (psmclose).\n",
      VAR_12->unit);
 }


 FUNC_2(VAR_12->kbdc, 10);


 FUNC_6(VAR_12->kbdc, VAR_1);
 return (0);
}
