
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_ct_ext_type {size_t id; scalar_t__ len; int align; scalar_t__ alloc_size; } ;
struct nf_ct_ext {int dummy; } ;


 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_3 (scalar_t__,struct nf_ct_ext_type*) ;
 int FUNC_4 (struct nf_ct_ext_type*) ;

int FUNC_5(struct nf_ct_ext_type *VAR_3)
{
 int VAR_4 = 0;

 FUNC_1(&VAR_1);
 if (VAR_2[VAR_3->id]) {
  VAR_4 = -VAR_0;
  goto out;
 }



 VAR_3->alloc_size = FUNC_0(sizeof(struct nf_ct_ext), VAR_3->align)
      + VAR_3->len;
 FUNC_3(VAR_2[VAR_3->id], VAR_3);
 FUNC_4(VAR_3);
out:
 FUNC_2(&VAR_1);
 return VAR_4;
}
