
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee802_1x_cp_sm {struct ieee802_1x_cp_sm* oki; struct ieee802_1x_cp_sm* lki; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ieee802_1x_cp_sm*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ieee802_1x_cp_sm*) ;
 int FUNC_2 (int ,char*) ;

void FUNC_3(struct ieee802_1x_cp_sm *VAR_4)
{
 FUNC_2(VAR_0, "CP: state machine removed");
 if (!VAR_4)
  return;

 FUNC_0(VAR_1, VAR_4, ((void*)0));
 FUNC_0(VAR_3, VAR_4, ((void*)0));
 FUNC_0(VAR_2, VAR_4, ((void*)0));
 FUNC_1(VAR_4->lki);
 FUNC_1(VAR_4->oki);
 FUNC_1(VAR_4);
}
