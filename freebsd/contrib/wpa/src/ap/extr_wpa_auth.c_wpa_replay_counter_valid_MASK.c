
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_key_replay_counter {int counter; int valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct wpa_key_replay_counter *VAR_2,
        const u8 *VAR_3)
{
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (!VAR_2[VAR_4].valid)
   break;
  if (FUNC_0(VAR_3, VAR_2[VAR_4].counter,
         VAR_1) == 0)
   return 1;
 }
 return 0;
}
