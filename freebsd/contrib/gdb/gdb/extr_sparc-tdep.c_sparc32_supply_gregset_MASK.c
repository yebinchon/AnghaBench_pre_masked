
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparc_gregset {int r_psr_offset; int r_pc_offset; int r_npc_offset; int r_y_offset; int r_g1_offset; int r_l0_offset; } ;
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
 int FUNC_0 (struct regcache*,int ,int *) ;
 int FUNC_1 (struct regcache*,int,char const*) ;
 int FUNC_2 (struct regcache*,int ,int) ;

void
FUNC_3 (const struct sparc_gregset *VAR_10,
   struct regcache *VAR_11,
   int VAR_12, const void *VAR_13)
{
  const char *VAR_14 = VAR_13;
  int VAR_15;

  if (VAR_12 == VAR_2 || VAR_12 == -1)
    FUNC_1 (VAR_11, VAR_2,
    VAR_14 + VAR_10->r_psr_offset);

  if (VAR_12 == VAR_1 || VAR_12 == -1)
    FUNC_1 (VAR_11, VAR_1,
    VAR_14 + VAR_10->r_pc_offset);

  if (VAR_12 == VAR_0 || VAR_12 == -1)
    FUNC_1 (VAR_11, VAR_0,
    VAR_14 + VAR_10->r_npc_offset);

  if (VAR_12 == VAR_3 || VAR_12 == -1)
    FUNC_1 (VAR_11, VAR_3,
    VAR_14 + VAR_10->r_y_offset);

  if (VAR_12 == VAR_4 || VAR_12 == -1)
    FUNC_1 (VAR_11, VAR_4, ((void*)0));

  if ((VAR_12 >= VAR_5 && VAR_12 <= VAR_8) || VAR_12 == -1)
    {
      int VAR_16 = VAR_10->r_g1_offset;

      for (VAR_15 = VAR_5; VAR_15 <= VAR_8; VAR_15++)
 {
   if (VAR_12 == VAR_15 || VAR_12 == -1)
     FUNC_1 (VAR_11, VAR_15, VAR_14 + VAR_16);
   VAR_16 += 4;
 }
    }

  if ((VAR_12 >= VAR_7 && VAR_12 <= VAR_6) || VAR_12 == -1)
    {


      if (VAR_10->r_l0_offset == -1)
 {
   ULONGEST VAR_17;

   FUNC_0 (VAR_11, VAR_9, &VAR_17);
   FUNC_2 (VAR_11, VAR_17, VAR_12);
 }
      else
 {
   int VAR_18 = VAR_10->r_l0_offset;

   for (VAR_15 = VAR_7; VAR_15 <= VAR_6; VAR_15++)
     {
       if (VAR_12 == VAR_15 || VAR_12 == -1)
  FUNC_1 (VAR_11, VAR_15, VAR_14 + VAR_18);
       VAR_18 += 4;
     }
 }
    }
}
