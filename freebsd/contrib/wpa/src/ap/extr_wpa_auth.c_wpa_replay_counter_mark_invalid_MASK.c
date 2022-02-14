
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_key_replay_counter {scalar_t__ valid; int counter; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int const*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct wpa_key_replay_counter *VAR_3,
         const u8 *VAR_4)
{
 int VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_3[VAR_5].valid &&
      (VAR_4 == ((void*)0) ||
       FUNC_0(VAR_4, VAR_3[VAR_5].counter,
          VAR_2) == 0))
   VAR_3[VAR_5].valid = VAR_0;
 }
}
