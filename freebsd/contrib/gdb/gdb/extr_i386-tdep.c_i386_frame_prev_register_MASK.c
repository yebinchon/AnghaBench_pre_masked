
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i386_frame_cache {int saved_sp; int* saved_regs; scalar_t__ pc_in_eax; } ;
struct frame_info {int dummy; } ;
typedef enum lval_type { ____Placeholder_lval_type } lval_type ;
typedef int ULONGEST ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct frame_info*,int,int*,int*,int*,int*,void*) ;
 int FUNC_1 (struct frame_info*,int) ;
 int FUNC_2 (int) ;
 struct i386_frame_cache* FUNC_3 (struct frame_info*,void**) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int,void*,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (void*,int,int) ;

__attribute__((used)) static void
FUNC_7 (struct frame_info *VAR_8, void **VAR_9,
     int VAR_10, int *VAR_11,
     enum lval_type *VAR_12, CORE_ADDR *VAR_13,
     int *VAR_14, void *VAR_15)
{
  struct i386_frame_cache *VAR_16 = FUNC_3 (VAR_8, VAR_9);

  FUNC_2 (VAR_10 >= 0);
  if (VAR_10 == VAR_1)
    {
      *VAR_11 = 0;
      *VAR_12 = VAR_7;
      *VAR_13 = 0;
      *VAR_14 = -1;
      if (VAR_15)
 {
   ULONGEST VAR_17;


   VAR_17 = FUNC_1 (VAR_8,
      VAR_1);
   VAR_17 &= ~(1 << 10);
   FUNC_6 (VAR_15, 4, VAR_17);
 }

      return;
    }

  if (VAR_10 == VAR_2 && VAR_16->pc_in_eax)
    {
      FUNC_0 (VAR_8, VAR_0,
        VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);
      return;
    }

  if (VAR_10 == VAR_3 && VAR_16->saved_sp)
    {
      *VAR_11 = 0;
      *VAR_12 = VAR_7;
      *VAR_13 = 0;
      *VAR_14 = -1;
      if (VAR_15)
 {

   FUNC_6 (VAR_15, 4, VAR_16->saved_sp);
 }
      return;
    }

  if (VAR_10 < VAR_4 && VAR_16->saved_regs[VAR_10] != -1)
    {
      *VAR_11 = 0;
      *VAR_12 = VAR_6;
      *VAR_13 = VAR_16->saved_regs[VAR_10];
      *VAR_14 = -1;
      if (VAR_15)
 {

   FUNC_4 (*VAR_13, VAR_15,
         FUNC_5 (VAR_5, VAR_10));
 }
      return;
    }

  FUNC_0 (VAR_8, VAR_10,
    VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);
}
