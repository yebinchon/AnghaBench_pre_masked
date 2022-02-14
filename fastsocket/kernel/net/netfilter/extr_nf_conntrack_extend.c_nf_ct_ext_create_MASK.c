
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_ct_ext_type {unsigned int len; int alloc_size; int align; } ;
struct nf_ct_ext {unsigned int* offset; unsigned int len; int rcu; } ;
typedef int gfp_t ;
typedef enum nf_ct_ext_id { ____Placeholder_nf_ct_ext_id } nf_ct_ext_id ;


 unsigned int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct nf_ct_ext* FUNC_3 (int ,int ) ;
 int * VAR_0 ;
 struct nf_ct_ext_type* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static void *
FUNC_7(struct nf_ct_ext **VAR_1, enum nf_ct_ext_id VAR_2, gfp_t VAR_3)
{
 unsigned int VAR_4, VAR_5;
 struct nf_ct_ext_type *VAR_6;

 FUNC_5();
 VAR_6 = FUNC_4(VAR_0[VAR_2]);
 FUNC_1(VAR_6 == ((void*)0));
 VAR_4 = FUNC_0(sizeof(struct nf_ct_ext), VAR_6->align);
 VAR_5 = VAR_4 + VAR_6->len;
 FUNC_6();

 *VAR_1 = FUNC_3(VAR_6->alloc_size, VAR_3);
 if (!*VAR_1)
  return ((void*)0);

 FUNC_2(&(*VAR_1)->rcu);
 (*VAR_1)->offset[VAR_2] = VAR_4;
 (*VAR_1)->len = VAR_5;

 return (void *)(*VAR_1) + VAR_4;
}
