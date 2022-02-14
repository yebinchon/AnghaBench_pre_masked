
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dsp_image_seg {int count; } ;



__attribute__((used)) static size_t FUNC_0(const struct dsp_image_seg *VAR_0)
{
 return sizeof(*VAR_0) + VAR_0->count*sizeof(u32);
}
