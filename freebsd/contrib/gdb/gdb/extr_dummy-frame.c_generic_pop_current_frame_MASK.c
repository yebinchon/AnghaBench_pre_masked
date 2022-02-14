
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct frame_info frame_info ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 struct frame_info* FUNC_1 () ;
 scalar_t__ FUNC_2 (struct frame_info*) ;
 void FUNC_3 (struct frame_info*) ;

void
FUNC_4 (void (*VAR_1) (struct frame_info * VAR_2))
{
  struct frame_info *VAR_3 = FUNC_1 ();
  if (FUNC_2 (VAR_3) == VAR_0)


    FUNC_0 ();
  else
    (*VAR_1) (VAR_3);
}
