
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct ntb_softc {int db_mask; TYPE_1__* self_reg; } ;
typedef int device_t ;
struct TYPE_2__ {int db_mask; } ;


 int FUNC_0 (struct ntb_softc*) ;
 int FUNC_1 (struct ntb_softc*) ;
 int FUNC_2 (struct ntb_softc*,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct ntb_softc*,int ,int ) ;
 struct ntb_softc* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_1, uint64_t VAR_2)
{
 struct ntb_softc *VAR_3 = FUNC_4(VAR_1);

 FUNC_0(VAR_3);
 VAR_3->db_mask |= VAR_2;
 if (!FUNC_2(VAR_3, VAR_0))
  FUNC_3(VAR_3, VAR_3->self_reg->db_mask, VAR_3->db_mask);
 FUNC_1(VAR_3);
}
