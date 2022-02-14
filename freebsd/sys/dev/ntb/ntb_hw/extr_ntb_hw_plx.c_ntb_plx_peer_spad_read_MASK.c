
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct ntb_plx_softc {unsigned int spad_count1; unsigned int spad_count2; size_t b2b_mw; int conf_res; TYPE_1__* mw_info; scalar_t__ spad_offp2; scalar_t__ spad_offp1; } ;
typedef int device_t ;
struct TYPE_2__ {int mw_res; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 struct ntb_plx_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, unsigned int VAR_2, uint32_t *VAR_3)
{
 struct ntb_plx_softc *VAR_4 = FUNC_1(VAR_1);
 u_int VAR_5;

 if (VAR_2 >= VAR_4->spad_count1 + VAR_4->spad_count2)
  return (VAR_0);

 if (VAR_2 < VAR_4->spad_count1)
  VAR_5 = VAR_4->spad_offp1 + VAR_2 * 4;
 else
  VAR_5 = VAR_4->spad_offp2 + (VAR_2 - VAR_4->spad_count1) * 4;
 if (VAR_4->b2b_mw >= 0)
  *VAR_3 = FUNC_0(VAR_4->mw_info[VAR_4->b2b_mw].mw_res, VAR_5);
 else
  *VAR_3 = FUNC_0(VAR_4->conf_res, VAR_5);
 return (0);
}
