
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct ieee802_1x_mka_sci {int dummy; } ;
struct channel_map {int sci; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int *,struct ieee802_1x_mka_sci*,int) ;

__attribute__((used)) static int FUNC_1(struct channel_map *VAR_1,
         struct ieee802_1x_mka_sci *VAR_2,
         u32 *VAR_3)
{
 u32 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (FUNC_0(&VAR_1[VAR_4].sci, VAR_2,
         sizeof(struct ieee802_1x_mka_sci)) == 0) {
   *VAR_3 = VAR_4;
   return 0;
  }
 }

 return -1;
}
