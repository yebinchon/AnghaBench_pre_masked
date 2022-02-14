
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ppc_data {int ppc_avm; scalar_t__ ppc_dmachan; int ppc_dmacnt; int ppc_mode; void* ppc_dmastat; int ppc_lock; scalar_t__ ppc_dmaddr; scalar_t__ ppc_dmaflags; int ppc_irqstat; } ;
typedef int device_t ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_1 (struct ppc_data*) ;
 char VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 char VAR_10 ;
 char VAR_11 ;
 char VAR_12 ;
 char VAR_13 ;
 char VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 char VAR_17 ;
 struct ppc_data* FUNC_2 (int ) ;
 int VAR_18 ;
 int FUNC_3 (scalar_t__,scalar_t__,int,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__,int,scalar_t__) ;
 int FUNC_5 (struct ppc_data*,int *,int,char*,int) ;
 int FUNC_6 (char*,...) ;
 char FUNC_7 (struct ppc_data*) ;
 int FUNC_8 (struct ppc_data*) ;
 int FUNC_9 (struct ppc_data*,char) ;
 int FUNC_10 (struct ppc_data*,char) ;

int
FUNC_11(device_t VAR_19, char *VAR_20, int VAR_21, int VAR_22)
{
 struct ppc_data *VAR_23 = FUNC_2(VAR_19);
 char VAR_24, VAR_25, VAR_26, VAR_27;
 int VAR_28 = 0;
 int VAR_29;

 FUNC_1(VAR_23);
 if (!(VAR_23->ppc_avm & 128))
  return (VAR_1);
 if (VAR_23->ppc_dmachan == 0)
  return (VAR_1);





 VAR_25 = FUNC_8(VAR_23);
 VAR_27 = FUNC_7(VAR_23);






 VAR_24 = VAR_13 | VAR_6;
 FUNC_10(VAR_23, VAR_24);


 VAR_26 = FUNC_7(VAR_23);
 VAR_26 &= ~VAR_3;
 FUNC_9(VAR_23, VAR_26);

 VAR_23->ppc_dmaflags = 0;
 VAR_23->ppc_dmaddr = (caddr_t)VAR_20;
 VAR_23->ppc_dmacnt = (u_int)VAR_21;

 switch (VAR_23->ppc_mode) {
 case 129:

  VAR_24 = VAR_11 | VAR_6 | VAR_14;
  break;
 case 128:
  VAR_24 = VAR_10 | VAR_6 | VAR_14;
  break;
 default:
  VAR_28 = VAR_1;
  goto error;
 }

 FUNC_10(VAR_23, VAR_24);
 VAR_24 = FUNC_8(VAR_23);

 VAR_23->ppc_dmastat = VAR_7;


 VAR_24 &= ~VAR_17;
 VAR_23->ppc_irqstat = VAR_16;
 FUNC_10(VAR_23, VAR_24);

 FUNC_4(VAR_23->ppc_dmaflags, VAR_23->ppc_dmaddr, VAR_23->ppc_dmacnt,
       VAR_23->ppc_dmachan);
 VAR_23->ppc_dmastat = VAR_9;
 do {

  VAR_28 = FUNC_5(VAR_23, &VAR_23->ppc_lock, VAR_5 | VAR_4,
      "ppcdma", 0);
 } while (VAR_28 == VAR_2);

 if (VAR_28) {




  FUNC_3(VAR_23->ppc_dmaflags, VAR_23->ppc_dmaddr,
       VAR_23->ppc_dmacnt, VAR_23->ppc_dmachan);


  FUNC_10(VAR_23, VAR_12);

  VAR_23->ppc_dmastat = VAR_8;
  goto error;
 }


 while (!(FUNC_8(VAR_23) & VAR_15)) {

  for (VAR_29=100; VAR_29; VAR_29--)
   if (FUNC_8(VAR_23) & VAR_15)
    goto fifo_empty;



  VAR_28 = FUNC_5(VAR_23, &VAR_23->ppc_lock, VAR_5 | VAR_4,
      "ppcfifo", VAR_18 / 100);
  if (VAR_28 != VAR_2) {




   FUNC_10(VAR_23, VAR_12);

   VAR_23->ppc_dmastat = VAR_8;
   VAR_28 = VAR_0;
   goto error;
  }
 }

fifo_empty:

 FUNC_10(VAR_23, VAR_12);

error:





 FUNC_0(1);

 FUNC_10(VAR_23, VAR_25);
 FUNC_9(VAR_23, VAR_27);
 return (VAR_28);
}
