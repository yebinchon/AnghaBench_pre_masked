
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_state_machine {scalar_t__ TimeoutCtr; int ANonce; int Disconnect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct wpa_state_machine *VAR_4)
{
 if (FUNC_0(VAR_4->ANonce, VAR_3)) {
  FUNC_2(VAR_1,
      "WPA: Failed to get random data for ANonce");
  VAR_4->Disconnect = VAR_2;
  return -1;
 }
 FUNC_1(VAR_0, "WPA: Assign new ANonce", VAR_4->ANonce,
      VAR_3);
 VAR_4->TimeoutCtr = 0;
 return 0;
}
