
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tsec_softc {int rx_ic_count; int rx_ic_time; } ;


 int VAR_0 ;
 int FUNC_0 (struct tsec_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct tsec_softc *VAR_1)
{
 uint32_t VAR_2;

 if (VAR_1->rx_ic_count == 0 || VAR_1->rx_ic_time == 0)

  VAR_2 = 0;
 else {
  VAR_2 = 0x80000000;
  VAR_2 |= (VAR_1->rx_ic_count << 21);
  VAR_2 |= VAR_1->rx_ic_time;
 }

 FUNC_0(VAR_1, VAR_0, VAR_2);
}
