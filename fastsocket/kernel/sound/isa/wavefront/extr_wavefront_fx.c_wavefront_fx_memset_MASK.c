
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fx_dsp_lsb; int fx_dsp_msb; int fx_dsp_addr; int fx_dsp_page; int fx_lcr; } ;
typedef TYPE_1__ snd_wavefront_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 int FUNC_0 (unsigned short,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3 (snd_wavefront_t *VAR_4,
       int VAR_5,
       int VAR_6,
       int VAR_7,
       unsigned short *VAR_8)
{
 if (VAR_5 < 0 || VAR_5 > 7) {
  FUNC_1 ("FX memset: "
   "page must be >= 0 and <= 7\n");
  return -(VAR_0);
 }

 if (VAR_6 < 0 || VAR_6 > 0x7f) {
  FUNC_1 ("FX memset: "
   "addr must be >= 0 and <= 7f\n");
  return -(VAR_0);
 }

 if (VAR_7 == 1) {

  FUNC_0 (VAR_3, VAR_4->fx_lcr);
  FUNC_0 (VAR_5, VAR_4->fx_dsp_page);
  FUNC_0 (VAR_6, VAR_4->fx_dsp_addr);
  FUNC_0 ((VAR_8[0] >> 8), VAR_4->fx_dsp_msb);
  FUNC_0 ((VAR_8[0] & 0xff), VAR_4->fx_dsp_lsb);

  FUNC_1 ("FX: addr %d:%x set to 0x%x\n",
   VAR_5, VAR_6, VAR_8[0]);

 } else {
  int VAR_9;

  FUNC_0 (VAR_2|VAR_3, VAR_4->fx_lcr);
  FUNC_0 (VAR_5, VAR_4->fx_dsp_page);
  FUNC_0 (VAR_6, VAR_4->fx_dsp_addr);

  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
   FUNC_0 ((VAR_8[VAR_9] >> 8), VAR_4->fx_dsp_msb);
   FUNC_0 ((VAR_8[VAR_9] & 0xff), VAR_4->fx_dsp_lsb);
   if (!FUNC_2 (VAR_4)) {
    break;
   }
  }

  if (VAR_9 != VAR_7) {
   FUNC_1 ("FX memset "
        "(0x%x, 0x%x, 0x%lx, %d) incomplete\n",
        VAR_5, VAR_6, (unsigned long) VAR_8, VAR_7);
   return -(VAR_1);
  }
 }

 return 0;
}
