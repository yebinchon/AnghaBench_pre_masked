
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ntb_softc {unsigned int spad_count; TYPE_1__* peer_reg; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ spad; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ntb_softc*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct ntb_softc* FUNC_1 (int ) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3, unsigned int VAR_4, uint32_t *VAR_5)
{
 struct ntb_softc *VAR_6 = FUNC_1(VAR_3);

 if (VAR_4 >= VAR_6->spad_count)
  return (VAR_0);

 if (FUNC_0(VAR_6, VAR_1))
  *VAR_5 = FUNC_2(4, VAR_2 + VAR_4 * 4);
 else
  *VAR_5 = FUNC_3(4, VAR_6->peer_reg->spad + VAR_4 * 4);

 return (0);
}
