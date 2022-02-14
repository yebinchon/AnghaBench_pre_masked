
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee802_1x_mka_ki {int dummy; } ;
struct ieee802_1x_cp_sm {int distributed_ki; } ;


 int FUNC_0 (int *,struct ieee802_1x_mka_ki const*,int) ;

void FUNC_1(void *VAR_0,
         const struct ieee802_1x_mka_ki *VAR_1)
{
 struct ieee802_1x_cp_sm *VAR_2 = VAR_0;
 FUNC_0(&VAR_2->distributed_ki, VAR_1, sizeof(struct ieee802_1x_mka_ki));
}
