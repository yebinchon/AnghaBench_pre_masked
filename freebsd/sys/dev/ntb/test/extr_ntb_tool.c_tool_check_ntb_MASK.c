
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tool_ctx {unsigned char link_status; scalar_t__ link_bits; scalar_t__ db_event_val; scalar_t__ peer_db_mask_val; scalar_t__ peer_db_val; scalar_t__ db_mask_val; int db_event_timer; int link_event_timer; } ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static int
FUNC_1(struct tool_ctx *VAR_0)
{


 FUNC_0(&VAR_0->link_event_timer, 1);


 FUNC_0(&VAR_0->db_event_timer, 1);


 VAR_0->link_status = 'U';
 VAR_0->db_mask_val = 0;
 VAR_0->peer_db_val = 0;
 VAR_0->peer_db_mask_val = 0;
 VAR_0->db_event_val = 0;
 VAR_0->link_bits = 0;

 return (0);
}
