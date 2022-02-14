
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_insn_decoder {struct pt_image* image; } ;
struct pt_image {int dummy; } ;



struct pt_image *FUNC_0(struct pt_insn_decoder *VAR_0)
{
 if (!VAR_0)
  return ((void*)0);

 return VAR_0->image;
}
