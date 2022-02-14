
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct regcache {int dummy; } ;
struct gdbarch_tdep {int wordsize; scalar_t__ ppc_vr0_regnum; scalar_t__ ppc_ev0_regnum; scalar_t__ ppc_gp0_regnum; } ;
struct gdbarch {int dummy; } ;
typedef enum return_value_convention { ____Placeholder_return_value_convention } return_value_convention ;
typedef void bfd_byte ;
typedef int ULONGEST ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct type*) ;
 scalar_t__ FUNC_2 (struct type*) ;
 int FUNC_3 (void const*,struct type*,char*,struct type*) ;
 int FUNC_4 (void const*,int) ;
 int FUNC_5 (int) ;
 struct gdbarch_tdep* FUNC_6 (struct gdbarch*) ;
 int FUNC_7 (char*,void const*,int) ;
 int FUNC_8 (char*,int ,int) ;
 scalar_t__ FUNC_9 (struct gdbarch*) ;
 int FUNC_10 (struct regcache*,scalar_t__,char*) ;
 int FUNC_11 (struct regcache*,scalar_t__,int *) ;
 int FUNC_12 (struct regcache*,scalar_t__,char*) ;
 int FUNC_13 (struct regcache*,scalar_t__,int ) ;
 struct type* FUNC_14 (struct gdbarch*,scalar_t__) ;
 int FUNC_15 (void*,int,int ) ;
 int FUNC_16 (struct type*,void const*) ;

__attribute__((used)) static enum return_value_convention
FUNC_17 (struct gdbarch *VAR_7, struct type *VAR_8,
     struct regcache *VAR_9, void *VAR_10,
     const void *VAR_11, int VAR_12)
{
  struct gdbarch_tdep *VAR_13 = FUNC_6 (VAR_7);
  FUNC_5 (VAR_13->wordsize == 4);
  if (FUNC_0 (VAR_8) == VAR_5
      && FUNC_1 (VAR_8) <= 8
      && FUNC_9 (VAR_7))
    {
      if (VAR_10)
 {


   char VAR_14[VAR_1];
   struct type *VAR_15 = FUNC_14 (VAR_7, VAR_0 + 1);
   FUNC_10 (VAR_9, VAR_0 + 1, VAR_14);
   FUNC_3 (VAR_14, VAR_15, VAR_10, VAR_8);
 }
      if (VAR_11)
 {


   char VAR_16[VAR_1];
   struct type *VAR_17 = FUNC_14 (VAR_7, VAR_0);
   FUNC_3 (VAR_11, VAR_8, VAR_16, VAR_17);
   FUNC_12 (VAR_9, VAR_0 + 1, VAR_16);
 }
      return VAR_2;
    }
  if ((FUNC_0 (VAR_8) == VAR_6 && FUNC_1 (VAR_8) == 8)
      || (FUNC_0 (VAR_8) == VAR_5 && FUNC_1 (VAR_8) == 8))
    {
      if (VAR_10)
 {

   FUNC_10 (VAR_9, VAR_13->ppc_gp0_regnum + 3,
    (bfd_byte *) VAR_10 + 0);
   FUNC_10 (VAR_9, VAR_13->ppc_gp0_regnum + 4,
    (bfd_byte *) VAR_10 + 4);
 }
      if (VAR_11)
 {

   FUNC_12 (VAR_9, VAR_13->ppc_gp0_regnum + 3,
     (const bfd_byte *) VAR_11 + 0);
   FUNC_12 (VAR_9, VAR_13->ppc_gp0_regnum + 4,
     (const bfd_byte *) VAR_11 + 4);
 }
      return VAR_2;
    }
  if (FUNC_0 (VAR_8) == VAR_6
      && FUNC_1 (VAR_8) <= VAR_13->wordsize)
    {
      if (VAR_10)
 {



   ULONGEST VAR_18;
   FUNC_11 (VAR_9, VAR_13->ppc_gp0_regnum + 3,
      &VAR_18);
   FUNC_15 (VAR_10, FUNC_1 (VAR_8), VAR_18);
 }
      if (VAR_11)
 {


   FUNC_13 (VAR_9, VAR_13->ppc_gp0_regnum + 3,
       FUNC_16 (VAR_8, VAR_11));
 }
      return VAR_2;
    }
  if (FUNC_1 (VAR_8) == 16
      && FUNC_0 (VAR_8) == VAR_4
      && FUNC_2 (VAR_8) && VAR_13->ppc_vr0_regnum >= 0)
    {
      if (VAR_10)
 {

   FUNC_10 (VAR_9, VAR_13->ppc_vr0_regnum + 2, VAR_10);
 }
      if (VAR_11)
 {

   FUNC_12 (VAR_9, VAR_13->ppc_vr0_regnum + 2, VAR_11);
 }
      return VAR_2;
    }
  if (FUNC_1 (VAR_8) == 8
      && FUNC_0 (VAR_8) == VAR_4
      && FUNC_2 (VAR_8) && VAR_13->ppc_ev0_regnum >= 0)
    {





      if (VAR_10)
 FUNC_10 (VAR_9, VAR_13->ppc_ev0_regnum + 3, VAR_10);
      if (VAR_11)
 FUNC_12 (VAR_9, VAR_13->ppc_ev0_regnum + 3, VAR_11);
      return VAR_2;
    }
  if (VAR_12 && FUNC_1 (VAR_8) <= 8)
    {
      if (VAR_10)
 {




   int VAR_19 = 0;
   while (1)
     {
       ULONGEST VAR_20;
       int VAR_21 = FUNC_1 (VAR_8) - VAR_19 * VAR_13->wordsize;
       if (VAR_21 <= 0)
  break;
       if (VAR_21 > VAR_13->wordsize)
  VAR_21 = VAR_13->wordsize;
       FUNC_11 (VAR_9,
          VAR_13->ppc_gp0_regnum + 3 + VAR_19,
          &VAR_20);
       FUNC_15 (((bfd_byte *) VAR_10
           + VAR_19 * VAR_13->wordsize), VAR_21, VAR_20);
       VAR_19++;
     }
 }
      if (VAR_11)
 {




   int VAR_22 = 0;
   while (1)
     {
       ULONGEST VAR_23;
       int VAR_24 = FUNC_1 (VAR_8) - VAR_22 * VAR_13->wordsize;
       if (VAR_24 <= 0)
  break;
       if (VAR_24 > VAR_13->wordsize)
  VAR_24 = VAR_13->wordsize;
       VAR_23 = FUNC_4 (((const bfd_byte *) VAR_11
            + VAR_22 * VAR_13->wordsize), VAR_24);
       FUNC_13 (VAR_9,
           VAR_13->ppc_gp0_regnum + 3 + VAR_22,
           VAR_23);
       VAR_22++;
     }
 }
      return VAR_2;
    }
  if (FUNC_1 (VAR_8) <= 8)
    {
      if (VAR_10)
 {



   char VAR_25[VAR_1 * 2];
   FUNC_10 (VAR_9, VAR_13->ppc_gp0_regnum + 3,
    VAR_25 + 0 * VAR_13->wordsize);
   if (FUNC_1 (VAR_8) > VAR_13->wordsize)
     FUNC_10 (VAR_9, VAR_13->ppc_gp0_regnum + 4,
      VAR_25 + 1 * VAR_13->wordsize);
   FUNC_7 (VAR_10, VAR_25, FUNC_1 (VAR_8));
 }
      if (VAR_11)
 {



   char VAR_26[VAR_1 * 2];
   FUNC_8 (VAR_26, 0, sizeof VAR_26);
   FUNC_7 (VAR_26, VAR_11, FUNC_1 (VAR_8));
   FUNC_12 (VAR_9, VAR_13->ppc_gp0_regnum + 3,
     VAR_26 + 0 * VAR_13->wordsize);
   if (FUNC_1 (VAR_8) > VAR_13->wordsize)
     FUNC_12 (VAR_9, VAR_13->ppc_gp0_regnum + 4,
       VAR_26 + 1 * VAR_13->wordsize);
 }
      return VAR_2;
    }
  return VAR_3;
}
