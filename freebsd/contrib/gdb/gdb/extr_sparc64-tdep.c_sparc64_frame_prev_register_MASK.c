
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparc_frame_cache {int base; scalar_t__ frameless_p; } ;
struct gdbarch {int dummy; } ;
struct frame_info {int dummy; } ;
typedef enum lval_type { ____Placeholder_lval_type } lval_type ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct frame_info*,int,int*,int*,int*,int*,void*) ;
 scalar_t__ FUNC_1 (struct frame_info*,int) ;
 struct gdbarch* FUNC_2 (struct frame_info*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int,void*,int ) ;
 int FUNC_4 (struct gdbarch*,int) ;
 struct sparc_frame_cache* FUNC_5 (struct frame_info*,void**) ;
 int FUNC_6 (void*,int,int) ;

__attribute__((used)) static void
FUNC_7 (struct frame_info *VAR_10, void **VAR_11,
        int VAR_12, int *VAR_13,
        enum lval_type *VAR_14, CORE_ADDR *VAR_15,
        int *VAR_16, void *VAR_17)
{
  struct sparc_frame_cache *VAR_18 =
    FUNC_5 (VAR_10, VAR_11);

  if (VAR_12 == VAR_2 || VAR_12 == VAR_1)
    {
      *VAR_13 = 0;
      *VAR_14 = VAR_9;
      *VAR_15 = 0;
      *VAR_16 = -1;
      if (VAR_17)
 {
   CORE_ADDR VAR_19 = (VAR_12 == VAR_1) ? 4 : 0;

   VAR_12 = VAR_18->frameless_p ? VAR_7 : VAR_4;
   VAR_19 += FUNC_1 (VAR_10, VAR_12) + 8;
   FUNC_6 (VAR_17, 8, VAR_19);
 }
      return;
    }



  if (!VAR_18->frameless_p
      && VAR_12 >= VAR_5 && VAR_12 <= VAR_4)
    {
      *VAR_13 = 0;
      *VAR_14 = VAR_8;
      *VAR_15 = VAR_18->base + VAR_0 + (VAR_12 - VAR_5) * 8;
      *VAR_16 = -1;
      if (VAR_17)
 {
   struct gdbarch *VAR_20 = FUNC_2 (VAR_10);


   FUNC_3 (*VAR_15, VAR_17, FUNC_4 (VAR_20, VAR_12));
 }
      return;
    }



  if (!VAR_18->frameless_p
      && VAR_12 >= VAR_6 && VAR_12 <= VAR_7)
    VAR_12 += (VAR_3 - VAR_6);

  FUNC_0 (VAR_10, VAR_12,
    VAR_13, VAR_14, VAR_15, VAR_16, VAR_17);
}
