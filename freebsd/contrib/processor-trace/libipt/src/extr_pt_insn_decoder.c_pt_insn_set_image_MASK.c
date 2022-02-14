
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_image {int dummy; } ;
struct pt_insn_decoder {struct pt_image* image; struct pt_image default_image; } ;


 int VAR_0 ;

int FUNC_0(struct pt_insn_decoder *VAR_1,
        struct pt_image *VAR_2)
{
 if (!VAR_1)
  return -VAR_0;

 if (!VAR_2)
  VAR_2 = &VAR_1->default_image;

 VAR_1->image = VAR_2;
 return 0;
}
