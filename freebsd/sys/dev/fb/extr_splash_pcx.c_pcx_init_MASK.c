
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct pcx_header {int manufactor; int version; int encoding; int nplanes; int bpp; scalar_t__ bpsl; scalar_t__ ymin; scalar_t__ ymax; scalar_t__ xmin; scalar_t__ xmax; } ;
struct TYPE_2__ {scalar_t__ bpsl; int bpp; int planes; int zlen; int* zdata; int* palette; scalar_t__ height; scalar_t__ width; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(void *VAR_2, int VAR_3)
{
 const struct pcx_header *VAR_4 = VAR_2;

 if (VAR_3 < 128 + 1 + 1 + 768 ||
     VAR_4->manufactor != 10 ||
     VAR_4->version != 5 ||
     VAR_4->encoding != 1 ||
     VAR_4->nplanes != 1 ||
     VAR_4->bpp != 8 ||
     VAR_4->bpsl > VAR_0 ||
     ((uint8_t *)VAR_2)[VAR_3 - 769] != 12) {
  FUNC_0("splash_pcx: invalid PCX image\n");
  return (1);
 }
 VAR_1.width = VAR_4->xmax - VAR_4->xmin + 1;
 VAR_1.height = VAR_4->ymax - VAR_4->ymin + 1;
 VAR_1.bpsl = VAR_4->bpsl;
 VAR_1.bpp = VAR_4->bpp;
 VAR_1.planes = VAR_4->nplanes;
 VAR_1.zlen = VAR_3 - (128 + 1 + 768);
 VAR_1.zdata = (uint8_t *)VAR_2 + 128;
 VAR_1.palette = (uint8_t *)VAR_2 + VAR_3 - 768;
 return (0);
}
