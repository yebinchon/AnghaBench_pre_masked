
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_cs46xx {int dummy; } ;
struct dsp_symbol_entry {int dummy; } ;
struct TYPE_4__ {int * data; scalar_t__ size; scalar_t__ offset; } ;
struct TYPE_3__ {int * symbols; scalar_t__ highest_frag_index; scalar_t__ nsymbols; } ;
struct dsp_spos_instance {int spdif_in_sample_rate; int dac_volume_right; int dac_volume_left; int spdif_input_volume_right; int spdif_input_volume_left; unsigned int spdif_csuv_default; unsigned int spdif_csuv_stream; int * modules; scalar_t__ nmodules; scalar_t__ ntask; scalar_t__ nscb; TYPE_2__ code; TYPE_1__ symbol_table; } ;
struct dsp_module_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct snd_cs46xx*) ;
 int FUNC_2 (struct dsp_spos_instance*) ;
 void* FUNC_3 (int,int ) ;
 struct dsp_spos_instance* FUNC_4 (int,int ) ;
 int * FUNC_5 (int) ;

struct dsp_spos_instance *FUNC_6 (struct snd_cs46xx * VAR_5)
{
 struct dsp_spos_instance * VAR_6 = FUNC_4(sizeof(struct dsp_spos_instance), VAR_3);

 if (VAR_6 == ((void*)0))
  return ((void*)0);


 VAR_6->symbol_table.nsymbols = 0;
 VAR_6->symbol_table.symbols = FUNC_5(sizeof(struct dsp_symbol_entry) *
         VAR_2);
 VAR_6->symbol_table.highest_frag_index = 0;

 if (VAR_6->symbol_table.symbols == ((void*)0)) {
  FUNC_1(VAR_5);
  goto error;
 }

 VAR_6->code.offset = 0;
 VAR_6->code.size = 0;
 VAR_6->code.data = FUNC_3(VAR_0, VAR_3);

 if (VAR_6->code.data == ((void*)0)) {
  FUNC_1(VAR_5);
  goto error;
 }

 VAR_6->nscb = 0;
 VAR_6->ntask = 0;

 VAR_6->nmodules = 0;
 VAR_6->modules = FUNC_3(sizeof(struct dsp_module_desc) * VAR_1, VAR_3);

 if (VAR_6->modules == ((void*)0)) {
  FUNC_1(VAR_5);
  goto error;
 }



 VAR_6->spdif_in_sample_rate = 48000;


 VAR_6->dac_volume_right = 0x8000;
 VAR_6->dac_volume_left = 0x8000;
 VAR_6->spdif_input_volume_right = 0x8000;
 VAR_6->spdif_input_volume_left = 0x8000;



 VAR_6->spdif_csuv_default =
  VAR_6->spdif_csuv_stream =
                ((unsigned int)FUNC_0( (VAR_4 & 0xff)) << 24) |
                ((unsigned int)FUNC_0( ((VAR_4 >> 8) & 0xff)) << 16) |
                 (unsigned int)FUNC_0( (VAR_4 >> 24) & 0xff) |
                                     (1 << 13) | (1 << 12);

 return VAR_6;

error:
 FUNC_2(VAR_6);
 return ((void*)0);
}
