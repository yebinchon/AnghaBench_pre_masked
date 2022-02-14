
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ppc_data {int ppc_avm; int ppc_dtm; int ppc_mode; } ;


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
 int FUNC_0 (struct ppc_data*,int ) ;

__attribute__((used)) static int
FUNC_1(struct ppc_data *VAR_10, int VAR_11)
{
 u_char VAR_12 = 0;


 if (VAR_11 && !(VAR_10->ppc_avm & VAR_11))
  return (VAR_0);


 if ((VAR_10->ppc_avm & VAR_1) || (VAR_10->ppc_dtm & VAR_1)) {




  FUNC_0(VAR_10, VAR_8);
  VAR_12 = VAR_4;

  if (VAR_11 & VAR_2)

   VAR_12 |= VAR_6;
  else if (VAR_11 & VAR_1)

   VAR_12 |= VAR_5;
  else if (VAR_11 & VAR_3)

   VAR_12 |= VAR_7;
  else

   VAR_12 |= VAR_9;

  FUNC_0(VAR_10, VAR_12);
 }

 VAR_10->ppc_mode = VAR_11;

 return (0);
}
