
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_engine {TYPE_1__* codec; } ;
struct ca0132_spec {unsigned int dsp_stream_id; } ;
struct TYPE_2__ {struct ca0132_spec* spec; } ;



__attribute__((used)) static unsigned int FUNC_0(struct dma_engine *VAR_0)
{
 struct ca0132_spec *VAR_1 = VAR_0->codec->spec;

 return VAR_1->dsp_stream_id;
}
