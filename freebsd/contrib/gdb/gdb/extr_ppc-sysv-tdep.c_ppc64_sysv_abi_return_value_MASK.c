
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct regcache {int dummy; } ;
struct gdbarch_tdep {scalar_t__ ppc_gp0_regnum; } ;
struct gdbarch {int dummy; } ;
typedef enum return_value_convention { ____Placeholder_return_value_convention } return_value_convention ;
typedef char bfd_byte ;
typedef int ULONGEST ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct type*) ;
 struct type* FUNC_2 (struct type*) ;
 int FUNC_3 (char const*,struct type*,char*,struct type*) ;
 struct gdbarch* VAR_9 ;
 struct gdbarch_tdep* FUNC_4 (struct gdbarch*) ;
 int FUNC_5 (struct regcache*,scalar_t__,char*) ;
 int FUNC_6 (struct regcache*,scalar_t__,int,int,void*) ;
 int FUNC_7 (struct regcache*,scalar_t__,int *) ;
 int FUNC_8 (struct regcache*,scalar_t__,char const*) ;
 int FUNC_9 (struct regcache*,scalar_t__,int,int,void const*) ;
 int FUNC_10 (struct regcache*,scalar_t__,int ) ;
 int FUNC_11 (struct gdbarch*,scalar_t__) ;
 struct type* FUNC_12 (struct gdbarch*,scalar_t__) ;
 int FUNC_13 (void*,int,int ) ;
 int FUNC_14 (struct type*,void const*) ;

enum return_value_convention
FUNC_15 (struct gdbarch *VAR_10, struct type *VAR_11,
        struct regcache *VAR_12, void *VAR_13,
        const void *VAR_14)
{
  struct gdbarch_tdep *VAR_15 = FUNC_4 (VAR_10);

  if (FUNC_0 (VAR_11) == VAR_6 && FUNC_1 (VAR_11) <= 8)
    {
      char VAR_16[VAR_1];
      struct type *VAR_17 = FUNC_12 (VAR_10, VAR_0);
      if (VAR_14 != ((void*)0))
 {
   FUNC_3 (VAR_14, VAR_11, VAR_16, VAR_17);
   FUNC_8 (VAR_12, VAR_0 + 1, VAR_16);
 }
      if (VAR_13 != ((void*)0))
 {
   FUNC_5 (VAR_12, VAR_0 + 1, VAR_16);
   FUNC_3 (VAR_16, VAR_17, VAR_13, VAR_11);
 }
      return VAR_2;
    }
  if (FUNC_0 (VAR_11) == VAR_7 && FUNC_1 (VAR_11) <= 8)
    {

      if (VAR_14 != ((void*)0))
 {

   FUNC_10 (VAR_12, VAR_15->ppc_gp0_regnum + 3,
       FUNC_14 (VAR_11, VAR_14));
 }
      if (VAR_13 != ((void*)0))
 {


   ULONGEST VAR_18;
   FUNC_7 (VAR_12, VAR_15->ppc_gp0_regnum + 3,
      &VAR_18);
   FUNC_13 (VAR_13, FUNC_1 (VAR_11), VAR_18);
 }
      return VAR_2;
    }

  if (FUNC_0 (VAR_11) == VAR_8)
    {

      if (VAR_14 != ((void*)0))
 FUNC_8 (VAR_12, VAR_15->ppc_gp0_regnum + 3, VAR_14);
      if (VAR_13 != ((void*)0))
 FUNC_5 (VAR_12, VAR_15->ppc_gp0_regnum + 3, VAR_13);
      return VAR_2;
    }
  if (FUNC_0 (VAR_11) == VAR_4
      && FUNC_1 (VAR_11) <= 8
      && FUNC_0 (FUNC_2 (VAR_11)) == VAR_7
      && FUNC_1 (FUNC_2 (VAR_11)) == 1)
    {

      int VAR_19 = (FUNC_11 (VAR_10, VAR_15->ppc_gp0_regnum + 3)
      - FUNC_1 (VAR_11));
      if (VAR_14 != ((void*)0))
 FUNC_9 (VAR_12, VAR_15->ppc_gp0_regnum + 3,
        VAR_19, FUNC_1 (VAR_11), VAR_14);
      if (VAR_13 != ((void*)0))
 FUNC_6 (VAR_12, VAR_15->ppc_gp0_regnum + 3,
       VAR_19, FUNC_1 (VAR_11), VAR_13);
      return VAR_2;
    }


  if (FUNC_0 (VAR_11) == VAR_6
      && (FUNC_1 (VAR_11) == 16 || FUNC_1 (VAR_11) == 32))
    {
      if (VAR_14 || VAR_13 != ((void*)0))
 {
   int VAR_20;
   for (VAR_20 = 0; VAR_20 < FUNC_1 (VAR_11) / 8; VAR_20++)
     {
       if (VAR_14 != ((void*)0))
  FUNC_8 (VAR_12, VAR_0 + 1 + VAR_20,
           (const bfd_byte *) VAR_14 + VAR_20 * 8);
       if (VAR_13 != ((void*)0))
  FUNC_5 (VAR_12, VAR_0 + 1 + VAR_20,
          (bfd_byte *) VAR_13 + VAR_20 * 8);
     }
 }
      return VAR_2;
    }

  if (FUNC_0 (VAR_11) == VAR_5
      && (FUNC_1 (VAR_11) == 8 || FUNC_1 (VAR_11) == 16))
    {
      if (VAR_12 != ((void*)0))
 {
   int VAR_21;
   for (VAR_21 = 0; VAR_21 < 2; VAR_21++)
     {
       char VAR_22[VAR_1];
       struct type *VAR_23 =
  FUNC_12 (VAR_9, VAR_0);
       if (VAR_14 != ((void*)0))
  {
    FUNC_3 ((const bfd_byte *) VAR_14 +
       VAR_21 * (FUNC_1 (VAR_11) / 2),
       VAR_11, VAR_22, VAR_23);
    FUNC_8 (VAR_12, VAR_0 + 1 + VAR_21,
      VAR_22);
  }
       if (VAR_13 != ((void*)0))
  {
    FUNC_5 (VAR_12, VAR_0 + 1 + VAR_21, VAR_22);
    FUNC_3 (VAR_22, VAR_23,
       (bfd_byte *) VAR_13 +
       VAR_21 * (FUNC_1 (VAR_11) / 2),
       VAR_11);
  }
     }
 }
      return VAR_2;
    }

  if (FUNC_0 (VAR_11) == VAR_5 && FUNC_1 (VAR_11) == 32)
    {
      if (VAR_12 != ((void*)0))
 {
   int VAR_24;
   for (VAR_24 = 0; VAR_24 < 4; VAR_24++)
     {
       if (VAR_14 != ((void*)0))
  FUNC_8 (VAR_12, VAR_0 + 1 + VAR_24,
           (const bfd_byte *) VAR_14 + VAR_24 * 8);
       if (VAR_13 != ((void*)0))
  FUNC_5 (VAR_12, VAR_0 + 1 + VAR_24,
          (bfd_byte *) VAR_13 + VAR_24 * 8);
     }
 }
      return VAR_2;
    }
  return VAR_3;
}
