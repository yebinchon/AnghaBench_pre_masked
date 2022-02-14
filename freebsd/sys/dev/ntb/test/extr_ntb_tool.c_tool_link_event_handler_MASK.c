
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct tool_ctx {int link_mask; int link_bits; int link_event_timer; int dev; } ;


 int FUNC_0 (int *,int,void (*) (void*),struct tool_ctx*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int *,int *) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0)
{
 struct tool_ctx *VAR_1 = (struct tool_ctx *)VAR_0;
 uint64_t VAR_2;

 VAR_2 = FUNC_2(VAR_1->dev, ((void*)0), ((void*)0)) & VAR_1->link_mask;

 if (VAR_2 == VAR_1->link_bits) {
  FUNC_1(VAR_1->dev, "link_event successful for link val="
      "0x%jx\n", VAR_1->link_bits);
  VAR_1->link_bits = 0x0;
  VAR_1->link_mask = 0x0;
 } else
  FUNC_0(&VAR_1->link_event_timer, 1, FUNC_3, VAR_1);
}
