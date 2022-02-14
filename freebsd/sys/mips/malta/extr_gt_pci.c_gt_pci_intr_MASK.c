
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_event {int ie_handlers; } ;
struct gt_pci_softc {int sc_ioh_icu1; int sc_st; int sc_ioh_icu2; struct intr_event** sc_eventstab; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int) ;
 int FUNC_5 (struct intr_event*,int *) ;

__attribute__((used)) static int
FUNC_6(void *VAR_9)
{
 struct gt_pci_softc *VAR_10 = VAR_9;
 struct intr_event *VAR_11;
 int VAR_12;

 for (;;) {
  FUNC_4(VAR_10->sc_st, VAR_10->sc_ioh_icu1, VAR_8,
      VAR_6 | VAR_4);
  VAR_12 = FUNC_3(VAR_10->sc_st, VAR_10->sc_ioh_icu1, VAR_8);
  if ((VAR_12 & VAR_5) == 0)
  {
   return VAR_0;
  }

  VAR_12 = FUNC_2(VAR_12);

  if (VAR_12 == 2) {
   FUNC_4(VAR_10->sc_st, VAR_10->sc_ioh_icu2,
       VAR_8, VAR_6 | VAR_4);
   VAR_12 = FUNC_3(VAR_10->sc_st, VAR_10->sc_ioh_icu2,
       VAR_8);
   if (VAR_12 & VAR_5)
    VAR_12 = FUNC_2(VAR_12) + 8;
   else
    VAR_12 = 2;
  }

  VAR_11 = VAR_10->sc_eventstab[VAR_12];

  if (!VAR_11 || FUNC_0(&VAR_11->ie_handlers))
   continue;


  FUNC_5(VAR_11, ((void*)0));



  if (VAR_12 > 7) {
   FUNC_4(VAR_10->sc_st, VAR_10->sc_ioh_icu2,
       VAR_7, VAR_2 | VAR_1 | VAR_3 |
       FUNC_1(VAR_12 & 7));
   VAR_12 = 2;
  }

  FUNC_4(VAR_10->sc_st, VAR_10->sc_ioh_icu1, VAR_7,
      VAR_2 | VAR_1 | VAR_3 | FUNC_1(VAR_12));
 }

 return VAR_0;
}
