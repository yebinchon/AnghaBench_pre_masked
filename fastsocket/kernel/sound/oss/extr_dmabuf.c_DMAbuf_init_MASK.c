
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct audio_operations {int parent_dev; int flags; TYPE_1__* dmap_out; TYPE_1__* dmap_in; TYPE_1__* dmaps; int * d; } ;
struct TYPE_2__ {int dma; int * raw_buf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct audio_operations** VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;

void FUNC_2(int VAR_4, int VAR_5, int VAR_6)
{
 struct audio_operations *VAR_7 = VAR_2[VAR_4];




 if (VAR_7 && VAR_7->dmap_out == ((void*)0)) {
  if (VAR_7->d == ((void*)0))
   FUNC_0("OSS: audio_devs[%d]->d == NULL\n", VAR_4);

  if (VAR_7->parent_dev) {
   int VAR_8 = VAR_7->parent_dev - 1;
   VAR_7->dmap_out = VAR_2[VAR_8]->dmap_out;
   VAR_7->dmap_in = VAR_2[VAR_8]->dmap_in;
  } else {
   VAR_7->dmap_out = VAR_7->dmap_in = &VAR_7->dmaps[0];
   VAR_7->dmap_out->dma = VAR_5;
   if (VAR_7->flags & VAR_1) {
    VAR_7->dmap_in = &VAR_7->dmaps[1];
    VAR_7->dmap_in->dma = VAR_6;
   }
  }

  if (VAR_3 == VAR_0) {
   if (VAR_7->dmap_in->raw_buf == ((void*)0))
    FUNC_1(VAR_7->dmap_in);
   if (VAR_7->dmap_out->raw_buf == ((void*)0))
    FUNC_1(VAR_7->dmap_out);
  }
 }
}
