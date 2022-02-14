
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int speed ;
typedef scalar_t__ phandle_t ;
struct TYPE_4__ {int fixed_mask; int fixed25_mask; int dev; } ;
typedef TYPE_1__ e6000sw_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,char*,int*,int) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (scalar_t__,char*) ;

__attribute__((used)) static int
FUNC_4(e6000sw_softc_t *VAR_4, phandle_t VAR_5, uint32_t VAR_6)
{
 int VAR_7;
 phandle_t VAR_8;

 VAR_8 = FUNC_3(VAR_5, "fixed-link");

 if (VAR_8 != 0) {
  VAR_4->fixed_mask |= (1 << VAR_6);

  if (FUNC_1(VAR_8,
      "speed", &VAR_7, sizeof(VAR_7)) < 0) {
   FUNC_2(VAR_4->dev,
       "Port %d has a fixed-link node without a speed "
       "property\n", VAR_6);
   return (VAR_0);
  }
  if (VAR_7 == 2500 && (FUNC_0(VAR_4, VAR_1) ||
       FUNC_0(VAR_4, VAR_3) || FUNC_0(VAR_4, VAR_2)))
   VAR_4->fixed25_mask |= (1 << VAR_6);
 }

 return (0);
}
