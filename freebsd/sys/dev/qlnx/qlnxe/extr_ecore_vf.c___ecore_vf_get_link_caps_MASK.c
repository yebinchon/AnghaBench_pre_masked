
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_mcp_link_capabilities {int speed_capabilities; } ;
struct ecore_bulletin_content {int capability_speed; } ;


 int FUNC_0 (struct ecore_mcp_link_capabilities*,int ,int) ;

void FUNC_1(struct ecore_mcp_link_capabilities *VAR_0,
         struct ecore_bulletin_content *VAR_1)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->speed_capabilities = VAR_1->capability_speed;
}
