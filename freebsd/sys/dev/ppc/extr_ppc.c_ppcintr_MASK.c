
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ppc_data {scalar_t__ (* ppc_intr_hook ) (int ) ;int ppc_mode; int ppc_irqstat; int ppc_avm; scalar_t__ ppc_dmastat; int (* ppc_dmadone ) (struct ppc_data*) ;int ppc_intr_arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ppc_data*) ;
 int VAR_8 ;
 int FUNC_1 (struct ppc_data*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct ppc_data*) ;
 int FUNC_4 (struct ppc_data*) ;
 int FUNC_5 (struct ppc_data*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct ppc_data*) ;
 int FUNC_8 (struct ppc_data*,int) ;
 int FUNC_9 (struct ppc_data*) ;

__attribute__((used)) static void
FUNC_10(void *VAR_11)
{
 struct ppc_data *VAR_12 = VAR_11;
 u_char VAR_13, VAR_14, VAR_15;
 FUNC_0(VAR_12);
 if (VAR_12->ppc_intr_hook != ((void*)0) &&
     VAR_12->ppc_intr_hook(VAR_12->ppc_intr_arg) == 0) {
  FUNC_1(VAR_12);
  return;
 }

 VAR_15 = FUNC_5(VAR_12);
 VAR_13 = FUNC_3(VAR_12);
 VAR_14 = FUNC_4(VAR_12);






 if (VAR_13 & VAR_0) {
  FUNC_1(VAR_12);
  return;
 }



 if ((VAR_15 & VAR_10) && (VAR_12->ppc_mode & VAR_1)) {


  if (VAR_12->ppc_irqstat & VAR_7) {

   FUNC_8(VAR_12, VAR_14 | VAR_9);
   VAR_12->ppc_irqstat &= ~VAR_7;
  } else {

   FUNC_1(VAR_12);
   return;
  }
 }

 if (VAR_12->ppc_irqstat & VAR_5) {

  FUNC_8(VAR_12, VAR_14 | VAR_8);
  VAR_12->ppc_irqstat &= ~VAR_5;
  VAR_14 = FUNC_4(VAR_12);


  if ((VAR_12->ppc_avm & VAR_1) && (VAR_14 & VAR_4)) {




   FUNC_8(VAR_12, VAR_14 & ~VAR_4);
   VAR_14 = FUNC_4(VAR_12);

   if (VAR_12->ppc_dmastat == VAR_3) {



    VAR_12->ppc_dmadone(VAR_12);
    VAR_12->ppc_dmastat = VAR_2;


    FUNC_9(VAR_12);
   }
  }
 } else if (VAR_12->ppc_irqstat & VAR_6) {


  VAR_12->ppc_irqstat &= ~VAR_6;
 }
 FUNC_1(VAR_12);

 return;
}
