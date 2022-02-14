
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparc_gregset {int r_tstate_offset; int r_pc_offset; int r_npc_offset; int r_y_offset; int r_y_size; int r_fprs_offset; int r_g1_offset; int r_l0_offset; } ;
struct regcache {int dummy; } ;
typedef int ULONGEST ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (char const*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (struct regcache*,int ,int*) ;
 int FUNC_5 (struct regcache*,int,char const*) ;
 int FUNC_6 (struct regcache*,int,int) ;
 int FUNC_7 (char*,int,int) ;

void
FUNC_8 (const struct sparc_gregset *VAR_21,
   struct regcache *VAR_22,
   int VAR_23, const void *VAR_24)
{
  int VAR_25 = (FUNC_1 (VAR_20) == 32);
  const char *VAR_26 = VAR_24;
  int VAR_27;

  if (VAR_25)
    {
      if (VAR_23 == VAR_4 || VAR_23 == -1)
 {
   int VAR_28 = VAR_21->r_tstate_offset;
   ULONGEST VAR_29, VAR_30;
   char VAR_31[4];

   VAR_29 = FUNC_0 (VAR_26 + VAR_28, 8);
   VAR_30 = ((VAR_29 & VAR_17) | VAR_0 | ((VAR_29 & VAR_18) >> 12)
   | ((VAR_29 & VAR_19) >> 20) | VAR_1);
   FUNC_7 (VAR_31, 4, VAR_30);
   FUNC_5 (VAR_22, VAR_4, VAR_31);
 }

      if (VAR_23 == VAR_3 || VAR_23 == -1)
 FUNC_5 (VAR_22, VAR_3,
        VAR_26 + VAR_21->r_pc_offset + 4);

      if (VAR_23 == VAR_2 || VAR_23 == -1)
 FUNC_5 (VAR_22, VAR_2,
        VAR_26 + VAR_21->r_npc_offset + 4);

      if (VAR_23 == VAR_5 || VAR_23 == -1)
 {
   int VAR_32 = VAR_21->r_y_offset + 8 - VAR_21->r_y_size;
   FUNC_5 (VAR_22, VAR_5, VAR_26 + VAR_32);
 }
    }
  else
    {
      if (VAR_23 == VAR_9 || VAR_23 == -1)
 FUNC_5 (VAR_22, VAR_9,
        VAR_26 + VAR_21->r_tstate_offset);

      if (VAR_23 == VAR_8 || VAR_23 == -1)
 FUNC_5 (VAR_22, VAR_8,
        VAR_26 + VAR_21->r_pc_offset);

      if (VAR_23 == VAR_7 || VAR_23 == -1)
 FUNC_5 (VAR_22, VAR_7,
        VAR_26 + VAR_21->r_npc_offset);

      if (VAR_23 == VAR_10 || VAR_23 == -1)
 {
   char VAR_33[8];

   FUNC_3 (VAR_33, 0, 8);
   FUNC_2 (VAR_33 + 8 - VAR_21->r_y_size,
    VAR_26 + VAR_21->r_y_offset, VAR_21->r_y_size);
   FUNC_5 (VAR_22, VAR_10, VAR_33);
 }

      if ((VAR_23 == VAR_6 || VAR_23 == -1)
   && VAR_21->r_fprs_offset != -1)
 FUNC_5 (VAR_22, VAR_6,
        VAR_26 + VAR_21->r_fprs_offset);
    }

  if (VAR_23 == VAR_11 || VAR_23 == -1)
    FUNC_5 (VAR_22, VAR_11, ((void*)0));

  if ((VAR_23 >= VAR_12 && VAR_23 <= VAR_15) || VAR_23 == -1)
    {
      int VAR_34 = VAR_21->r_g1_offset;

      if (VAR_25)
 VAR_34 += 4;

      for (VAR_27 = VAR_12; VAR_27 <= VAR_15; VAR_27++)
 {
   if (VAR_23 == VAR_27 || VAR_23 == -1)
     FUNC_5 (VAR_22, VAR_27, VAR_26 + VAR_34);
   VAR_34 += 8;
 }
    }

  if ((VAR_23 >= VAR_14 && VAR_23 <= VAR_13) || VAR_23 == -1)
    {


      if (VAR_21->r_l0_offset == -1)
 {
   ULONGEST VAR_35;

   FUNC_4 (VAR_22, VAR_16, &VAR_35);
   FUNC_6 (VAR_22, VAR_35, VAR_23);
 }
      else
 {
   int VAR_36 = VAR_21->r_l0_offset;

   if (VAR_25)
     VAR_36 += 4;

   for (VAR_27 = VAR_14; VAR_27 <= VAR_13; VAR_27++)
     {
       if (VAR_23 == VAR_27 || VAR_23 == -1)
  FUNC_5 (VAR_22, VAR_27, VAR_26 + VAR_36);
       VAR_36 += 8;
     }
 }
    }
}
