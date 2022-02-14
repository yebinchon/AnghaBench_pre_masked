
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct ieee802_1x_mka_sci {int dummy; } ;
struct channel_map {int sci; } ;


 int FUNC_0 (int *,struct ieee802_1x_mka_sci*,int) ;

__attribute__((used)) static void FUNC_1(struct channel_map *VAR_0,
     struct ieee802_1x_mka_sci *VAR_1,
     u32 VAR_2)
{
 FUNC_0(&VAR_0[VAR_2].sci, VAR_1, sizeof(struct ieee802_1x_mka_sci));
}
