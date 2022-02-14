
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct phy_info_arg {size_t* num_modes; TYPE_1__* modes; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {int ht_capab; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (struct nlattr*) ;

__attribute__((used)) static void FUNC_2(struct nlattr *VAR_4[],
     struct phy_info_arg *VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8;
 u16 VAR_9;

 if (VAR_4[VAR_3] == ((void*)0) ||
     VAR_4[VAR_1] == ((void*)0) ||
     VAR_4[VAR_2] == ((void*)0))
  return;

 VAR_6 = FUNC_1(VAR_4[VAR_3]) / 1000;
 VAR_7 = FUNC_1(VAR_4[VAR_1]) / 1000;
 VAR_8 = FUNC_1(VAR_4[VAR_2]) / 1000;

 if (VAR_8 < 20)
  return;

 for (VAR_9 = 0; VAR_9 < *VAR_5->num_modes; VAR_9++) {
  if (!(VAR_5->modes[VAR_9].ht_capab &
        VAR_0))
   continue;
  FUNC_0(&VAR_5->modes[VAR_9], VAR_6, VAR_7);
 }
}
