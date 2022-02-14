
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_tid {scalar_t__ paused; TYPE_1__* an; } ;
struct ath_softc {int dummy; } ;
struct TYPE_2__ {scalar_t__ an_leak_count; } ;


 int FUNC_0 (struct ath_softc*) ;

__attribute__((used)) static int
FUNC_1(struct ath_softc *VAR_0, struct ath_tid *VAR_1)
{

 FUNC_0(VAR_0);

 if (VAR_1->an->an_leak_count > 0) {
  return (1);
 }
 if (VAR_1->paused)
  return (0);
 return (1);
}
