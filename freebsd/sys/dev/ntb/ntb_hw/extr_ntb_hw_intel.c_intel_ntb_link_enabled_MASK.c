
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ntb_softc {scalar_t__ type; scalar_t__ conn_type; TYPE_1__* reg; int device; } ;
typedef int device_t ;
struct TYPE_2__ {int ntb_ctl; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct ntb_softc* FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static bool
FUNC_3(device_t VAR_5)
{
 struct ntb_softc *VAR_6 = FUNC_0(VAR_5);
 uint32_t VAR_7;

 if (VAR_6->type == VAR_1) {
  VAR_7 = FUNC_2(VAR_6->device, VAR_4, 4);
  return ((VAR_7 & VAR_0) != 0);
 }

 if (VAR_6->conn_type == VAR_3)
  return (1);

 VAR_7 = FUNC_1(4, VAR_6->reg->ntb_ctl);
 return ((VAR_7 & VAR_2) == 0);
}
