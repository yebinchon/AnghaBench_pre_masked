
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int last_playbank; int play_sample_size; int play_channels; int play_sample_rate; scalar_t__ base; scalar_t__ DAPQ; } ;
typedef scalar_t__ LPDAQD ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 TYPE_1__ VAR_14 ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_15;
 LPDAQD VAR_16;

 VAR_14.last_playbank = -1;
 FUNC_2(FUNC_1(0 * VAR_2), VAR_14.DAPQ + VAR_12);
 FUNC_2(FUNC_1(0 * VAR_2), VAR_14.DAPQ + VAR_13);

 for (VAR_15 = 0, VAR_16 = VAR_14.base + VAR_0; VAR_15 < 3; ++VAR_15, VAR_16 += VAR_2) {
  FUNC_2(FUNC_0((DWORD)(VAR_1 * VAR_15)), VAR_16 + VAR_10);
  FUNC_2(0, VAR_16 + VAR_9);
  FUNC_2(1, VAR_16 + VAR_5);
  FUNC_2(VAR_14.play_sample_size, VAR_16 + VAR_8);
  FUNC_2(VAR_14.play_channels, VAR_16 + VAR_3);
  FUNC_2(VAR_14.play_sample_rate, VAR_16 + VAR_7);
  FUNC_2(VAR_11 * 0x100 + VAR_15, VAR_16 + VAR_6);
  FUNC_2(VAR_15, VAR_16 + VAR_4);
 }
}
