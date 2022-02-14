
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct phy_info_arg {size_t* num_modes; TYPE_1__* modes; } ;
struct TYPE_2__ {int ht_capab; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_1(u32 VAR_1, u32 VAR_2,
      struct phy_info_arg *VAR_3)
{
 u16 VAR_4;

 for (VAR_4 = 0; VAR_4 < *VAR_3->num_modes; VAR_4++) {
  if (!(VAR_3->modes[VAR_4].ht_capab &
        VAR_0))
   continue;
  FUNC_0(&VAR_3->modes[VAR_4], VAR_1, VAR_2);
 }
}
