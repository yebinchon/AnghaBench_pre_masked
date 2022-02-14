
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_softc {int dummy; } ;
struct vmbus_channel {int ch_id; int ch_cpuid; } ;


 int VAR_0 ;
 int* FUNC_0 (struct vmbus_softc*,int ,int ) ;
 scalar_t__ FUNC_1 (int volatile*,int,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct vmbus_channel const*,char*,int,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct vmbus_softc *VAR_3,
    const struct vmbus_channel *VAR_4)
{
 volatile int *VAR_5;
 int VAR_6;

 VAR_6 = (VAR_4->ch_id / VAR_0) + 1;
 VAR_5 = FUNC_0(VAR_3, VAR_2, VAR_4->ch_cpuid);

 for (;;) {
  int VAR_7;

  VAR_7 = *VAR_5;
  if (VAR_7 >= VAR_6)
   break;
  if (FUNC_1(VAR_5, VAR_7, VAR_6)) {
   if (VAR_1) {
    FUNC_2(VAR_4,
        "chan%u update cpu%d flag_cnt to %d\n",
        VAR_4->ch_id, VAR_4->ch_cpuid, VAR_6);
   }
   break;
  }
 }
}
