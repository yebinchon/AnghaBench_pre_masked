
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct ntb_plx_softc {unsigned int spad_count1; unsigned int spad_count2; int conf_res; scalar_t__ spad_off2; scalar_t__ spad_off1; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 struct ntb_plx_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, unsigned int VAR_2, uint32_t VAR_3)
{
 struct ntb_plx_softc *VAR_4 = FUNC_1(VAR_1);
 u_int VAR_5;

 if (VAR_2 >= VAR_4->spad_count1 + VAR_4->spad_count2)
  return (VAR_0);

 if (VAR_2 < VAR_4->spad_count1)
  VAR_5 = VAR_4->spad_off1 + VAR_2 * 4;
 else
  VAR_5 = VAR_4->spad_off2 + (VAR_2 - VAR_4->spad_count1) * 4;
 FUNC_0(VAR_4->conf_res, VAR_5, VAR_3);
 return (0);
}
