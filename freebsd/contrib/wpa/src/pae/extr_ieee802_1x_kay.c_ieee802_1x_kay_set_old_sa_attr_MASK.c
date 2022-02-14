
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct ieee802_1x_mka_participant {void* orx; void* otx; void* oan; int oki; } ;
struct ieee802_1x_mka_ki {scalar_t__ kn; } ;
struct ieee802_1x_kay {void* orx_an; void* otx_an; scalar_t__ orx_kn; scalar_t__ otx_kn; } ;
typedef void* Boolean ;


 struct ieee802_1x_mka_participant* FUNC_0 (struct ieee802_1x_kay*) ;
 int FUNC_1 (int *,struct ieee802_1x_mka_ki*,int) ;
 int FUNC_2 (int *,int ,int) ;

int FUNC_3(struct ieee802_1x_kay *VAR_0,
       struct ieee802_1x_mka_ki *VAR_1,
       u8 VAR_2, Boolean VAR_3, Boolean VAR_4)
{
 struct ieee802_1x_mka_participant *VAR_5;

 VAR_5 = FUNC_0(VAR_0);
 if (!VAR_5)
  return -1;

 if (!VAR_1)
  FUNC_2(&VAR_5->oki, 0, sizeof(VAR_5->oki));
 else
  FUNC_1(&VAR_5->oki, VAR_1, sizeof(VAR_5->oki));

 VAR_5->oan = VAR_2;
 VAR_5->otx = VAR_3;
 VAR_5->orx = VAR_4;

 if (!VAR_1) {
  VAR_0->otx_kn = 0;
  VAR_0->orx_kn = 0;
 } else {
  VAR_0->otx_kn = VAR_1->kn;
  VAR_0->orx_kn = VAR_1->kn;
 }
 VAR_0->otx_an = VAR_2;
 VAR_0->orx_an = VAR_2;

 return 0;
}
