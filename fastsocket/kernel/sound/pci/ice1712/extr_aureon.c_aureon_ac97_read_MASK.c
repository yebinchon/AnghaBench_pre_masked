
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {struct aureon_spec* spec; } ;
struct aureon_spec {unsigned short* stac9744; } ;



__attribute__((used)) static unsigned short FUNC_0(struct snd_ice1712 *VAR_0, unsigned short VAR_1)
{
 struct aureon_spec *VAR_2 = VAR_0->spec;
 return VAR_2->stac9744[(VAR_1 & 0x7F) >> 1];
}
