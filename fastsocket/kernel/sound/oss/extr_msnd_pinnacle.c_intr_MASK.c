
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int irqreturn_t ;
typedef int WORD ;
struct TYPE_2__ {scalar_t__ DSPQ; scalar_t__ pwDSPQData; scalar_t__ io; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_6, void *VAR_7)
{

 FUNC_1(VAR_5.io + VAR_0);


 while (FUNC_2(VAR_5.DSPQ + VAR_4) != FUNC_2(VAR_5.DSPQ + VAR_2)) {
  register WORD VAR_8;

  FUNC_0(FUNC_2(VAR_5.pwDSPQData + 2*FUNC_2(VAR_5.DSPQ + VAR_2)));

  if ((VAR_8 = FUNC_2(VAR_5.DSPQ + VAR_2) + 1) > FUNC_2(VAR_5.DSPQ + VAR_3))
   FUNC_3(0, VAR_5.DSPQ + VAR_2);
  else
   FUNC_3(VAR_8, VAR_5.DSPQ + VAR_2);
 }
 return VAR_1;
}
