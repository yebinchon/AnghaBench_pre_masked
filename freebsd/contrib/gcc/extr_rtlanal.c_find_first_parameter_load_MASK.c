
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parms_set_data {int nregs; int regs; } ;
typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_12 (scalar_t__,int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ,int ,struct parms_set_data*) ;
 int VAR_2 ;

rtx
FUNC_15 (rtx VAR_3, rtx VAR_4)
{
  struct parms_set_data VAR_5;
  rtx VAR_6, VAR_7, VAR_8;




  FUNC_2 (VAR_5.regs);
  VAR_5.nregs = 0;
  for (VAR_6 = FUNC_0 (VAR_3); VAR_6; VAR_6 = FUNC_12 (VAR_6, 1))
    if (FUNC_4 (FUNC_12 (VAR_6, 0)) == VAR_1
 && FUNC_10 (FUNC_12 (FUNC_12 (VAR_6, 0), 0)))
      {
 FUNC_13 (FUNC_9 (FUNC_12 (FUNC_12 (VAR_6, 0), 0)) < VAR_0);



 if (!FUNC_3 (FUNC_9 (FUNC_12 (FUNC_12 (VAR_6, 0), 0))))
   continue;

 FUNC_11 (VAR_5.regs, FUNC_9 (FUNC_12 (FUNC_12 (VAR_6, 0), 0)));
 VAR_5.nregs++;
      }
  VAR_7 = VAR_3;
  VAR_8 = VAR_3;


  while (VAR_5.nregs && VAR_7 != VAR_4)
    {
      VAR_7 = FUNC_8 (VAR_7);



      if (FUNC_1 (VAR_7))
 break;





      if (FUNC_6 (VAR_7))
 {
   FUNC_13 (VAR_7 == VAR_4);
   break;
 }

      if (FUNC_5 (VAR_7))
 {
   int VAR_9 = VAR_5.nregs;
   FUNC_14 (FUNC_7 (VAR_7), VAR_2, &VAR_5);




   if (VAR_9 != VAR_5.nregs)
     VAR_8 = VAR_7;
   else
     break;
 }
    }
  return VAR_8;
}
