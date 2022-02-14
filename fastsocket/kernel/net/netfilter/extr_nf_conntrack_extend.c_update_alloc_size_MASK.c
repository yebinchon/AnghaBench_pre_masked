
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_ct_ext_type {int flags; int id; int alloc_size; int len; int align; } ;
struct nf_ct_ext {int dummy; } ;
typedef enum nf_ct_ext_id { ____Placeholder_nf_ct_ext_id } nf_ct_ext_id ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct nf_ct_ext_type** VAR_2 ;

__attribute__((used)) static void FUNC_1(struct nf_ct_ext_type *VAR_3)
{
 int VAR_4, VAR_5;
 struct nf_ct_ext_type *VAR_6, *VAR_7;
 enum nf_ct_ext_id VAR_8 = 0, VAR_9 = VAR_1 - 1;


 if ((VAR_3->flags & VAR_0) == 0) {
  VAR_8 = VAR_3->id;
  VAR_9 = VAR_3->id;
 }



 for (VAR_4 = VAR_8; VAR_4 <= VAR_9; VAR_4++) {
  VAR_6 = VAR_2[VAR_4];
  if (!VAR_6)
   continue;

  VAR_6->alloc_size = sizeof(struct nf_ct_ext)
     + FUNC_0(sizeof(struct nf_ct_ext), VAR_6->align)
     + VAR_6->len;
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
   VAR_7 = VAR_2[VAR_5];
   if (VAR_7 == ((void*)0) || VAR_7 == VAR_6 ||
       (VAR_7->flags & VAR_0) == 0)
    continue;

   VAR_6->alloc_size = FUNC_0(VAR_6->alloc_size, VAR_7->align)
      + VAR_7->len;
  }
 }
}
