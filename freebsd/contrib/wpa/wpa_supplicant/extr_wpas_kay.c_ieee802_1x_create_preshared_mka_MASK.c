
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* kay; } ;
struct wpa_ssid {int mka_psk_set; int mka_ckn; int mka_ckn_len; int mka_cak; int mka_cak_len; } ;
struct mka_key_name {int len; int name; int key; } ;
struct mka_key {int len; int name; int key; } ;
struct TYPE_2__ {scalar_t__ policy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct wpa_supplicant*,struct wpa_ssid*) ;
 int FUNC_1 (struct wpa_supplicant*) ;
 void* FUNC_2 (TYPE_1__*,struct mka_key_name*,struct mka_key_name*,int ,int ,int ) ;
 int FUNC_3 (struct mka_key_name*) ;
 int FUNC_4 (int ,int ,int ) ;
 struct mka_key_name* FUNC_5 (int) ;

void * FUNC_6(struct wpa_supplicant *VAR_4,
           struct wpa_ssid *VAR_5)
{
 struct mka_key *VAR_6;
 struct mka_key_name *VAR_7;
 void *VAR_8 = ((void*)0);

 if ((VAR_5->mka_psk_set & VAR_2) != VAR_2)
  goto end;

 VAR_7 = FUNC_5(sizeof(*VAR_7));
 if (!VAR_7)
  goto end;

 VAR_6 = FUNC_5(sizeof(*VAR_6));
 if (!VAR_6)
  goto free_ckn;

 if (FUNC_0(VAR_4, VAR_5) < 0 || !VAR_4->kay)
  goto free_cak;

 if (VAR_4->kay->policy == VAR_0)
  goto dealloc;

 VAR_6->len = VAR_5->mka_cak_len;
 FUNC_4(VAR_6->key, VAR_5->mka_cak, VAR_6->len);

 VAR_7->len = VAR_5->mka_ckn_len;
 FUNC_4(VAR_7->name, VAR_5->mka_ckn, VAR_7->len);

 VAR_8 = FUNC_2(VAR_4->kay, VAR_7, VAR_6, 0, VAR_3, VAR_1);
 if (VAR_8)
  goto free_cak;

dealloc:

 FUNC_1(VAR_4);
free_cak:
 FUNC_3(VAR_6);
free_ckn:
 FUNC_3(VAR_7);
end:
 return VAR_8;
}
