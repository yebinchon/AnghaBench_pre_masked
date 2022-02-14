
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int dname_len; int * dname; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct regional {int dummy; } ;
struct compress_tree_node {int labs; size_t offset; } ;
typedef int sldns_buffer ;


 int FUNC_0 (size_t) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct compress_tree_node* FUNC_1 (struct compress_tree_node**,int *,int,struct compress_tree_node***) ;
 int FUNC_2 (int *,int,size_t,struct regional*,struct compress_tree_node*,struct compress_tree_node**) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int *,int,struct compress_tree_node*) ;

__attribute__((used)) static int
FUNC_8(struct ub_packed_rrset_key* VAR_4, sldns_buffer* VAR_5,
 struct regional* VAR_6, struct compress_tree_node** VAR_7,
 size_t VAR_8, uint16_t* VAR_9, int VAR_10)
{
 struct compress_tree_node* VAR_11;
 struct compress_tree_node** VAR_12 = ((void*)0);
 if(!*VAR_9) {

  if((VAR_11 = FUNC_1(VAR_7, VAR_4->rk.dname,
   VAR_10, &VAR_12))) {
   if(VAR_11->labs == VAR_10)


    *VAR_9 = FUNC_3(FUNC_0(VAR_11->offset));
   if(!FUNC_7(VAR_5, VAR_4->rk.dname,
    VAR_10, VAR_11))
    return VAR_3;

   if(FUNC_4(VAR_5) < 4+4+2)
    return VAR_3;
  } else {

   if(FUNC_4(VAR_5) < VAR_4->rk.dname_len+4+4+2)
    return VAR_3;
   FUNC_5(VAR_5, VAR_4->rk.dname,
    VAR_4->rk.dname_len);
   if(VAR_8 <= VAR_0)
    *VAR_9 = FUNC_3(FUNC_0(VAR_8));
  }
  if(!FUNC_2(VAR_4->rk.dname, VAR_10,
   VAR_8, VAR_6, VAR_11, VAR_12))
   return VAR_2;
 } else {

  if(VAR_10 == 1) {
   if(FUNC_4(VAR_5) < 1+4+4+2)
    return VAR_3;
   FUNC_6(VAR_5, 0);
  } else {
   if(FUNC_4(VAR_5) < 2+4+4+2)
    return VAR_3;
   FUNC_5(VAR_5, VAR_9, 2);
  }
 }
 return VAR_1;
}
