
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct ieee802_1x_mka_participant {void* lrx; void* ltx; void* lan; int lki; } ;
struct ieee802_1x_mka_ki {scalar_t__ kn; } ;
struct ieee802_1x_kay {void* lrx_an; void* ltx_an; scalar_t__ lrx_kn; scalar_t__ ltx_kn; } ;
typedef void* Boolean ;


 struct ieee802_1x_mka_participant* FUNC_0 (struct ieee802_1x_kay*) ;
 int FUNC_1 (int *,struct ieee802_1x_mka_ki*,int) ;
 int FUNC_2 (int *,int ,int) ;

int FUNC_3(struct ieee802_1x_kay *VAR_0,
          struct ieee802_1x_mka_ki *VAR_1, u8 VAR_2,
          Boolean VAR_3, Boolean VAR_4)
{
 struct ieee802_1x_mka_participant *VAR_5;

 VAR_5 = FUNC_0(VAR_0);
 if (!VAR_5)
  return -1;

 if (!VAR_1)
  FUNC_2(&VAR_5->lki, 0, sizeof(VAR_5->lki));
 else
  FUNC_1(&VAR_5->lki, VAR_1, sizeof(VAR_5->lki));

 VAR_5->lan = VAR_2;
 VAR_5->ltx = VAR_3;
 VAR_5->lrx = VAR_4;
 if (!VAR_1) {
  VAR_0->ltx_kn = 0;
  VAR_0->lrx_kn = 0;
 } else {
  VAR_0->ltx_kn = VAR_1->kn;
  VAR_0->lrx_kn = VAR_1->kn;
 }
 VAR_0->ltx_an = VAR_2;
 VAR_0->lrx_an = VAR_2;

 return 0;
}
