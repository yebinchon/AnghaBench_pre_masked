
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_ct_ext_type {int len; int (* move ) (void*,void*) ;int align; } ;
struct nf_ct_ext {int len; int* offset; int rcu; } ;
struct nf_conn {struct nf_ct_ext* ext; } ;
typedef int gfp_t ;
typedef enum nf_ct_ext_id { ____Placeholder_nf_ct_ext_id } nf_ct_ext_id ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 struct nf_ct_ext* FUNC_3 (struct nf_ct_ext*,int,int ) ;
 int VAR_1 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (void*,int ,int) ;
 void* FUNC_6 (struct nf_ct_ext**,int,int ) ;
 scalar_t__ FUNC_7 (struct nf_conn*,int) ;
 int * VAR_2 ;
 int FUNC_8 (struct nf_conn*) ;
 struct nf_ct_ext_type* FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (void*,void*) ;

void *FUNC_13(struct nf_conn *VAR_3, enum nf_ct_ext_id VAR_4, gfp_t VAR_5)
{
 struct nf_ct_ext *VAR_6;
 int VAR_7, VAR_8, VAR_9;
 struct nf_ct_ext_type *VAR_10;


 FUNC_2(!FUNC_8(VAR_3));

 if (!VAR_3->ext)
  return FUNC_6(&VAR_3->ext, VAR_4, VAR_5);

 if (FUNC_7(VAR_3, VAR_4))
  return ((void*)0);

 FUNC_10();
 VAR_10 = FUNC_9(VAR_2[VAR_4]);
 FUNC_1(VAR_10 == ((void*)0));

 VAR_9 = FUNC_0(VAR_3->ext->len, VAR_10->align);
 VAR_8 = VAR_9 + VAR_10->len;
 FUNC_11();

 VAR_6 = FUNC_3(VAR_3->ext, VAR_8, VAR_5);
 if (!VAR_6)
  return ((void*)0);

 if (VAR_6 != VAR_3->ext) {
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
   if (!FUNC_7(VAR_3, VAR_7))
    continue;

   FUNC_10();
   VAR_10 = FUNC_9(VAR_2[VAR_7]);
   if (VAR_10 && VAR_10->move)
    VAR_10->move((void *)VAR_6 + VAR_6->offset[VAR_7],
     (void *)VAR_3->ext + VAR_3->ext->offset[VAR_7]);
   FUNC_11();
  }
  FUNC_4(&VAR_3->ext->rcu, VAR_1);
  VAR_3->ext = VAR_6;
 }

 VAR_6->offset[VAR_4] = VAR_9;
 VAR_6->len = VAR_8;
 FUNC_5((void *)VAR_6 + VAR_9, 0, VAR_8 - VAR_9);
 return (void *)VAR_6 + VAR_9;
}
