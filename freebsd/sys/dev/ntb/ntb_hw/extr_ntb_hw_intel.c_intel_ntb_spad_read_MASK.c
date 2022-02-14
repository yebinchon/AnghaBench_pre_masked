
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ntb_softc {unsigned int spad_count; TYPE_1__* self_reg; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ spad; } ;


 int VAR_0 ;
 struct ntb_softc* FUNC_0 (int ) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, unsigned int VAR_2, uint32_t *VAR_3)
{
 struct ntb_softc *VAR_4 = FUNC_0(VAR_1);

 if (VAR_2 >= VAR_4->spad_count)
  return (VAR_0);

 *VAR_3 = FUNC_1(4, VAR_4->self_reg->spad + VAR_2 * 4);

 return (0);
}
