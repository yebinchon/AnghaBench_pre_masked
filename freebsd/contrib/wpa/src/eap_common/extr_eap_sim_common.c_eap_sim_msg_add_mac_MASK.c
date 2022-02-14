
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sim_msg {int mac; int buf; } ;


 int VAR_0 ;
 int * FUNC_0 (struct eap_sim_msg*,int ,int ,int *,int ) ;
 int * FUNC_1 (int ) ;

u8 * FUNC_2(struct eap_sim_msg *VAR_1, u8 VAR_2)
{
 u8 *VAR_3 = FUNC_0(VAR_1, VAR_2, 0, ((void*)0), VAR_0);
 if (VAR_3)
  VAR_1->mac = (VAR_3 - FUNC_1(VAR_1->buf)) + 4;
 return VAR_3;
}
