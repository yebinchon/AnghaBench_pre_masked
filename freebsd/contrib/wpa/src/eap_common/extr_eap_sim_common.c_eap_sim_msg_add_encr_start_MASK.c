
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sim_msg {int iv; int encr; int buf; } ;


 int VAR_0 ;
 int * FUNC_0 (struct eap_sim_msg*,int ,int ,int *,int ) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct eap_sim_msg *VAR_1, u8 VAR_2,
          u8 VAR_3)
{
 u8 *VAR_4 = FUNC_0(VAR_1, VAR_2, 0, ((void*)0), VAR_0);
 if (VAR_4 == ((void*)0))
  return -1;
 VAR_1->iv = (VAR_4 - FUNC_2(VAR_1->buf)) + 4;
 if (FUNC_1(FUNC_3(VAR_1->buf) + VAR_1->iv,
        VAR_0)) {
  VAR_1->iv = 0;
  return -1;
 }

 VAR_4 = FUNC_0(VAR_1, VAR_3, 0, ((void*)0), 0);
 if (VAR_4 == ((void*)0)) {
  VAR_1->iv = 0;
  return -1;
 }
 VAR_1->encr = VAR_4 - FUNC_2(VAR_1->buf);

 return 0;
}
