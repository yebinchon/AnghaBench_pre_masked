
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lib80211_crypt_info {char* name; int crypt_deinit_timer; int crypt_deinit_list; int * lock; } ;
typedef int spinlock_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct lib80211_crypt_info*,int ,int) ;
 int FUNC_2 (int *,int ,unsigned long) ;

int FUNC_3(struct lib80211_crypt_info *VAR_1, char *VAR_2,
    spinlock_t *VAR_3)
{
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));

 VAR_1->name = VAR_2;
 VAR_1->lock = VAR_3;

 FUNC_0(&VAR_1->crypt_deinit_list);
 FUNC_2(&VAR_1->crypt_deinit_timer, VAR_0,
   (unsigned long)VAR_1);

 return 0;
}
