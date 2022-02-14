
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct al_udma {scalar_t__ type; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (scalar_t__) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (struct al_udma*) ;
 int FUNC_2 (struct al_udma*) ;
 int FUNC_3 (struct al_udma*) ;
 int FUNC_4 (struct al_udma*) ;
 int FUNC_5 (struct al_udma*) ;
 int FUNC_6 (struct al_udma*,scalar_t__) ;
 int FUNC_7 (struct al_udma*) ;
 int FUNC_8 (struct al_udma*) ;
 int FUNC_9 (struct al_udma*) ;
 int FUNC_10 (struct al_udma*) ;
 int FUNC_11 (struct al_udma*) ;
 int FUNC_12 (struct al_udma*) ;
 int FUNC_13 (struct al_udma*) ;
 int FUNC_14 (struct al_udma*) ;
 int FUNC_15 (struct al_udma*,scalar_t__) ;
 int FUNC_16 (struct al_udma*) ;
 int FUNC_17 (struct al_udma*) ;
 int FUNC_18 (struct al_udma*) ;

void FUNC_19(struct al_udma *VAR_12, unsigned int VAR_13)
{
 uint32_t VAR_14;

 if (!VAR_12)
  return;

 if (VAR_12->type == VAR_11) {
  if (VAR_13 & VAR_0)
   FUNC_1(VAR_12);
  if (VAR_13 & VAR_4)
   FUNC_5(VAR_12);
  if (VAR_13 & VAR_6)
   FUNC_8(VAR_12);
  if (VAR_13 & VAR_2)
   FUNC_3(VAR_12);
  if (VAR_13 & VAR_5)
   FUNC_7(VAR_12);
  if (VAR_13 & VAR_8)
   FUNC_10(VAR_12);
  if (VAR_13 & VAR_1)
   FUNC_2(VAR_12);
  if (VAR_13 & VAR_7)
   FUNC_9(VAR_12);
  if (VAR_13 & VAR_3)
   FUNC_4(VAR_12);
  for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++) {
   if (VAR_13 & FUNC_0(VAR_14))
    FUNC_6(VAR_12, VAR_14);
  }
 } else {
  if (VAR_13 & VAR_0)
   FUNC_11(VAR_12);
  if (VAR_13 & VAR_4)
   FUNC_14(VAR_12);
  if (VAR_13 & VAR_6)
   FUNC_16(VAR_12);
  if (VAR_13 & VAR_9)
   FUNC_18(VAR_12);
  if (VAR_13 & VAR_1)
   FUNC_12(VAR_12);
  if (VAR_13 & VAR_7)
   FUNC_17(VAR_12);
  if (VAR_13 & VAR_3)
   FUNC_13(VAR_12);
  for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++) {
   if (VAR_13 & FUNC_0(VAR_14))
    FUNC_15(VAR_12, VAR_14);
  }
 }
}
