
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct show_state {scalar_t__ or_block; scalar_t__ proto; scalar_t__ flags; int * eaction; struct ip_fw_rule* rule; int * printed; } ;
struct ip_fw_rule {int cmd_len; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,int) ;

__attribute__((used)) static int
FUNC_1(struct show_state *VAR_1, struct ip_fw_rule *VAR_2)
{

 VAR_1->printed = FUNC_0(VAR_2->cmd_len, sizeof(uint8_t));
 if (VAR_1->printed == ((void*)0))
  return (VAR_0);
 VAR_1->rule = VAR_2;
 VAR_1->eaction = ((void*)0);
 VAR_1->flags = 0;
 VAR_1->proto = 0;
 VAR_1->or_block = 0;
 return (0);
}
