
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct bcma_intr {int i_mapped; scalar_t__ i_irq; scalar_t__ i_busline; scalar_t__ i_sel; scalar_t__ i_bank; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct bcma_intr* FUNC_0 (int,int ,int ) ;

struct bcma_intr *
FUNC_1(uint8_t VAR_5, uint8_t VAR_6, uint8_t VAR_7)
{
 struct bcma_intr *VAR_8;

 if (VAR_5 >= VAR_0)
  return (((void*)0));

 if (VAR_6 >= VAR_2)
  return (((void*)0));

 if (VAR_7 >= VAR_1)
  return (((void*)0));

 VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_3, VAR_4);
 if (VAR_8 == ((void*)0))
  return (((void*)0));

 VAR_8->i_bank = VAR_5;
 VAR_8->i_sel = VAR_6;
 VAR_8->i_busline = VAR_7;
 VAR_8->i_mapped = 0;
 VAR_8->i_irq = 0;

 return (VAR_8);
}
