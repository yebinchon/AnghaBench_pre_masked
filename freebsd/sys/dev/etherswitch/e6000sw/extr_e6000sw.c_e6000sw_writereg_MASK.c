
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sw_addr; int dev; } ;
typedef TYPE_1__ e6000sw_softc_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ,int,int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static __inline void
FUNC_5(e6000sw_softc_t *VAR_7, int VAR_8, int VAR_9, int VAR_10)
{

 FUNC_0(VAR_7, VAR_0);

 if (!FUNC_2(VAR_7)) {
  FUNC_1(VAR_7->dev, VAR_8, VAR_9, VAR_10);
  return;
 }

 if (FUNC_3(VAR_7, VAR_7->sw_addr)) {
  FUNC_4("e6000sw: readreg timeout\n");
  return;
 }
 FUNC_1(VAR_7->dev, VAR_7->sw_addr, VAR_6, VAR_10);
 FUNC_1(VAR_7->dev, VAR_7->sw_addr, VAR_1,
     VAR_4 | (VAR_9 & VAR_5) |
     ((VAR_8 << VAR_2) & VAR_3));
}
