
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u_int ;
struct TYPE_2__ {int bad_rx_number; int all_rx_number; } ;
struct sbni_softc {TYPE_1__ in_stats; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sbni_softc*) ;
 scalar_t__ FUNC_1 (struct sbni_softc*,int*,int*,int*,int*,int *) ;
 int FUNC_2 (struct sbni_softc*,int) ;
 int FUNC_3 (struct sbni_softc*,int ) ;
 int FUNC_4 (struct sbni_softc*,int ,int) ;
 int FUNC_5 (struct sbni_softc*,int,int ) ;
 int FUNC_6 (struct sbni_softc*,int,int,int,int ) ;

__attribute__((used)) static int
FUNC_7(struct sbni_softc *VAR_4)
{
 u_int32_t VAR_5;
 u_int VAR_6, VAR_7, VAR_8;
 u_int VAR_9, VAR_10;

 VAR_5 = VAR_0;
 if (FUNC_1(VAR_4, &VAR_6, &VAR_7, &VAR_8, &VAR_9, &VAR_5)) {
  VAR_10 = VAR_6 > 4 ?
      FUNC_6(VAR_4, VAR_6, VAR_7, VAR_9, VAR_5) :
      FUNC_5(VAR_4, VAR_6, VAR_5);
  if (VAR_10)
   FUNC_2(VAR_4, VAR_8);
 } else {
  VAR_6 = 0;
  VAR_10 = 0;
 }

 FUNC_4(VAR_4, VAR_1, FUNC_3(VAR_4, VAR_1) ^ VAR_2);
 if (VAR_10) {
  VAR_4->state |= VAR_3;
  if (VAR_6 > 4)
   VAR_4->in_stats.all_rx_number++;
 } else {
  VAR_4->state &= ~VAR_3;
  FUNC_0(VAR_4);
  VAR_4->in_stats.all_rx_number++;
  VAR_4->in_stats.bad_rx_number++;
 }

 return (!VAR_10 || VAR_6 > 4);
}
