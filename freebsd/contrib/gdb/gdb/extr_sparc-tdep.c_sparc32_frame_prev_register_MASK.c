
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparc_frame_cache {int base; scalar_t__ frameless_p; scalar_t__ struct_return_p; } ;
struct gdbarch {int dummy; } ;
struct frame_info {int dummy; } ;
typedef enum lval_type { ____Placeholder_lval_type } lval_type ;
typedef scalar_t__ ULONGEST ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct frame_info*,int,int*,int*,int*,int*,void*) ;
 scalar_t__ FUNC_1 (struct frame_info*,int) ;
 struct gdbarch* FUNC_2 (struct frame_info*) ;
 scalar_t__ FUNC_3 (struct frame_info*,int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int,void*,int ) ;
 int FUNC_5 (struct gdbarch*,int) ;
 struct sparc_frame_cache* FUNC_6 (struct frame_info*,void**) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (void*,int,scalar_t__) ;

__attribute__((used)) static void
FUNC_9 (struct frame_info *VAR_9, void **VAR_10,
        int VAR_11, int *VAR_12,
        enum lval_type *VAR_13, CORE_ADDR *VAR_14,
        int *VAR_15, void *VAR_16)
{
  struct sparc_frame_cache *VAR_17 =
    FUNC_6 (VAR_9, VAR_10);

  if (VAR_11 == VAR_1 || VAR_11 == VAR_0)
    {
      *VAR_12 = 0;
      *VAR_13 = VAR_8;
      *VAR_14 = 0;
      *VAR_15 = -1;
      if (VAR_16)
 {
   CORE_ADDR VAR_18 = (VAR_11 == VAR_0) ? 4 : 0;




   if (VAR_17->struct_return_p)
     VAR_18 += 4;

   VAR_11 = VAR_17->frameless_p ? VAR_6 : VAR_3;
   VAR_18 += FUNC_1 (VAR_9, VAR_11) + 8;
   FUNC_8 (VAR_16, 4, VAR_18);
 }
      return;
    }


  {
    ULONGEST VAR_19 = FUNC_7 ();

    if (VAR_19 != 0 && !VAR_17->frameless_p && VAR_11 == VAR_3)
      {
 *VAR_12 = 0;
 *VAR_13 = VAR_8;
 *VAR_14 = 0;
 *VAR_15 = -1;
 if (VAR_16)
   {
     CORE_ADDR VAR_20 = VAR_17->base + (VAR_11 - VAR_4) * 4;
     ULONGEST VAR_21;


     VAR_21 = FUNC_3 (VAR_9, VAR_20, 4);
     FUNC_8 (VAR_16, 4, VAR_21 ^ VAR_19);
   }
 return;
      }
  }



  if (!VAR_17->frameless_p
      && VAR_11 >= VAR_4 && VAR_11 <= VAR_3)
    {
      *VAR_12 = 0;
      *VAR_13 = VAR_7;
      *VAR_14 = VAR_17->base + (VAR_11 - VAR_4) * 4;
      *VAR_15 = -1;
      if (VAR_16)
 {
   struct gdbarch *VAR_22 = FUNC_2 (VAR_9);


   FUNC_4 (*VAR_14, VAR_16, FUNC_5 (VAR_22, VAR_11));
 }
      return;
    }



  if (!VAR_17->frameless_p
      && VAR_11 >= VAR_5 && VAR_11 <= VAR_6)
    VAR_11 += (VAR_2 - VAR_5);

  FUNC_0 (VAR_9, VAR_11,
    VAR_12, VAR_13, VAR_14, VAR_15, VAR_16);
}
