
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trad_frame_saved_reg {scalar_t__ addr; int realreg; } ;
struct gdbarch {int dummy; } ;
struct frame_info {int dummy; } ;
typedef enum lval_type { ____Placeholder_lval_type } lval_type ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct frame_info*,int ,int*,int*,scalar_t__*,int*,void*) ;
 int FUNC_2 (struct gdbarch*,int) ;
 struct gdbarch* FUNC_3 (struct frame_info*) ;
 int FUNC_4 (struct frame_info*,scalar_t__,void*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (struct gdbarch*,int) ;
 int FUNC_6 (void*,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (struct trad_frame_saved_reg*,int) ;
 scalar_t__ FUNC_8 (struct trad_frame_saved_reg*,int) ;
 scalar_t__ FUNC_9 (struct trad_frame_saved_reg*,int) ;

void
FUNC_10 (struct frame_info *VAR_2,
     struct trad_frame_saved_reg VAR_3[],
     int VAR_4, int *VAR_5,
     enum lval_type *VAR_6, CORE_ADDR *VAR_7,
     int *VAR_8, void *VAR_9)
{
  struct gdbarch *VAR_10 = FUNC_3 (VAR_2);
  if (FUNC_7 (VAR_3, VAR_4))
    {

      *VAR_5 = 0;
      *VAR_6 = VAR_0;
      *VAR_7 = VAR_3[VAR_4].addr;
      *VAR_8 = -1;
      if (VAR_9 != ((void*)0))
 {

   FUNC_4 (VAR_2, VAR_3[VAR_4].addr, VAR_9,
       FUNC_5 (VAR_10, VAR_4));
 }
    }
  else if (FUNC_8 (VAR_3, VAR_4))
    {

      FUNC_1 (VAR_2, VAR_3[VAR_4].realreg,
        VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
    }
  else if (FUNC_9 (VAR_3, VAR_4))
    {

      *VAR_5 = 0;
      *VAR_6 = VAR_1;
      *VAR_7 = 0;
      *VAR_8 = -1;
      if (VAR_9 != ((void*)0))
 FUNC_6 (VAR_9, FUNC_5 (VAR_10, VAR_4),
    VAR_3[VAR_4].addr);
    }
  else
    {
      FUNC_0 ("Register %s not available",
      FUNC_2 (VAR_10, VAR_4));
    }
}
