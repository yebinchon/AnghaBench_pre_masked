
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc_data {int ppc_type; int ppc_dtm; int ppc_avm; int ppc_model; int ppc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct ppc_data*) ;
 int FUNC_2 (struct ppc_data*,int) ;
 int FUNC_3 (struct ppc_data*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct ppc_data*) ;
 int FUNC_6 (struct ppc_data*,int) ;

__attribute__((used)) static int
FUNC_7(struct ppc_data *VAR_10, int VAR_11)
{

 VAR_10->ppc_type = VAR_7;

 if (VAR_9)
  FUNC_0(VAR_10->ppc_dev, "SPP");


 FUNC_6(VAR_10, VAR_5);
 if ((FUNC_5(VAR_10) & 0xe0) == VAR_5) {
  VAR_10->ppc_dtm |= VAR_0 | VAR_3;
  if (VAR_9)
   FUNC_4(" ECP ");


  FUNC_6(VAR_10, VAR_4);
 }


 if (FUNC_1(VAR_10)) {
  VAR_10->ppc_dtm |= VAR_1;

  if (VAR_10->ppc_dtm & VAR_0) {

   VAR_10->ppc_model = VAR_8;
   VAR_10->ppc_type = 128;

   if (VAR_9)
    FUNC_4(" ECP+EPP");
  } else {
   if (VAR_9)
    FUNC_4(" EPP");
  }
 } else {

  FUNC_6(VAR_10, VAR_6);
 }


 VAR_10->ppc_dtm |= VAR_2;

 if (VAR_11)
  VAR_10->ppc_avm = VAR_11;
 else
  VAR_10->ppc_avm = VAR_10->ppc_dtm;

 if (VAR_9)
  FUNC_4("\n");

 switch (VAR_10->ppc_type) {
 case 128:
  FUNC_3(VAR_10, VAR_11);
  break;
 default:
  FUNC_2(VAR_10, VAR_11);
  break;
 }

 return (VAR_11);
}
