
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dev; } ;
typedef TYPE_1__ e6000sw_softc_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int) ;

__attribute__((used)) static int
FUNC_3(e6000sw_softc_t *VAR_6)
{

 if (FUNC_0(VAR_6, VAR_5, VAR_3)) {
  FUNC_1(VAR_6->dev, "VTU unit is busy, cannot access\n");
  return (VAR_0);
 }

 FUNC_2(VAR_6, VAR_2, VAR_5, VAR_4 | VAR_3);
 if (FUNC_0(VAR_6, VAR_5, VAR_3)) {
  FUNC_1(VAR_6->dev, "Timeout while flushing VTU\n");
  return (VAR_1);
 }

 return (0);
}
