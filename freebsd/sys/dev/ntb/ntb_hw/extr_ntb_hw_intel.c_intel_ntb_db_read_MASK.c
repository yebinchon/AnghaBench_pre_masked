
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct ntb_softc {TYPE_1__* self_reg; int fake_db; } ;
typedef int device_t ;
struct TYPE_2__ {int db_bell; } ;


 scalar_t__ FUNC_0 (struct ntb_softc*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ntb_softc*,int ) ;
 struct ntb_softc* FUNC_2 (int ) ;

__attribute__((used)) static uint64_t
FUNC_3(device_t VAR_1)
{
 struct ntb_softc *VAR_2 = FUNC_2(VAR_1);

 if (FUNC_0(VAR_2, VAR_0))
  return (VAR_2->fake_db);

 return (FUNC_1(VAR_2, VAR_2->self_reg->db_bell));
}
