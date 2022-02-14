
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {int wpa_sm; } ;
typedef enum eapol_event { ____Placeholder_eapol_event } eapol_event ;




 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, void *VAR_2,
       enum eapol_event VAR_3)
{

 struct sta_info *VAR_4 = VAR_2;
 switch (VAR_3) {
 case 128:
  FUNC_1(VAR_4->wpa_sm);
  break;
 case 129:
  FUNC_0(VAR_4->wpa_sm, VAR_0);
  break;
 }
}
