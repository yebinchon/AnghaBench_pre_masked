
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_state_machine {int wpa_auth; void* pairwise_set; int addr; int PTK; void* PTK_valid; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct wpa_state_machine*) ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int ,int *,int ) ;
 int FUNC_3 (int ,char*) ;
 int VAR_3 ;

void FUNC_4(struct wpa_state_machine *VAR_4)
{
 VAR_4->PTK_valid = VAR_0;
 FUNC_1(&VAR_4->PTK, 0, sizeof(VAR_4->PTK));
 if (FUNC_2(VAR_4->wpa_auth, 0, VAR_2, VAR_4->addr, 0, ((void*)0),
        0))
  FUNC_3(VAR_1,
      "RSN: PTK removal from the driver failed");
 VAR_4->pairwise_set = VAR_0;
 FUNC_0(VAR_3, VAR_4->wpa_auth, VAR_4);
}
