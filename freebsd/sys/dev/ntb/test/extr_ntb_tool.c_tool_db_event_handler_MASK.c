
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct tool_ctx {int db_event_val; int db_event_timer; int dev; } ;


 int FUNC_0 (int *,int,void (*) (void*),struct tool_ctx*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0)
{
 struct tool_ctx *VAR_1 = (struct tool_ctx *)VAR_0;
 uint64_t VAR_2;

 VAR_2 = FUNC_2(VAR_1->dev);

 if (VAR_2 == VAR_1->db_event_val) {
  FUNC_1(VAR_1->dev, "db_event successful for db val=0x%jx\n",
      VAR_1->db_event_val);
  VAR_1->db_event_val = 0x0;
 } else
  FUNC_0(&VAR_1->db_event_timer, 1, FUNC_3, VAR_1);
}
