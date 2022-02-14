
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab_and_line {int dummy; } ;
struct frame_id {int dummy; } ;
struct breakpoint {int thread; struct frame_id frame_id; int disposition; int enable_state; } ;
typedef enum bptype { ____Placeholder_bptype } bptype ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 struct breakpoint* FUNC_2 (struct symtab_and_line,int) ;

struct breakpoint *
FUNC_3 (struct symtab_and_line VAR_3, struct frame_id VAR_4,
     enum bptype VAR_5)
{
  struct breakpoint *VAR_6;
  VAR_6 = FUNC_2 (VAR_3, VAR_5);
  VAR_6->enable_state = VAR_0;
  VAR_6->disposition = VAR_1;
  VAR_6->frame_id = VAR_4;




  if (FUNC_0 (VAR_2))
    VAR_6->thread = FUNC_1 (VAR_2);

  return VAR_6;
}
