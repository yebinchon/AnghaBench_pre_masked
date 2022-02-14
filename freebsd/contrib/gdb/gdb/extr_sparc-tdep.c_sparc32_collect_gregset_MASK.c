
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparc_gregset {int r_psr_offset; int r_pc_offset; int r_npc_offset; int r_y_offset; int r_g1_offset; int r_l0_offset; } ;
struct regcache {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct regcache const*,int,char*) ;

void
FUNC_1 (const struct sparc_gregset *VAR_8,
    const struct regcache *VAR_9,
    int VAR_10, void *VAR_11)
{
  char *VAR_12 = VAR_11;
  int VAR_13;

  if (VAR_10 == VAR_2 || VAR_10 == -1)
    FUNC_0 (VAR_9, VAR_2,
     VAR_12 + VAR_8->r_psr_offset);

  if (VAR_10 == VAR_1 || VAR_10 == -1)
    FUNC_0 (VAR_9, VAR_1,
     VAR_12 + VAR_8->r_pc_offset);

  if (VAR_10 == VAR_0 || VAR_10 == -1)
    FUNC_0 (VAR_9, VAR_0,
     VAR_12 + VAR_8->r_npc_offset);

  if (VAR_10 == VAR_3 || VAR_10 == -1)
    FUNC_0 (VAR_9, VAR_3,
     VAR_12 + VAR_8->r_y_offset);

  if ((VAR_10 >= VAR_4 && VAR_10 <= VAR_7) || VAR_10 == -1)
    {
      int VAR_14 = VAR_8->r_g1_offset;


      for (VAR_13 = VAR_4; VAR_13 <= VAR_7; VAR_13++)
 {
   if (VAR_10 == VAR_13 || VAR_10 == -1)
     FUNC_0 (VAR_9, VAR_13, VAR_12 + VAR_14);
   VAR_14 += 4;
 }
    }

  if ((VAR_10 >= VAR_6 && VAR_10 <= VAR_5) || VAR_10 == -1)
    {


      if (VAR_8->r_l0_offset != -1)
 {
   int VAR_15 = VAR_8->r_l0_offset;

   for (VAR_13 = VAR_6; VAR_13 <= VAR_5; VAR_13++)
     {
       if (VAR_10 == VAR_13 || VAR_10 == -1)
  FUNC_0 (VAR_9, VAR_13, VAR_12 + VAR_15);
       VAR_15 += 4;
     }
 }
    }
}
