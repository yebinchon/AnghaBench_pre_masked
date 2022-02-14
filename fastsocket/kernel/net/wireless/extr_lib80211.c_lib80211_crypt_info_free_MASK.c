
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lib80211_crypt_info {struct lib80211_crypt_data** crypt; int crypt_deinit_timer; } ;
struct lib80211_crypt_data {TYPE_1__* ops; int priv; } ;
struct TYPE_2__ {int owner; int (* deinit ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct lib80211_crypt_data*) ;
 int FUNC_2 (struct lib80211_crypt_info*,int) ;
 int FUNC_3 (struct lib80211_crypt_info*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct lib80211_crypt_info *VAR_1)
{
 int VAR_2;

        FUNC_3(VAR_1);
        FUNC_0(&VAR_1->crypt_deinit_timer);
        FUNC_2(VAR_1, 1);

        for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
                struct lib80211_crypt_data *VAR_3 = VAR_1->crypt[VAR_2];
                if (VAR_3) {
                        if (VAR_3->ops) {
                                VAR_3->ops->deinit(VAR_3->priv);
                                FUNC_4(VAR_3->ops->owner);
                        }
                        FUNC_1(VAR_3);
                        VAR_1->crypt[VAR_2] = ((void*)0);
                }
        }
}
