
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int last_recbank; int rec_sample_size; int rec_channels; int rec_sample_rate; scalar_t__ base; int lock; scalar_t__ io; scalar_t__ DARQ; } ;
typedef scalar_t__ LPDAQD ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 TYPE_1__ VAR_17 ;
 int FUNC_2 (scalar_t__,int ,int) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(void)
{
 int VAR_18;
 LPDAQD VAR_19;
 unsigned long VAR_20;

 VAR_17.last_recbank = 2;
 FUNC_6(FUNC_1(0 * VAR_0), VAR_17.DARQ + VAR_15);
 FUNC_6(FUNC_1(VAR_17.last_recbank * VAR_0), VAR_17.DARQ + VAR_16);


 FUNC_4(&VAR_17.lock, VAR_20);
 FUNC_3(VAR_13, VAR_17.io + VAR_14);
 FUNC_2(VAR_17.base, 0, VAR_10 * 3);
 FUNC_3(VAR_12, VAR_17.io + VAR_14);
 FUNC_5(&VAR_17.lock, VAR_20);

 for (VAR_18 = 0, VAR_19 = VAR_17.base + VAR_9; VAR_18 < 3; ++VAR_18, VAR_19 += VAR_0) {
  FUNC_6(FUNC_0((DWORD)(VAR_10 * VAR_18)) + 0x4000, VAR_19 + VAR_8);
  FUNC_6(VAR_10, VAR_19 + VAR_7);
  FUNC_6(1, VAR_19 + VAR_3);
  FUNC_6(VAR_17.rec_sample_size, VAR_19 + VAR_6);
  FUNC_6(VAR_17.rec_channels, VAR_19 + VAR_1);
  FUNC_6(VAR_17.rec_sample_rate, VAR_19 + VAR_5);
  FUNC_6(VAR_11 * 0x100 + VAR_18, VAR_19 + VAR_4);
  FUNC_6(VAR_18, VAR_19 + VAR_2);
 }
}
